#include <stdio.h> 
//compara duas datas

int Compara_Datas(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2){ //Função que compara duas datas
	int tempo = 0;
	
	if(ano1 > ano2){ //Compara os anos e verifica qual o maior
 		printf("\nA primeira data eh maior ");
 		tempo = 1;
 	}
	if(ano2 > ano1){ //Compara os anos e verifica qual o maior
 		printf("\nA segunda data eh maior ");
 		tempo = 1;
 	}	
	if(tempo == 0){
 		if (dia1 > dia2){ //Compara os dias e verifica qual o maior
 			printf("\nA primeira data eh maior ");
 			tempo = 1;
 		}
 		if(dia2 > dia1){ //Compara os dias e verifica qual o maior
 			printf("\nA segunda data eh maior ");
 			tempo = 1;
 		}
 	}
	if(tempo == 0){
 		if (dia1 > dia2){ //Compara os dias e verifica qual o maior
 			printf("\nA primeira eh maior ");
 			tempo = 1;
 		}
 		if (dia2 > dia1){ //Compara os dias e verifica qual o maior
 			printf("\nA segunda eh maior ");
 			tempo = 1;
 		}
 	}
	if (dia2 == 0){ 
 		printf("\nAs datas informadas sao iguais ");
	}
		
	return 0;
}

 
int main(){ //Função main que chama a função compara datas passando a ela seus 2 dias, 2 meses e 2 anos para serem comparados.
	int dia1, mes1, ano1, dia2, mes2, ano2;
	
	printf("Informe a primeira data: \n");
	scanf("\n%d \n%d \n%d", &dia1, &mes1, &ano1);
	
	printf("\nInforme a segunda data: \n");
	scanf("\n%d \n%d \n%d", &dia2, &mes2, &ano2);
	
	Compara_Datas(dia1, mes1, ano1, dia2, mes2, ano2);
}
