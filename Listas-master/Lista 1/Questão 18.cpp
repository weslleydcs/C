#include<stdio.h>
#include<conio.h>
	int main(){
		float kg, multa;
		printf("Digite a  quatidade de Kg de peixe.\n");
		scanf("%f", &kg);
			if(kg >50){
				multa = (kg-50)*4;
				printf("Vo�� excedeu a quantidade permitida, sua multa ser� de %.2f R$", multa);
				}
			else{
				printf("Vo�� n�o excedeu o permitido e vo�� n�o ser� multado");
			}
			
	
	}
