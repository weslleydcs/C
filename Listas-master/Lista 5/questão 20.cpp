#include<stdio.h>
#include<conio.h>
#define n 5
 
void imprime(int v[]){ // Função com ponteiro que recebe os valores digitados pelo vetor da função main e verifica se eles são pares ou não.
	int *p;			   // Se eles forem pares, esta função retorna o endereço do inteiro par lido.
	for(p=v; p< v+n; p++ ){
		if(*p%2==0){
		printf("%p\n",p);
		}	
	}
}

int main(){
	int vetor[n], i, *p; // Função main que pede ao usuário para digitar valores para um vetor[n] de tam 5 e chama a função imprime(vetor).
	
	for(p=vetor; p< vetor+n; p++ ){
		printf("Digite valores para o vetor: ");
		scanf("%d", p);
	}
	printf("\n");
	imprime(vetor);

}
