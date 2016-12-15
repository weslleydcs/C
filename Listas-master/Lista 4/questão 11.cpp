#include <stdio.h>
#include <string.h>

int main()
{
	char str1[255], str2[255], strAux1[255], strAux2[255];
	int i, tam;
	
	printf("Digite uma string:\n");
	gets(str1);
	printf("\nDigite outra String:\n");
	gets(str2);
	
	tam=strlen(str1)-1;
	for(i=0; str1[i]!='\0';i++){
		if((str1[tam] != 'A') && (str1[tam] != 'a')){
			strAux1[i]=str1[tam];
		}else{
			strAux1[i]='*';
		}
		tam--;     
	}
       strAux1[i]='\0';
	
	i=0;
	tam=strlen(str2)-1;
	
	for(i=0; str2[i]!='\0';i++){
		if((str2[tam] != 'A') && (str2[tam] != 'a')){
			strAux2[i]=str2[tam];
		}else{
			strAux2[i]='*';
		}
		tam--;     
	}
       strAux2[i]='\0';

	
	printf("\n\nPrimeira String Digitada:\n%s", str1);
	printf("\n\nSegunda String Digitada:\n%s", str2);
	printf("\n\nPrimeira String Invertida e com * no lugar dos 'A's:\n%s", strAux1);
	printf("\nSegunda String Invertida e com * no lugar dos 'A's:\n%s", strAux2);	
	
	
	return 0;
}

