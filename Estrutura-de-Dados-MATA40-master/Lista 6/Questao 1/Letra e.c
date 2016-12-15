#include <stdio.h>
struct ponto{
	float x;
	float y;	
};
typedef struct ponto Ponto;
int main(){
	Ponto cord;
	Ponto* p;
	p = &cord;
	return 0;
}
