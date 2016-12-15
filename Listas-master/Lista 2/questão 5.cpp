#include <stdio.h>
#include <stdlib.h>

int main(){
	int gan1, gan2, gan3, x, impor = 780000;

	gan1 = (46*780000)/100;
	gan2 = (32*780000)/100;
	gan3 = (22*780000)/100;
	x = gan1 + gan2 + gan3;
	
	printf("Um valor de 780000 foi dividido entre 3 compradores \n\n");
	printf("O primeiro ganhador recebeu 46 por cento desta quantia que tem valor igual a: %d\n\n", gan1);
	printf("O segundo ganhador recebeu 32 por cento desta quantia que tem valor igual a: %d\n\n", gan2);
	printf("O terceiro ganhador recebeu 22 por cento desta quantia que tem valor igual a: %d\n\n", gan3);
	printf("A soma dos valores dos 3 ganhadores tem valor total igual a: %d\n\n", x);
	
	system("Pause");
	return 0;
	
}
