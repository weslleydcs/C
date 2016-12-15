/* Desconto à vista */

#include<conio.h>
#include<stdio.h>

void mercadoria()
{
	char merca[30];
	printf("Nome da mercadoria a ser comprada: ");
	gets(merca);
}

float valor_mercadoria()
{
	float valor;
	printf("Valor da mercadoria: \n");
	scanf("%f", &valor);
	return valor;
}

float valor_mercadoria_des()
{
	float valor, des;
	printf("Valor da mercadoria: \n");
	scanf("%f", &valor);
	
	return valor*0.9;
}

int decisao()
{
	int pag;
	printf("Para pagamento a vista digite 1. Ou se pagamento a prazo digite 0\n");
	scanf("%d", &pag);
	return pag;
}

int pagamento()
{
	if (decisao()==1){
		printf("O valor a ser pago eh de R$ %f", (valor_mercadoria_des()));
	}else{
		printf("O valor a ser pago eh de R$ %f", valor_mercadoria());
	}
}

int main()
{
	mercadoria();
	pagamento();
}
