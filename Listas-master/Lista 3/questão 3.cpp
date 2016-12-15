#include <stdio.h>
#include <stdlib.h>

int digita()
{
	int num, f1 = 0, f2 = 1, f3;
	
	printf("Digite um numero positivo: ");
	scanf("%d", &num);
}
	

int fibonacci()
{
	int num, f1 = 0, f2 = 1, f3;
	if(num < 0) {
		printf("Numero invalido.\n");
	return 1;
	} 
	else 
	{
		printf("0");
	}

	while(f2 <= num){
		f3 = f2 + f1;
		printf(" - %d", f3);
		f1 = f2;
		f2 = f3;
	}
}
	
int main(){
	int num, f1 = 0, f2 = 1, f3;
	digita();
	fibonacci();
	printf("\n");
	
	return 0;
}
