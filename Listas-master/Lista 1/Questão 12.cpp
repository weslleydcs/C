#include<stdio.h>
#include<conio.h>
int main(){
	float ht, hv, sal;
	printf("O valor da hora trabalhada é.\n");
	scanf("%f", &hv);
	printf("A quantidades de horas trabalhadas é.\n");
	scanf("%f", &ht);
	sal = ht * hv;
	printf("Seu salário é de %.2f", sal);
	 
}
