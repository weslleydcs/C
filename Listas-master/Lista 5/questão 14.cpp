#include<stdio.h>
#include<conio.h>
#define n 5

void imprime(int v[]){
	int *use;
	for(use=v; use< v+n; use++ ){
		printf("%d\n",*use+1);
	}
}

int main(){
	int vetor[n], i, *p;
	
	for(p=vetor; p< vetor+n; p++ ){
		printf("Digite valores para o vetor de 5 posicoes: ");
		scanf("%d", p);
	}
	printf("\n");
	printf("Somando +1 a cada posicao do vetor usando ponteiro os numeros ficam assim: \n\n");
	imprime(vetor);
}
