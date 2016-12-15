#include <stdio.h>

int numerospares()
{
    int soma=0, numpar=0, i;

    for(i=1; i<=50; i++)
	{
        numpar=numpar+2;
        soma=soma+numpar;
        printf("%d. %d + %d = %d\n", i, (soma-numpar), numpar, soma);
    }
    printf("\n==> A soma eh: %d\n", soma);
}

int main()
{
	int soma=0, numpar=0, i;
	numerospares();
    return 0;
}
