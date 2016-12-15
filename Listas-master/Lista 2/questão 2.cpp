#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	printf("O valor do antecessor deste numero e: %d\n", n-1);
	printf("O valor do sucessor deste numero e: %d\n", n+1);
	
	system("Pause");
	return 0;
}
