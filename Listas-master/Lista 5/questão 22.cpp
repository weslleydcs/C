#include<stdio.h>
#include<conio.h>
#define n 5

void modifica(int v[], int x){ // Fun��o que recebe o vetor da fun��o main e um valor fornecido pelo usu�rio e utilizando ponteiro 
	int *p;                   // o valor de cada posi��o do vetor � substituido por esse valor dado pelo usu�rio.
	for(p=v; p< v+n; p++ ){
		*p = x;
	}
	for(p=v; p< v+n; p++ ){
		printf("%d\n",*p);
	}
}

int main(){
	int vetor[n], i, *p, valor; // Fun��o main que pede ao usu�rio para digitar valores para um vetor[n] de tam 5 e chama a fun��o modifica(vetor).
	
	for(p=vetor; p< vetor+n; p++ ){
		printf("Digite valores para o vetor: ");
		scanf("%d", p);
	}
	
	printf("\nDigite um valor para substituir todos os valores do vetor: ");
	scanf("%d", &valor);
	printf("\n");
	modifica(vetor, valor);
}
