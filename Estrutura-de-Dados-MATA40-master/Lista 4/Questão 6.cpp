#include <stdio.h>

int main(){
	int i = 5, j = 10, *pi, *pj = &j;
	pi = &i;
	
	printf("%d\n", *pi); //Alternativa A
	
	printf("\n%d\n", *pj); //Alternativa B
	
	pj = &*&j;
	printf("\n%d\n", pj); //Alternativa C
	
	i = *&*&j;
	printf("\n%d\n", i); //Alternativa D
	
	i = (*pi)+++*pj;
	printf("\n%d\n", i); //Alternativa E
	
	return 0;
}
