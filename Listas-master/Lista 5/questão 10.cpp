/* Elaborar um programa em C que leia dois valores INTEIROS (variáveis A e B) e em seguida faça uma função que retorna a soma do dobro dos 
dois números lidos. A função deverá armazenar o dobro de A na própria variável a e o dobro de B na própria variável b. */

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
