/*
 
# Trabalho
 
Este programa contém uma implementação parcial de um heap mínimo, contendo o
necessário para resolver o problema "Telemarketing" da Olimpíada Brasileira de
Informática de 2007. A descrição do problema se encontra em
http://olimpiada.ic.unicamp.br/pratique/programacao/nivel1/2007f2p1_tele. Leia
a descrição para entender o que significa Vendedor e como se determina quando
um vendedor é menor do que outro.
 
Algumas funções contém um comentário "// TODO". Essas funções estão
incompletas. Seu trabalho é escrever o código dessas funções incompletas, sem
no entanto modificar nada mais no programa. O programa é autotestável: a
função main chama as funções e compara a saída obtida com a saída esperada.
Ao final, ele imprime sua nota, entre 0 e 40.
 
Além da correção automática, o código-fonte será lido para determinar se a
função realmente faz o que deveria ou se responde corretamente apenas às
entradas que são testadas.
 
O trabalho deve ser feito em equipes de 1, 2 ou 3 alunos. Cada aluno só pode
participar de um equipe.
 
# Entrega
 
A solução deve ser enviada para o e-mail <rodrigo@dcc.ufba.br> até as 23:59:59
do sábado, dia 28 de novembro de 2015 (horário local de Salvador). O e-mail
deve ter o assunto "[MATA40] Trabalho sobre Heaps" e deve conter como anexo um
único arquivo que representa o código-fonte da solução na linguagem C. O nome
do arquivo deve consistir apenas dos números de matrícula dos alunos da equipe,
separados por hífens, e da extensão .c. Exemplo: 200310593-210115051.c.
 
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
 
/////////////////////////////////////////////////////////////////////
// Definição dos structs.
/////////////////////////////////////////////////////////////////////
 
typedef struct {
  // Identificador do vendedor. Número sequencial a partir de 1.
  int id;
  // Instante em que o vendedor estará disponível.
  int tempo;
} Vendedor;
 
typedef struct {
  int tamanho;
  Vendedor *itens;
} Heap;
 
/////////////////////////////////////////////////////////////////////
// Funções de heap.
/////////////////////////////////////////////////////////////////////
 
/**
 * Retorna o índice do filho à esquerda do item no índice pos.
 * Ex.: indiceFilhoEsq(3) retorna 7.
 */
int indiceFilhoEsq(int pos) {
  // TODO
    return (2 * pos + 1);
}
 
/**
 * Retorna o índice do filho à direita do item no índice pos.
 * Ex.: indiceFilhoEsq(3) retorna 8.
 */
int indiceFilhoDir(int pos) {
  // TODO
    return (2 * pos + 2);
}
 
/**
 * Retorna 1 se o item na posição pos1 do heap for menor do que
 * o item na posição pos2 do heap.
 * Caso contrário, retorna 0.
 */
int menor(Heap *heap, int pos1, int pos2) {
    // TODO
    if(pos1 == pos2){
        return 0;
    }
    if((heap->itens[pos1].tempo) <= (heap->itens[pos2].tempo)){
        return 1;
    }
    else{
        return 0;
    }   
}
 
/**
 * Cria um vetor que representa um heap mínimo no qual cada item é um Vendedor.
 * O item na posição i do vetor deve ter id = (i + 1) e tempo = 0.
 */
Heap *criaHeapMin(int tamanho) {
  int i;
  Heap *heap = (Heap *)malloc(sizeof(Heap));
  heap->tamanho = tamanho;
  heap->itens = (Vendedor *)malloc(tamanho * sizeof(Vendedor));
 
  for (i = 0; i < tamanho; i++) {
    heap->itens[i].id = i + 1;
    heap->itens[i].tempo = 0;
  }
  return heap;
}
 
/**
 * Destrói o heap.
 */
void destroiHeap(Heap *heap) {
  free(heap->itens);
  free(heap);
}
 
Vendedor *criaVendedor(int id, int tempo) {
  Vendedor *vendedor = (Vendedor *)malloc(sizeof(Vendedor));
  vendedor->id = id;
  vendedor->tempo = tempo;
  return vendedor;
}
 
/**
 * Retorna o índice do último item que não é folha.
 */
int indiceUltimoNaoFolha(Heap *heap) {
  return (heap->tamanho - 2) / 2;
}
 
/**
 * Retorna 1 se o heap é um heap mínimo; caso contrário, retorna 0.
 */
int ehHeapMin(Heap *heap) {
    // TODO
    int i, min = 0, fesq = indiceFilhoEsq(i), fdir = indiceFilhoDir(i);
 
    for(i = 1; i < heap->tamanho; i++){
        if(heap->itens[min].tempo <= heap->itens[i].tempo && heap->itens[min].id <= heap->itens[i].id){
            min = i;
        }
        else{
            return 0;
        }
    }
    return 1;
}
 
