#include<stdio.h>
#include<conio.h>
void nome()
{
	char frase[20];
	int i, x ,y;
	printf("Digite uma frase: \n");
	gets (frase);	
	printf("\nDigite a posicao i da string: ");
	scanf("%d", &x);
	printf("\nDigite a posicao j da string: ");	
	scanf("%d", &y);
	printf("\n\nO segmento da String de %d a %d eh: ", x, y);	
		for (i=x; i<=y; i++){
		printf("%c", frase[i]);
		}
}

int main()
{
	nome();
}
