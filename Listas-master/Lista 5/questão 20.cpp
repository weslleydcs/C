#include<stdio.h>
#include<conio.h>
#define n 5
 
void imprime(int v[]){ // Fun��o com ponteiro que recebe os valores digitados pelo vetor da fun��o main e verifica se eles s�o pares ou n�o.
	int *p;			   // Se eles forem pares, esta fun��o retorna o endere�o do inteiro par lido.
	for(p=v; p< v+n; p++ ){
		if(*p%2==0){
		printf("%p\n",p);
		}	
	}
}

int main(){
	int vetor[n], i, *p; // Fun��o main que pede ao usu�rio para digitar valores para um vetor[n] de tam 5 e chama a fun��o imprime(vetor).
	
	for(p=vetor; p< vetor+n; p++ ){
		printf("Digite valores para o vetor: ");
		scanf("%d", p);
	}
	printf("\n");
	imprime(vetor);

}
