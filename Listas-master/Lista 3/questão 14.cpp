#include <stdio.h>

int digita(int i)
{
    int num, j, soma;
    soma=0;

    while(i <= 10){
        printf("Digite um numero!\n");
        scanf("%d", &num);
        soma+=num;
        i++;
    }
    

    printf("\nA soma dos numeros digitados eh igual a: %d\n", soma);
}


int main()
{
	
	printf("::Voce sera solicitado a digitar 10 numeros::\n\n");
	digita(1);
	return 0;
}
