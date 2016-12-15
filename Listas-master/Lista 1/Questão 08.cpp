#include<stdio.h>
#include<conio.h>
int main(){
	float n1, n2, n3, n4, media;
	printf("Digite sua nota 1\n");
	scanf("%f",&n1);
	printf("Digite sua nota 2\n");
	scanf("%f",&n2);
	printf("Digite sua nota 3\n");
	scanf("%f",&n3);
	printf("Digite sua nota 4\n");
	scanf("%f",&n4); 
	media = (n1+n2+n3+n4)/4;
	printf("Sua média é %.2f", media);
	
}

