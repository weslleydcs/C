#include "pilha.h"
struct calc
{
 char f[21]; // formato para impressao (e.g. "%.2f\n“)
 Pilha * p; // pilha de operandos
};
typedef struct calc Calc;
Calc * calc_cria(char * f);
void calc_operando(Calc * c, float valor);
void calc_operador(Calc * c, char op);
void calc_libera(Calc * c);
