/* comprar duas strings*/
#include<stdio.h>
#include<conio.h>

int	 tamanho_string(char str[]){
	int i=0;
	while(str[i] != '\0')
		{	i++;}
		
	return i;
}


bool compara_string(char x[], char y[]){
	int i=0;
	int j=0;
	int tamanhox= tamanho_string(x);
	int tamanhoy= tamanho_string(y);	
			for(i=0, j=0 ;(x[i]==y[j]) && (x[i] != '\0') && (y[j] != '\0'); i++, j++);
			{
				
			if (i==tamanhox){
						
				return true;
			}
			return false;
			}
}		

int main(){
	char pri[20], seg[20];
	printf("Digite um nome\n");
	scanf("%s", pri);
	printf("Digite outro nome\n");
	scanf("%s", seg);
		if( compara_string(pri,seg)){
			printf("As duas strings são iguais");
		}
		else
			printf("As duas strings não são iguais");
}
