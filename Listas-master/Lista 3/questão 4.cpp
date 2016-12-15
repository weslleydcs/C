#include <stdio.h>
int multiplos(int i)
{

	int multiplo=0;
	while ((i>0) && (multiplo != 5)){
		if (i%3==0){
			printf("\n%d", i);
			multiplo++;
		}
		i++;
	}
}

int main()
{
	int multiplo=0;
	printf ("Os cinco primeiros multiplos de 3 sao: ");
	multiplos(1);
	return 0;
}
