#include <stdio.h>
#include <stdlib.h>

/*imc = peso/altura² */
int main(){
	float p, h, imc;
	
	printf("Digite o seu peso: ");
	scanf("%f", &p);
	
	printf("Digite sua altura: ");
	scanf("%f", &h);
	
	imc = p/(h*h);
	
	if(imc < 18.5){
		printf("Voce esta abaixo do peso\n\n");
	}
	else if(imc >= 18.6 && imc <= 24.9){
		printf("Voce esta com um peso consideravel saudavel\n\n");
	}
	else if(imc >= 25.0 && imc <= 29.9){
		printf("Peso em excesso\n\n");
	}
	else if(imc >= 30.0 && imc <= 34.9){
		printf("Obesidade de Grau 1\n\n");
	}
	else if(imc >= 35.0 && imc <= 39.9){
		printf("Obesidade de Grau 2(severa)\n\n");
	}
	else{
		printf("Obesidade de Grau 3(Morbida)\n\n");
	}
	
	system("Pause");
	return 0;
		
}
