#include <stdio.h>
#include <conio.h>
#include <math.h>	
#include <stdlib.h>
	
	int main(){
		int op;
		float n1, n2, n3, num, res;
		printf("Op 1 - Media Geometrica \n");
		printf("Op 2 - Media Ponderada \n");
		printf("Op 3 - Media Harmonica \n");
		printf("Op 4 - Media Aritmetica \n");
		scanf("%d", &op);
		if((op != 1)||(op != 2)||(op != 3)||(op != 4))
				{
					printf("Opcao invalida invalida ");
				}					
		printf("Digite um numero \n");
		scanf("%f", &n1);
		printf("Digite um numero \n");
		scanf("%f", &n2);
		printf("Digite um numero \n");
		scanf("%f", &n3);

			if (op == 1)
				{
				printf("A media geometrica dos numeros tem valor igual a: %f\n", pow((n1*n2*n3),1.0/3.0));		
				}
			else if(op == 2)
				{
					printf("A media ponderada dos numeros tem valor igual a: %f\n", ((n1+(n2*2)+(n3*3))/5));
				}
			else if(op == 3)
				{
					printf("A media harmonica dos numeros tem valor igual a: %f\n", ((1/n1)+(1/n2)+(1/n3)/3));		
				}					
			else if(op == 4)
				{
					printf("A media aritmetica dos numeros tem valor igual a: %f\n", ((n1+n2+n3)/3));
				}
			else
				{
					printf("Opcao invalida invalida");
				}					
				
		system("Pause");
		return 0;
					
}				
	
