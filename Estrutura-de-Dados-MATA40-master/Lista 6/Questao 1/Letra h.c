#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct ponto1{
	float x;
	float y;	
};
struct ponto2{
	float x;
	float y;	
};
typedef struct ponto1 Ponto;
float leitura(Ponto *p){
	scanf("%f %f", &p->x , &p->y);
} 

float imprime(Ponto *p){
	printf("%f %f", p->x , p->y);
} 

float distancia(Ponto *p, Ponto *q){
	float d;
	d = ((p->x - q->x)*(p->x - q->x)) + ((p->y - q->y)*(p->y - q->y));
	printf("%f\n",sqrt(d));
}

int main(){
	Ponto cord1;
	Ponto cord2;
	Ponto* p;
	Ponto* q;
	p = &cord1;
	q = &cord2;
	leitura(p);
	imprime(p);
	printf("\n");
	leitura(q);
	imprime(q);
	printf("\n");
	distancia(p,q);	
	return 0;
}
