typedef struct matriz Matriz;

Matriz* cria(int m, int n);
 
void libera(Matriz* matx);

float acessa(Matriz* matx, int i, int j);

void atribui(Matriz* matx, int i, int j, float valor);

int linhas(Matriz* matx);
 
int colunas(Matriz* matx);
 
