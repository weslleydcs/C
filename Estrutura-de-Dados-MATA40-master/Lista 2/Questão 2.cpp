#include <stdio.h>
#include <stdlib.h>
//M�dia aritm�tica 

float media(float nota1, float nota2, float nota3){ //Fun��o media que calcula a m�dia aritm�tica de acordo com as notas do usu�rio
	float exame, media_aritmetica;
	
	media_aritmetica = (nota1 + nota2 + nota3) / 3; //Calculo da m�dia aritm�tica
	
	exame = 6.0 - media_aritmetica;
	
	if(media_aritmetica >= 7){ //Se a m�dia aritm�tica for acima de 7 o programa imprime a mensagem abaixo.
		printf("\n\nAprovado com media: \n");
		return media_aritmetica;
	}
	if(media_aritmetica >= 3 && media_aritmetica < 7){ //Se a m�dia aritm�tica for entre 3 e 7 o programa imprime a mensagem abaixo
		printf("\n\nVoce devera fazer um exame com nota acima de %f para alcancar media 6.0 \n pois sua nota final foi: \n", exame);
		return media_aritmetica;
	}
	if(media_aritmetica < 3){ //Se a m�dia aritm�tica for menor que 3 o programa imprime a mensagem abaixo.
		printf("\n\nReprovado com media: \n");
		return media_aritmetica;
	}
	
	printf("\n\n");
	return 0;
}

int main(){ //Fun��o main que pede ao usu�rio que digite 3 notas
	
	float nota1, nota2, nota3;
	
	printf("Digite o valor da sua primeira nota: \n"); //Nota 1
	scanf("%f", &nota1);
	
	printf("\n\nDigite o valor da sua segunda nota: \n"); //Nota 2
	scanf("%f", &nota2);
	
	printf("\n\nDigite o valor da sua terceira nota: \n"); //Nota 3
	scanf("%f", &nota3);
	
	printf("%.2f", media(nota1, nota2, nota3)); //Impress�o da fun��o media
	
	return 0;
}
