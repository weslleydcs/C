#include<stdio.h>
#include<conio.h>
	int main(){
		float vel, tam, tem, min;
		printf("Digite o tamanho do arquivo em MB\n ");
		scanf("%f", &tam);
		printf("Digite a velocidade da internet em Mbps\n");
		scanf("%f",&vel);
		tem = tam/vel;
		min = tem/60.0;
		printf("O tempo aproximado de download é de %.2f min\n", min);
	}
