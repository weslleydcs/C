#include<stdio.h>
#include<conio.h>
#define n 5

void imprime(int v[]){ // Fun��o com ponteiro que calcula o dobro de cada elemento digitado pelo vetor dado da fun��o main
	int *p;
	for(p=v; p< v+n; p++ ){
		printf("%d\n",*p*2);
	}
}

int main(){
	int vetor[n], i, *p; // Fun��o main que pede ao usu�rio para digitar valores para um vetor[n] de tam 5 e chama a fun��o imprime(vetor) que dobra o valor de cada elemento digitado nesse vetor.
	
	for(p=vetor; p< vetor+n; p++ ){
		printf("Digite valores para o vetor: ");
		scanf("%d", p);
	}
	printf("\n");
	imprime(vetor);

}
