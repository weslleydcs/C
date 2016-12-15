#include <stdio.h>

int contagem(int i)
{
    while(i>=0){
        if (i==0){
            printf("\n%d", i);
            printf("\nFIM!\n");
        }else{
            printf("\n%d", i);
        }
    i--;
    }
}

int main(){
	contagem(10);
	return 0;
}
