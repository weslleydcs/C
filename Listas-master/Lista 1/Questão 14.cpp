#include<stdio.h>
#include<conio.h>
int main(){
	float c;
	float t;
	printf("A temperatura em graus celsius �.\n");
	scanf("%f",&c);
	t= (c*1.8)+32;
	printf("A temperatura em farenheit � %.1f", t);
	return(0);
}
