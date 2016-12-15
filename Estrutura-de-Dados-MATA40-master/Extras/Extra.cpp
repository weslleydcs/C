#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
//Programa que calcula o maior e o menor valor do vetor(de tamanho escolhido pelo usuário) 

int maioremenor(int i)
{
	int n, menor, maior, vetor[n];
	printf("Digite quantos valores(espaços) tera seu vetor de numeros inteiros: \n");
	scanf("%d", &n);
		
		for(i=0; i<n; i++){
			printf("\nDigite o %d valor do vetor: ", i+1);
			scanf("%d", &vetor[i]);
		}
		menor = vetor[0];
		maior = vetor[0];
		for(i=0; i<n; i++){
			if(vetor[i]<menor){
				menor = vetor[i];
			}	
		}
		for(i=0; i<n; i++){
			if(vetor[i]>maior){
				maior = vetor[i];
			}
		}
		printf("\nO menor valor dentre os numeros e: %d\n", menor);
		printf("\nO maior valor dentre os numeros e: %d\n", maior);

	system("Pause");
	return 0;
}

bool Certo_Errado(){
	int i;
	if(maioremenor(i)){
    	return true;
	}else{
    	return false;
	}
}

int main()
{
	
	int n, menor, maior, vetor[n];
	maioremenor(0);
	Certo_Errado();
	return 0;
}
