#include<stdio.h>
#include<conio.h>
#include<malloc.h>

int idade()
{
	int idade;
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	return idade;
}

char* sexo()
{
	char* sexo=(char*)malloc(10*sizeof(char));
	printf("Digite masculino ou feminino: \n");
	gets(sexo);
	return sexo;
}


char* nome()
{
	char* n=(char*)malloc(50*sizeof(char));
	printf("Digite seu nome: \n");
	gets(n);
	return n;
}

char* nacionalidade()
{
	int i=0;
	char* nac=(char*)malloc(20*sizeof(char));
	printf("Digite sua nacionalidade: \n");
	gets(nac);			
	return nac;
}

void dirigir()
{
	if(idade()>=18)
	{
		printf("Voce esta habilitado(a) para dirigir");
	}else{
		printf("Voce nao esta habilitado(a) para dirigir");
	}
}

int main()
{

	printf("\n%s, %s do sexo %s,\n\n", nome(), nacionalidade(), sexo());
	dirigir();
	return 0;
}
