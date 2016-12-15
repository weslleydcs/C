#include<stdio.h>
#include<conio.h>
#define n 5

void modifica(int v[], int x){ // Função que recebe o vetor da função main e um valor fornecido pelo usuário e utilizando ponteiro 
	int *p;                   // o valor de cada posição do vetor é substituido por esse valor dado pelo usuário.
	for(p=v; p< v+n; p++ ){
		*p = x;
	}
	for(p=v; p< v+n; p++ ){
		printf("%d\n",*p);
	}
}

int main(){
	int vetor[n], i, *p, valor; // Função main que pede ao usuário para digitar valores para um vetor[n] de tam 5 e chama a função modifica(vetor).
	
	for(p=vetor; p< vetor+n; p++ ){
		printf("Digite valores para o vetor: ");
		scanf("%d", p);
	}
	
	printf("\nDigite um valor para substituir todos os valores do vetor: ");
	scanf("%d", &valor);
	printf("\n");
	modifica(vetor, valor);
}
