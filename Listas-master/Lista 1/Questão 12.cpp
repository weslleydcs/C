#include<stdio.h>
#include<conio.h>
int main(){
	float ht, hv, sal;
	printf("O valor da hora trabalhada �.\n");
	scanf("%f", &hv);
	printf("A quantidades de horas trabalhadas �.\n");
	scanf("%f", &ht);
	sal = ht * hv;
	printf("Seu sal�rio � de %.2f", sal);
	 
}
