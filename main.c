#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hashduplo.h"
#include "hashencadeado.h"

int main() {

    char escolha_entrada[0];

    scanf("%c", &escolha_entrada[0]);

    switch(escolha_entrada[0]) {

        case 'l':
            //chama a função de hashing encadeado
            InicializaArquivoHashEncadeado();
            Hashing_lisch();
            break;
        case 'd':
            //chama a função de hashing duplo
            InicializaArquivoHashDuplo();
            Double_hashing();
            break;
    }
    return 0;
}