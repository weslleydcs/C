#include<stdio.h>
#include<conio.h>
	int main(){
		char sexo;
		printf("Para masculino digite m, para feminino digite f\n");
		scanf("%c", &sexo);
			if (sexo == 'm'){
					float alt, pes, pes1;
					printf("Insira sua altura.\n");
					scanf("%f", &alt);
					printf("Digite seu peso.\n");
					scanf("%f",&pes1);
					pes = ((72.7*alt)-58);
					printf("Seu peso ideal é %.3f", pes);
					if (pes==pes1){	
						printf("Voçê está no peso certo !\n");
						}
					else{
						printf("Voçê está fora do peso. \n");
						}
					}
			if (sexo== 'f') {
					float alt, pes, pes1;
					printf("Insira sua altura.\n");
					scanf("%f", &alt);
					printf("Digite seu peso.\n");
					scanf("%f",&pes1);
					pes = ((62.1*alt)-44.7);
					printf("Seu peso ideal é %.3f", pes);
					if (pes==pes1){	
						printf("Voçê está no peso certo !\n");
						}
					else{
						printf("Voçê está fora do peso. \n");
						}
		
			}
			if (sexo != 'm' && 'f') {
				printf("Caracter invalido\n");		
			}
	}
	