/**
 * Retorna 1 se o item na posição 1 é uma folha.
 */
int ehFolha(Heap *heap, int pos) {
  int n = heap->tamanho;
  return pos >= n/2 && pos < n;
}
 
/**
 * Troca dois itens de posição.
 */
void troca(Vendedor *a, Vendedor *b) {
  Vendedor temp = *a;
  *a = *b;
  *b = temp;
}
 
/**
 * Afunda um elemento no heap.
 */
 
void afunda(Heap *heap, int pos) {
  
  int fesq = indiceFilhoEsq(pos);
  int fdir = indiceFilhoDir(pos);
  int maior = pos;
  
  if(fesq < heap->tamanho){
    if(heap->itens[fesq].tempo < heap->itens[maior].tempo){
      maior = fesq;
    }
  }
  if(fesq < heap->tamanho){
    if(heap->itens[fesq].tempo == heap->itens[maior].tempo){
      if(heap->itens[fesq].id < heap->itens[maior].id){
        maior = fesq;
      }
    }
  }   
  if(fdir < heap->tamanho){
    if(heap->itens[fdir].tempo < heap->itens[maior].tempo){
      maior = fdir;
    }
  }
  if(fdir < heap->tamanho){
    if(heap->itens[fdir].tempo == heap->itens[maior].tempo){
      if(heap->itens[fdir].id < heap->itens[maior].id){
        maior = fdir;
      }
    }
  }
  
  if (pos != maior) {
    troca(&heap->itens[pos], &heap->itens[maior]);
    afunda(heap, maior);
  }
}

/////////////////////////////////////////////////////////////////////
// Funções auxiliares
/////////////////////////////////////////////////////////////////////
 
void imprimeVendedor(Vendedor *v) {
  printf("(%d %ds) ", v->id, v->tempo); 
}
 
void imprimeHeap(Heap *heap) {
  int i;
  for (i = 0; i < heap->tamanho; i++) {
    imprimeVendedor(&heap->itens[i]);
  }
  printf("-\n");
}
 
/////////////////////////////////////////////////////////////////////
// Funções relacionadas ao problema de telemarketing.
/////////////////////////////////////////////////////////////////////
 
Heap *inicializaProblemaHeap(int numVendedores) {
  return criaHeapMin(numVendedores);
}
 
int *inicializaProblemaVendas(int numVendedores) {
  int i;
  int *vendas = (int *)malloc(numVendedores * sizeof(int));
  for (i = 0; i < numVendedores; i++) {
    vendas[i] = 0;
  }
  return vendas;
}
 
void fazChamada(Heap *heap, int *vendas, int tempo) {
  vendas[heap->itens[0].id - 1] += 1;
  heap->itens[0].tempo += tempo;
  afunda(heap, 0);
}
 
/////////////////////////////////////////////////////////////////////
// Funções usadas para facilitar a correção das outras funções.
/////////////////////////////////////////////////////////////////////
 
int total = 0;
void corrige(int pontuacao, int acertou) {
  if (!acertou) {
    pontuacao = 0;
  }
  printf("%d ", pontuacao);
  total += pontuacao;
}
 
void preencheHeap(Heap *heap, int tamanho, ...) {
  int i;
  va_list varg;
  tamanho = heap->tamanho;
  va_start(varg, tamanho);
 
  for (i = 0; i < heap->tamanho; i++) {
    heap->itens[i].id = va_arg(varg, int);
    heap->itens[i].tempo = va_arg(varg, int);
  }
}
 
int comparaHeap(Heap *heap, int tamanho, ...) {
  int i;
  va_list varg;
  tamanho = heap->tamanho;
  va_start(varg, tamanho);
 
  for (i = 0; i < heap->tamanho; i++) {
    if (va_arg(varg, int) != heap->itens[i].id)
      return 0;
    if (va_arg(varg, int) != heap->itens[i].tempo)
      return 0;
  }
 
  return 1;
}
 
int comparaVetorInt(int *vetor, int tamanho, ...) {
  int i;
  va_list varg;
  va_start(varg, tamanho);
 
  for (i = 0; i < tamanho; i++) {
    if (va_arg(varg, int) != vetor[i])
      return 0;
  }
 
  return 1;
}
 
