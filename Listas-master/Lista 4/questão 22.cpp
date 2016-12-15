#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[255];
    
    printf("Digite uma String em maiuscula (Cadeia de Caracteres) [Max. 255]:\n");
    gets(str);
    printf("A cadeia de caractere digitada foi %s\n", strlwr(str));
}

    
