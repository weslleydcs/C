#include <stdio.h>
#include <stdlib.h>

int inverte(int produto)
{
	int aux, num_inv;
	
	aux=produto;
	num_inv=0;
	
	while(aux > 0){
		num_inv = num_inv * 10;
		num_inv = num_inv + (aux % 10);
		aux = aux /10;
	}
return num_inv;
	
}
int main()
{

    int i, j, num_inv, produto, maiorPalindromo=0, num1=0, num2=0;
	num_inv=0;
    
    for(i=100; i<=999; i++){
		for(j=100; j<=999; j++){
			produto=(i*j);
			num_inv=inverte(produto);
			
			if(num_inv==produto){
                if(produto>maiorPalindromo){
                     maiorPalindromo=produto;
                     num1=i;
                     num2=j;
                }
            }
		}
	}
	
	printf("O maior numero palindromo feito a partir do produto de dois numeros de 3 digitos eh: \n==> %dx%d = %d\n\n", num1, num2, maiorPalindromo);
	
	system("pause");
    return 0;
}