void imprimeVetor(int *vetor, int tamanho) {
  int i;
  for (i = 0; i < tamanho; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\n");
}
 
///////////////////////////////////////////////////////////////////
// NAO REMOVA ESTA LINHA. ABAIXO DESTA LINHA SO PODE TER O main().
///////////////////////////////////////////////////////////////////
 
int main(int argc, char *argv[]) {
 
  /////////////
  // 3
 
  corrige(1, indiceFilhoEsq(0) == 1);
  corrige(1, indiceFilhoEsq(5) == 11);
  corrige(1, indiceFilhoDir(5) == 12);
 
  Heap *heap = criaHeapMin(3);
  heap->itens[0] = *criaVendedor(1, 4);  
  heap->itens[1] = *criaVendedor(2, 4);
  heap->itens[2] = *criaVendedor(3, 5);
 
  /////////////
  // 7
 
  corrige(1, menor(heap, 0, 1));
  corrige(2, menor(heap, 1, 2));
  corrige(1, menor(heap, 0, 2));
  corrige(1, !menor(heap, 2, 1));
  corrige(2, !menor(heap, 2, 2));
 
  /////////////
  // 12
 
  corrige(4, ehHeapMin(heap));
 
  heap->itens[0].id = 2;
  heap->itens[1].id = 1;
 
  corrige(4, !ehHeapMin(heap));
 
  destroiHeap(heap);
  heap = criaHeapMin(5);
  heap->itens[0] = *criaVendedor(1, 4);  
  heap->itens[1] = *criaVendedor(2, 4);
  heap->itens[2] = *criaVendedor(3, 5);
  heap->itens[3] = *criaVendedor(4, 2);
  heap->itens[4] = *criaVendedor(5, 5);
 
  corrige(4, !ehHeapMin(heap));
 
  destroiHeap(heap);
   
  /////////////
  // 15
 
  heap = criaHeapMin(6);
  preencheHeap(heap,6, 1,0, 2,1, 3,2, 4,3, 5,4, 6,5);
  afunda(heap, 0);
  corrige(3, comparaHeap(heap,6, 1,0, 2,1, 3,2, 4,3, 5,4, 6,5));
   
  preencheHeap(heap,6, 3,2, 1,0, 2,1, 4,3, 5,4, 6,5);
  afunda(heap, 0);
  corrige(3, comparaHeap(heap,6, 1,0, 3,2, 2,1, 4,3, 5,4, 6,5));
 
  preencheHeap(heap,6, 3,2, 1,0, 2,1, 4,3, 5,4, 6,5);
  afunda(heap, 0);
  corrige(3, comparaHeap(heap,6, 1,0, 3,2, 2,1, 4,3, 5,4, 6,5));
 
  preencheHeap(heap,6, 6,6, 1,1, 2,2, 3,3, 4,4, 5,5);
  afunda(heap, 0);
  corrige(3, comparaHeap(heap,6, 1,1, 3,3, 2,2, 6,6, 4,4));
 
  preencheHeap(heap,6, 6,6, 1,1, 2,2, 4,4, 3,3, 5,5);
  afunda(heap, 0);
  corrige(3, comparaHeap(heap,6, 1,1, 3,3, 2,2, 4,4, 6,6));
 
  destroiHeap(heap);
   
  /////////////
  // 3
 
  int *vendas;
  heap = inicializaProblemaHeap(5);
  vendas = inicializaProblemaVendas(5);
  fazChamada(heap, vendas, 2);
  fazChamada(heap, vendas, 2);
  fazChamada(heap, vendas, 1);
  corrige(1, comparaVetorInt(vendas,5, 1,1,1,0,0));
 
  destroiHeap(heap);
  free(vendas);
 
  heap = inicializaProblemaHeap(4);
  vendas = inicializaProblemaVendas(4);
  fazChamada(heap, vendas, 5);
  fazChamada(heap, vendas, 2);
  fazChamada(heap, vendas, 3);
  fazChamada(heap, vendas, 3);
  fazChamada(heap, vendas, 4);
  fazChamada(heap, vendas, 9);
  corrige(1, comparaVetorInt(vendas,4, 1,2,2,1));
 
  destroiHeap(heap);
  free(vendas);
 
  heap = inicializaProblemaHeap(3);
  vendas = inicializaProblemaVendas(3);
  fazChamada(heap, vendas, 3);
  fazChamada(heap, vendas, 5);
  fazChamada(heap, vendas, 1);
  fazChamada(heap, vendas, 1);
  fazChamada(heap, vendas, 1);
  fazChamada(heap, vendas, 1);
  fazChamada(heap, vendas, 1);
  fazChamada(heap, vendas, 1);
  fazChamada(heap, vendas, 1);
  corrige(1, comparaVetorInt(vendas,3, 3,1,5));
 
  destroiHeap(heap);
  free(vendas);
   
  printf("= %d\n", total);
 
  return 0;
}

