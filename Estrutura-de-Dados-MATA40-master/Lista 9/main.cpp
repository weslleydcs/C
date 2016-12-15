#include <stdio.h>
#include "calc.h"
int main(void)
{
 char c;
 float valor;
 Calc * calc;
 calc = calc_cria("%.2f\n");
 do
 {
 scanf(" %c",&c); // le^ proximo caractere nao-branco
 if (c=='+' || c=='-' || c=='*' || c=='/')
 calc_operador(calc,c);
 else
 {
 ungetc(c,stdin);
 if (scanf("%f",&valor) == 1)
 calc_operando(calc,valor);
 }
 } while (c!='q');
 calc_libera(calc);
 return 0;
}
