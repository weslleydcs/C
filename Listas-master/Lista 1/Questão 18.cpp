#include<stdio.h>
#include<conio.h>
	int main(){
		float kg, multa;
		printf("Digite a  quatidade de Kg de peixe.\n");
		scanf("%f", &kg);
			if(kg >50){
				multa = (kg-50)*4;
				printf("Voçê excedeu a quantidade permitida, sua multa será de %.2f R$", multa);
				}
			else{
				printf("Voçê não excedeu o permitido e voçê não será multado");
			}
			
	
	}
