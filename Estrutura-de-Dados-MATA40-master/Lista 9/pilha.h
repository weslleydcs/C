typedef struct pilha Pilha;

Pilha* pilha_cria();

float pilha_push (Pilha* p, float v);

float pilha_pop (Pilha* p);

int pilha_vazia (Pilha* p);

float pilha_libera (Pilha* p);
