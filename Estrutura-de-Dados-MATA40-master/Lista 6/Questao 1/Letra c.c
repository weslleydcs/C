#include <stdio.h>
struct ponto{
	float x;
	float y;	
};
typedef struct ponto Ponto;
float leitura(Ponto teste){
	scanf("%f", &teste.x);
	scanf("%f", &teste.y);
} 

float imprime(Ponto teste){
	printf("%f", teste.x);
	printf("%f", teste.y);
} 

int main(){
	Ponto cord;
	leitura(cord);
	imprime(cord);
	return 0;
}
