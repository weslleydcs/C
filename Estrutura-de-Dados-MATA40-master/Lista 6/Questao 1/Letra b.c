#include <stdio.h>
struct ponto{
	float x;
	float y;	
};
typedef struct ponto Ponto;
int main(){
	Ponto cord;
	scanf("%f", &cord.x);
	scanf("%f", &cord.y);
	printf("\n%f", cord.x);
	printf("\n%f", cord.y);

	return 0;
}
