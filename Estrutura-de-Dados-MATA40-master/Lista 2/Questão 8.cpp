#include <stdio.h>
#include <math.h>
//Menu de opera��es

int operacao(){ //Fun��o que executa 5 tipos de opera��eos dependendo da escolha feita pelo usu�rio
	int a, b, res, r1, r2;
	char op;
	
	printf("Escolha sua operacao [+, -, *, /. r(raiz)]: \n");
	scanf("%c", &op);
	
	printf("\nEntre com o primeiro numero: \n");
	scanf("%d", &a);
	
	printf("\nEntre com o segundo numero: \n");
	scanf("%d", &b);
	
	switch(op){
		
		case '+':
			res = a + b;
			printf("\n\nA soma destes numeros tem valor: \n");
			return res;
			break;
			
		case '-':
			res = a - b;
			printf("\n\nA diferenca entre estes numeros tem valor: \n");
			return res;
			break;
			
		case '*':
			res = (a * b);
			printf("\n\nO produto destes numeros tem valor: \n");
			return res;
			break;
			
		case '/':
			res = (a/b);
			printf("\n\nA divisao destes numeros tem valor: \n");
			return res;
			break;
			
		case 'r':
			r1 = sqrt(a);
			r2 = sqrt(b);
			printf("\n\nA raiz do primeiro numero tem valor: \n%d", r1);
			printf("\n\nA raiz do segundo numero tem valor: \n%d", r2);
			break;	
	}
	
	printf("\n\n");
	return 0;
}

int main(){ //Fun��o main que chama a fun��o opera��o
	
	printf("%d", operacao()); //Impress�o da fun��o opera��o
	
	return 0;
}
