/* Ocorrencias de a em b*/
#include<stdio.h>
#include<conio.h>

int compara_string(char x[], char y[])
{
	int i=0;
	int j=0;
	int ocorrencia=0;	
		for(i=0; x[i]!= '\0'; i++){
			for (j=0; y[j]!='\0'; j++){
				if(x[i]==y[j]){
				ocorrencia++;
				}
			}
		}
		return ocorrencia;			
}		

int main()
{
	char a[20], b[20];
	printf("Digite um nome\n");
	scanf("%s", a);
	printf("Digite outro nome\n");
	scanf("%s", b);
	printf("São %d ocorrencias de A em B\n",compara_string(b,a) );
}
