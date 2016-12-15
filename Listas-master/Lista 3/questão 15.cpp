#include <stdio.h>

int multiplos(int i)
{
    int soma=0;

	while(i<=1000){
		if((i%3==0)||(i%5==0)){
			soma+=i;
		}
	i++;
	}
	printf("A soma de todos os numeros naturais abaixo de 1000 que sao multiplos de 3 ou 5 sao:\n");
    printf("\nSoma = %d.\n\n", soma);
}

int main()
{
	int soma=0;
	multiplos(3);
    
	return 0;
	
}
