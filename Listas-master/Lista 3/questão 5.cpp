#include <stdio.h>

int inteiros()
{
  int num, i=0, impar=1;
  printf("Digite um numero inteiro: ");
  scanf("%d", &num);
}
  
int ordena()
{
  int num, i=0, impar=1;
  printf("\nOs %d primeiros numeros naturais impares sao:\n", num);
  while (i < num)
  {
    printf ("%d\n", impar);
    impar = impar + 2;
    i++;
  }
}

int main()
{
	int num, i=0, impar=1;
	inteiros();
	ordena();
	
	return 0;
	
}


