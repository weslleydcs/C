#include <stdio.h>
#include <stdlib.h>
 
//prot�tipo da fun��o media
float media (int n, float *vnotas);
 
int main (void)
{
  float vnotas[15];
  float media_notas;
  int i;
 
  /* leitura das notas */
  for (i = 0; i < 15; i++)
  {
    printf("Digite os valores das notas: ");
    scanf("%f", &vnotas[i]);
  }
   
  //chamada da fun��o
  media_notas = media(15,vnotas);  
   
  printf ( "\nMedia = %.1f \n", media_notas);
   
  system("pause");
  return 0;
}
 
/* Fun��o para c�lculo da m�dia 
   Par�metros: 
      Recebe a quantidade de elementos n
      Recebe o endere�o inicial do vetor notas em *vnotas
   Retorno: 
     Retorna a media na variavel m
*/
float media (int n, float *vnotas)
{
  int i;
  float m = 0, soma = 0;
   
  //fazendo a somat�ria das notas
  for (i = 0; i < n; i++)
    soma = soma + vnotas[i];    
   
  //dividindo pela quantidade de elementos n
  m = soma / n;
   
  //retornando a m�dia
  return m;
}
