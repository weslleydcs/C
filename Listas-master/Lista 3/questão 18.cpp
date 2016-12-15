#include <stdio.h>

int divisivel(int cont)
{
    int j=0, num=20;

    while(cont != 9){
        cont=0;
        num+=20;

        for(j=19; j>=11; j--){
            if(num%j==0)
                cont++;
            else 
				break;    
        }
      
    }
    printf("O menor numero divisivel por cada um dos numeros de 1 a 20 eh:\n==> %d\n", num);
}

int main(){
	divisivel(1);
	return 0;
}
