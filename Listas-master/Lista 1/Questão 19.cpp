#include<stdio.h>
#include<conio.h>	
	int main(){
		float ht, vh, salb, ir, inss,sin, des,sall;
		printf("Valor da hora trabalhada.\n");
		scanf("%f", &vh);
		printf("Quantidades de horas trabalhadas.\n");
		scanf("%f", &ht);
		salb = ht * vh;
		printf("Seu sal�rio Bruto � de %.2f\n", salb);
		ir = salb * 0.11;
		printf("O desconto do Imposto de Renda � de %.2f R$\n", ir);
		inss = salb * 0.08;
		printf("O desconto do do INSS � de %.2f R$\n", inss);
		sin = salb * 0.05;
		printf("O desconto do Sindicato � de %.2f R$\n", sin);
		des = ir + inss + sin;
		printf("O total de descontos � de %.2f R$ \n", des);
		sall= salb - des;
		printf("O seu S�lario Liquido � de %.2f R$\n", sall);
}

