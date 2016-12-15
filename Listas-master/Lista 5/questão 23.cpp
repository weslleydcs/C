#include<stdio.h>
#include<conio.h>
#define n 10

void imprime(int v[]){ // Função que percorre um vetor dado na função main usando ponteiro e imprime os elementos desse vetor.
	int *p;
	for(p=v; p< v+n; p++ ){
		printf("%d\n",*p);
	}
}

int main(){
	int vetor[n], i, *p; // Função main que pede ao usuário para digitar valores para um vetor[n] de tam 10 e chama a função imprime(vetor).
	
	for(p=vetor; p< vetor+n; p++ ){
		printf("Digite valores para o vetor: ");
		scanf("%d", p);
	}
	printf("\n");
	imprime(vetor);
}
