/* Elaborar um programa em C que leia dois valores INTEIROS (vari�veis A e B) e em seguida fa�a uma fun��o que retorna a soma do dobro dos 
dois n�meros lidos. A fun��o dever� armazenar o dobro de A na pr�pria vari�vel a e o dobro de B na pr�pria vari�vel b. */

#include <stdio.h>
#include <stdlib.h>

int soma_dos_dobros(int &x, int &y){
	
	int dobro_de_a = 2 * x;
	int dobro_de_b = 2 * y;
	int soma_dos_dobros = dobro_de_a + dobro_de_b;
	
	printf("\nO dobro de a tem valor igual ah: %d\n", dobro_de_a);
	printf("\nO dobro de b tem valor igual ah: %d\n", dobro_de_b);
	printf("\nA soma do dobro dos dois numeros lidos tem valor igual a: %d\n\n", soma_dos_dobros);
}

int main(){
	
	int a, b;
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	soma_dos_dobros(a,b);
	
	system("Pause");
	return 0;
}
