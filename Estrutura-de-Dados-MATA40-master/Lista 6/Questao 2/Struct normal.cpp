#include <stdio.h>
#include <stdlib.h>
#define MAX 100
struct aluno{
   char nome[81];
   int mat;
   char end[121];
   char tel[21];  
};

typedef struct aluno Aluno;
typedef struct aluno *Paluno;
Paluno tab[MAX];  

void cria(){
  int i;
	for(i=0;i<MAX;i++){
		tab[i]=NULL;           
	}
}
       
void atribui(int i){
	  if(tab[i]==NULL){
    	tab[i]=(Paluno)malloc(sizeof(Aluno));
	  }  
      scanf("%s",tab[i]->nome);
      scanf("%d",&tab[i]->mat);
      scanf("%s",tab[i]->end);
      scanf("%s",tab[i]->tel);
}
          
void remove(int i){   
	  free(tab[i]);   
      tab[i]=NULL;    
}

int consulta(int i){
	printf("\n\n%s\n",tab[i]->nome);
	printf("%d\n",tab[i]->mat);
	printf("%s\n",tab[i]->end);
	printf("%s\n",tab[i]->tel); 	       
}

void imprimir(){
    int i;
    for (i=0;i<MAX;i++){
    	consulta(i);  
	}       
}

int main(){
	Paluno tabela[MAX];
	cria();
	atribui(0);
	consulta(0);
	remove(0);
	 
	return 0; 
}
