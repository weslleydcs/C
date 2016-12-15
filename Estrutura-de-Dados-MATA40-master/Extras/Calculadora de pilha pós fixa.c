#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 120


struct pilha{ //Cria��o da struct pilha
	int topo;
	float vetor[MAX];
};
typedef struct pilha Pilha;


Pilha* cria(void){ //Cria a pilha
	Pilha* p = (Pilha*) malloc(sizeof(Pilha));
	p->topo = 0;
	return p;
}


void push(Pilha* p, float i){ //Fun��o para inserir elementos na pilha
 	if(p->topo == MAX){ //capacidade m�xima atingida
 		//printf("Estouro de pilha!!.\n");
 		exit(1); //encerra o programa
 	}
 	p->vetor[p->topo] = i; //push elemento na pr�xima posi��o livre
 	p->topo++; //o topo � incrementado
}


int vazia(Pilha* p){ //Fun��o que verifica se a pilha est� vazia
 	return(p->topo == 0); //retorna o topo como sendo nulo
}


float pop(Pilha* p){ //Fun��o que pop elementos da pilha
	float i;
	if( vazia(p) ){ //verifica se a pilha esta vazia, se estiver, n�o ser� poss�vel popr elementos do topo
		//printf("A pilha esta vazia\n");
		exit(1); //aborta programa
	}
 	//caso a pilha n�o esteja vazia, a fun��o pop elemento do topo da pilha
 	i = p->vetor[p->topo-1]; //valor recebe a posi��o topo-1 do vetor da pilha
 	p->topo--; //topo � decrementado
 	return i;
}


void libera(Pilha* p){ //Fun��o para liberar os campos da pilha
 	free(p); //libera todos os campos da pilha
}


struct calculadora{ //Cria��o da struct calculadora
 	char x[MAX];
 	Pilha* p; //pilha de n�meros a serem operados
};
typedef struct calculadora Calculadora;


Calculadora* cria_calculadora(char* sinal){
 	Calculadora* ca = (Calculadora*) malloc(sizeof(Calculadora));
 	strcpy(ca->x, sinal); //Faz uma c�pia do sinal no campo f do ponteiro ca
 	ca->p = cria(); //Cria a pilha como sendo vazia
 	return ca;
}

void print(Calculadora* t){ //Fun��o para imprimir o topo da pilha
 	printf("%.02f\n", t->p->vetor[t->p->topo-1]);
}


void operando(Calculadora* ca, float i){ //Fun��o que captura os valores a serem operados e push na pilha
 	push(ca->p,i);
 	//printf(ca->f,i); - Optativo
}

void operador(Calculadora* ca, char operacao){ //Fun��o que captura o sinal da opera��o e push na pilha
	float valor1, valor2, res;


	if(vazia(ca->p)){ //Verifica se a pilha est� vazia ou n�o
 	 	valor2 = 0.0;
 	}
 	else{
 		valor2 = pop(ca->p);
 	}
 	if(vazia(ca->p)){
 		valor1 = 0.0;
 	}
 	else{
 		valor1 = pop(ca->p);
 	}

 	switch(operacao){
 		case '+':
 			res = valor1 + valor2;
 			push(ca->p, res);
 			break;
 		case '-':
 			res = valor1 - valor2;
 			push(ca->p, res);
 			break;
 		case '*':
 			res = valor1 * valor2;
 			push(ca->p, res);
 			break;
 		case '/':
 			res = valor1 / valor2;
 			push(ca->p, res);
 			break;
 	}
}

void libera_calculadora(Calculadora* ca){
	libera(ca->p);
	free(ca);
}

int main(int argc, char *argv[]) {

    char token[100];
    Calculadora *calc = cria_calculadora("%.2f\n");

    while (1) {

        scanf("%s", token);
        if (token[0] == ';') {
            print(calc);

            break;
        }
        else if (token[1] == '\0' && (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/')) {
                operador(calc, token[0]);
        }
        else {
            float num = atof(token);
            operando(calc, num);
        }
    }

    libera_calculadora(calc);
    return 0;
}
