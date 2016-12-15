#include<stdio.h>
#include<conio.h>

int maior_end(int a, int b){
	int *p , *q;
	p = &a;
	q = &b;
	
	if(p>q){
		return a;
	}else{
		return b;
	}
}

int main(){
	int x, y;
	
	printf("Digite um valor para A: ");
	scanf("%d", &x);
	printf("Digite um valor para B: ");
	scanf("%d", &y);

	if((maior_end(x,y))==x){
		printf("\n\nO endereco de %d eh o maior", x);
	}
	else{
		printf("\n\nO endereco de %d eh o maior\n", y);
	}
	

}
