#include<stdio.h>
#include<conio.h>
int main(){
	float alt, pes;
	printf("Insira sua altura.\n");
	scanf("%f", &alt);
	pes = ((72.7*alt)-58);
	printf("Seu peso ideal é %.3f", pes);
	
}
