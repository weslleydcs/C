#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calc.h"

Calc * calc_cria(char * formato)
{
	Calc * c= (Calc *)malloc(sizeof(Calc));
	strcpy(c->f,formato);
	c->p = pilha_cria();
	return c;
}

void calc_operando(Calc * c, float valor){
pilha_push(c->p,valor); // empilha oper
// printf(c->f,valor); // imprime topo
}
void calc_libera(Calc * c)
{
 pilha_libera(c->p);
 free(c);
}

void calc_operador(Calc * c, char op)
{
 float v1, v2, valor;
 if (pilha_vazia(c->p)) v2 = 0.0;
 else v2 = pilha_pop(c->p);
 if (pilha_vazia(c->p)) v1 = 00;
 else v1 = pilha_pop(c->p);
 switch (op)
 {
 case '+':
 valor = v1 + v2;
 break;
 case '-':
 valor = v1 - v2;
 break;
 case '*':
 valor = v1 * v2;
 break;
 case '/':
 valor = v1 / v2;
 break;
// default:
// printf(“unknown %c\n", op);
// break;
 }
 pilha_push(c->p,valor); // empilha
 printf(c->f,valor); // imprime
}
