#include<stdio.h> //data e hora normalmente pelas funções
int data_hora(int &dia, int &mes, int &ano, int &hora, int &min){ //Função que calcula a data e a hora de acordo com os parâmetros recebidos da função main
	int tempo;
	
	switch(mes){ //Impressão do dia/mes/ano dependendo do mês que o usuário digitar
		
		case 1:
			printf("\n%d/janeiro/%d", dia, ano);
			break;
			
		case 2:
			printf("\n%d/fevereiro/%d", dia, ano);
			break;
			
		case 3:
			printf("\n%d/março/%d", dia, ano);
			break;
			
		case 4:
			printf("\n%d/abril/%d", dia, ano);
			break;
			
		case 5:
			printf("\n%d/maio/%d", dia, ano);
			break;
			
		case 6:
			printf("\n%d/junho/%d", dia, ano);
			break;
			
		case 7:
			printf("\n%d/julho/%d", dia, ano);
			break;
			
		case 8:
			printf("\n%d/agosto/%d", dia, ano);
			break;
			
		case 9:
			printf("\n%d/setembro/%d", dia, ano);
			break;
			
		case 10:
			printf("\n%d/outubro/%d", dia, ano);
			break;
			
		case 11:
			printf("\n%d/novembro/%d", dia, ano);
			break;
			
		case 12:
			printf("\n%d/dezembro/%d", dia, ano);
			break;
	}
	
	tempo = (hora*60)+ min;
	printf("\n%d Minutos", tempo);
	printf("\n");
	return 0;
}


int main(){ //Função main que chama a função data e hora passando como parâmetro o dia, o mes, o ano, a hora e os minutos
	int dia, mes, ano, hora, min;
	
	printf("Entre com a data no formato DD/MM/AAAA: \n");
	scanf("\n%d \n%d \n%d", &dia, &mes, &ano);
	
	printf("\nEntre com a hora: \n");
	scanf("%d", &hora);
	
	printf("\nEntre com os minutos: \n");
	scanf("%d", &min);
	
	data_hora(dia, mes, ano, hora, min);
	
	return 0;
}
