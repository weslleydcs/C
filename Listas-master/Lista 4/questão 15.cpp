#include <stdio.h>
#include <string.h>
#include <conio.h>

int palavras(int i, int j)
{
	char s1[15], s2[15];
	int tam1=0, tam2=0, tam_total=0;

	printf("Digite uma palavra[Max. 15 letras]: ");
	gets(s1);
	
	while(s1[tam1] != '\0'){
		tam1++;
	}
	printf("\nDigite outra palavra [Max. 15 letras]: ");
	gets(s2);
	i=0;
	while(s2[tam2] != '\0'){
		tam2++;
	}
	tam_total=tam1+tam2;
	char strConcat[tam_total+1];		//Adicionado +1 ao tamanho total pois este corresponde ao lugar do espaco.
	
	for(i=0; i<tam1; i++)
		strConcat[i]=s1[i];
	
	for(i=tam1, j=0; j<=tam2; i++, j++)
		if(i==tam1){
			strConcat[i]=' ';
			j--;						
		}
		else
			strConcat[i] = s2[j];
	
	printf("As duas palavras concatenadas corresponde a: %s", strConcat);
}

int main()
{
	char s1[15], s2[15];
	int tam1=0, tam2=0, tam_total=0;
	palavras(0,0);
	
	return 0;
}
	
