#include <stdio.h>

int digitanumeros(){
	int num, maior, menor;
	
	printf("Digite numeros inteiros! (A quantidade que desejar) - [Para sair, digite um numero negativo].\n");
	scanf("%d", &num);
		
	maior=num;
	menor=num;
}
			
int ordena(){
	int num, maior, menor;

	while (num>=0){
	
		if(num>maior){
			maior=num;
		}
		if(num<menor){
			menor=num;
		}
		printf("Digite numeros inteiros! (A quantidade que desejar) - [Para sair, digite um numero negativo].\n");
		scanf("%d", &num);
	}
}
	
int main(){
	int num, maior, menor;
	
	digitanumeros();
	ordena();
	printf("\nMaior: %d e Menor: %d", maior, menor);
	
	return 0;
}
