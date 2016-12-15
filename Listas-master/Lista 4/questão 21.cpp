#include<stdio.h>
#include<conio.h>
#include <string.h>

void ordem_alf()
{
	char nome[30], nome1[30];
	printf("Digite um nome: \n");
	gets(nome);
	printf("Digite outro nome: \n");
	gets(nome1);

	if (strcmp(nome,nome1)< 0){    
		printf("%s vem antes de %s\n", nome, nome1);
    	}
    else{
        printf("%s vem antes de %s\n", nome1, nome);
    }
    
}

int main()
{
	ordem_alf();
	return 0;
}
