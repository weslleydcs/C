#include<stdio.h>
#include<conio.h>
int main(){
	int x, z, a;
	float y, b, c;
	printf("Digite um inteiro.\n");
	scanf("%d",&x);
	printf("Digite outro inteiro.\n");
	scanf("%d",&z);
	printf("Digite um real\n");
	scanf("%f",&y);
	a = ((x*2)* z/2);
	b = ((x*3)+y);
	c = (y*y*y);
	printf("OP 1: O dobro do primeiro vezes a metade do segundo %d \n", a);
	printf("OP 2: O triplo do primeiro mais o terceiro %f\n", b);
	printf("OP 3: O terceiro elevado ao cubo %f\n", c);
	return(0);
}
