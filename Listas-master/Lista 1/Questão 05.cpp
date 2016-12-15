#include<stdio.h>
#include<conio.h>
	int main(){
	char str1[20], str2[20];
	printf("Digite uma frase.\n");
	gets(str1);
	printf("Digite uma segunda frase.\n");
	gets(str2);
	printf("A Primeira frase é %s \n , A segunda frase é %s \n", str1,str2);     
	printf("A segunda letra da frase 1 é %c e a segunda letra da frase 2 é %c", str1[1], str2[1]);
	return(0);	
	
}
