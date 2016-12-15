#include <stdio.h>
struct ponto{
	float x;
	float y;	
};
typedef struct ponto Ponto;
float leitura(Ponto *p){
	scanf("%f %f", &p->x , &p->y);
} 

float imprime(Ponto *p){
	printf("%f %f", p->x , p->y);
} 

int main(){
	Ponto cord;
	Ponto* p;
	p = &cord;
	leitura(p);
	imprime(p);
	return 0;
}
