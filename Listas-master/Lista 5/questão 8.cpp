#include<stdio.h>
#include<conio.h>



int maior(int v[], int tam){ //Fun��o que define o maior valor.
	int i, ma = NULL;
	for(i=0; i<tam; i++){
		if(v[i]> ma){
			ma= v[i];
		}
	}
	
	return ma;
}

int quantidade(int v[],int tam){ //Usando a fun��o que calcula o maior valor, esta fun��o calcula quantas vezes este maior valor aparece dentro do vetor.
	int mai, quant=0, i;
	mai = maior(v, tam);
	
	for(i=0; i <tam; i++){
		if(mai == v[i]){
			quant++;
		}
	}
	return quant;
}

int main(){  // Fun��o main que chama a fun��o maior e a fun��o quantidade dando os par�metros � elas.
	int tam, i;
	printf("Digite o tamanho(numero de posicoes) do vetor: ");
	scanf("%d", &tam);
	
	int vetor[tam];
		for(i=0; i<tam; i++){
			printf("\nDigite o valor da posicao %d do vetor: ", i+1);
			scanf("%d", &vetor[i]);
		} 

		printf("\nO maior valor do vetor eh %d\n", maior(vetor, tam));
		printf("\nO numero de vezes que este maior valor se repete eh %d vezes\n", quantidade(vetor, tam));
}
