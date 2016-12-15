#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int maioremenor(int i)
{
	int menor, maior, vetor[10];
		
		for(i=0; i<10; i++){
			printf("Digite o %d valor do vetor: ", i+1);
			scanf("%d", &vetor[i]);
		}
		menor = vetor[0];
		maior = vetor[0];
		for(i=0; i<10; i++){
			if(vetor[i]<menor){
				menor = vetor[i];
			}	
		}
		for(i=0; i<10; i++){
			if(vetor[i]>maior){
				maior = vetor[i];
			}
		}
		printf("Os valores do vetor sao: %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n\n", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4], vetor[5], vetor[6], vetor[7], vetor[8], vetor[9], vetor[10]);
		printf("O menor valor dentre os numeros e: %d\n", menor);
		printf("O maior valor dentre os numeros e: %d\n", maior);

	system("Pause");
	return 0;
}

int main()
{
	int menor, maior, vetor[10];
	maioremenor(0);
	return 0;
}
	
