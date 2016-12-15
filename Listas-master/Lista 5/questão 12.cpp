#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int maior(int v[], int tam){
	int i, ma = NULL;
	for(i=0; i<tam; i++){
		if(v[i]> ma){
			ma= v[i];
		}
	}
	
	return ma;
}

int menor(int v[], int tam){
	int i, me = 10000000;
	for(i=0; i<tam; i++){
		if(v[i]< me){
			me= v[i];
		}
	}
	
	return me;
}

int main(){
	int tam, i;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tam);
	
	int vetor[tam];
		for(i=0; i<tam; i++){
			printf("\nDigite o valor da posicao %d do vetor: ", i+1);
			scanf("%d", &vetor[i]);
		} 

		printf("\nO menor valor do vetor eh %d\n", menor(vetor, tam));
		printf("\nO maior valor do vetor eh %d\n", maior(vetor, tam));
}
