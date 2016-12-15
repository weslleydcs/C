#include<stdio.h>
#include<conio.h>
#define n 10

void imprime(float v[]){
	float *p;
	for(p=v; p< v+n; p++ ){
		printf("%p\n",p);
	}
}

int main(){
	float vetor[n], *p;
	
	for(p=vetor; p< vetor+n; p++ ){
		printf("Digite valores para o vetor: ");
		scanf("%f", p);
	}
	printf("\n");
	imprime(vetor);
}
