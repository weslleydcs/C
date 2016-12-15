#include <stdio.h>
#include <stdlib.h>

int digitastring()
{
    int  i, cont=0;
    char str[20];

    printf("Digite uma string binaria de no maximo 20 posicoes:\n");
    scanf("%s", str);
}

int calculastring()
{
    int  i, cont=0;
    char str[20];

	for(i=0; i<=19; i++){
        if(str[i] == '1'){
            cont++;
        }
    }
    printf("A string tem %d numeros 1s.\n\n", cont);
}

int main()
{
	int  i, cont=0;
    char str[20];
	digitastring();
	calculastring();
}
