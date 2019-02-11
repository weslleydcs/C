#include <stdio.h>
#include <string.h>
#include "hashduplo.h"
#define TAMANHO_DO_ARQUIVO 11

FILE *arqDuplo;

typedef struct {

	int chave;
	char nome[21];
	int idade;	

}hashD;

hashD HashD; //para declarar um hash duplo

int hash1(int chave) {
    return chave % TAMANHO_DO_ARQUIVO; 
    //return chave % TAMANHO_DO_ARQUIVO;
}

int hash2(int chave) {
    int h2 = chave / TAMANHO_DO_ARQUIVO;
    h2 = h2 % TAMANHO_DO_ARQUIVO;

    if(h2 == 0) h2 = 1;
       
    return h2;
}

void InicializaArquivoHashDuplo() {

	int i;

    HashD.chave = -1;
    HashD.idade = -1;
    strcpy(HashD.nome, "");

	arqDuplo = fopen("HashingDuplo.bin","r+b");

    if(arqDuplo == NULL)
    {
        arqDuplo = fopen("HashingDuplo.bin","w+b");
        for (i = 0; i < TAMANHO_DO_ARQUIVO; i++)
        {
            fwrite(&HashD, sizeof(hashD), 1, arqDuplo);
        }
    }
    fclose(arqDuplo);
}

/*
Função para encontrar o mod diretamente, pelo hash1 e pelo hash2
*/
int Hashduplo(int chave, int i) {
    int hasduplo, h1, h2;

    h1 = hash1(chave);
	h2 = hash2(chave);
	
	h2 = (i * h2);
		
    hasduplo = (h1 + h2);
    return hasduplo % TAMANHO_DO_ARQUIVO;
}

/*
Objetivo: 
    Quando a função InserirHashDuplo é executada, esta função(existeChaveHashDuplo) é chamada recebendo o valor da chave.
    Nela eu verifico se a chave digitada pelo usuário já existe no hashing duplo 
    e retorna 1 caso sim, 0 caso contrário. 

Como Funciona: 
    F1 - Pego a chave que recebi
    F2 - Calculo a função de hash dele e atribuo o resultado na variável posicao
    F3 - Coloco o ponteiro do arquivo no índice hash = posicao e leio o que tem lá
    F4 - se a chave que eu encontrei lá for igual a chave que eu to buscando, esta chave existe no hash, senão não existe
*/
int existeChaveHashDuplo(int chave) { 

	int  i, posicao;
    hashD Hduplo;

	arqDuplo = fopen("HashingDuplo.bin","r+b");

	for(i = 0; i < TAMANHO_DO_ARQUIVO; i++) 
	{
        posicao = Hashduplo(HashD.chave, i);
        fseek(arqDuplo, ((posicao) * sizeof (hashD)), SEEK_SET);
        fread(&Hduplo, sizeof(hashD), 1, arqDuplo);
        
        if(Hduplo.chave == chave) {
            fclose(arqDuplo);
            return 1;
        }
    }
    fclose(arqDuplo);
    return 0;
}

/*
Objetivo: Quero inserir uma chave no hash. Verifico se a chave já existe lá:
Se existir, informo que já existe, se não existir eu vou inserir no hash.

Como Funciona:
    Se for possível inserir esta chave eu:
    F1 - Calculo o mod da chave e coloco o ponteiro do arquivo no índice do mod.
    F2 - Leio o que tem neste índice e verifico se a chave dele é nula. Se for nula, 
    insiro ele lá, senão eu salto de h2 em h2 no for até achar uma posição que eu possa inserí-lo
*/
void InserirHashDuplo() {

    int  i, posicao;
    hashD Hduplo;

    scanf("%d", &HashD.chave);

	if(existeChaveHashDuplo(HashD.chave) == 1) {
        printf("chave ja existente: %d\n", HashD.chave);
		return;    
    }

    scanf(" %[^\n]s", HashD.nome);
    scanf("%d", &HashD.idade);
	
    arqDuplo = fopen("HashingDuplo.bin","r+b");

    for(i = 0; i < TAMANHO_DO_ARQUIVO; i++) 
    {
        posicao = Hashduplo(HashD.chave, i);
        fseek(arqDuplo, ((posicao) * sizeof (hashD)), SEEK_SET);
        fread(&Hduplo, sizeof(hashD), 1, arqDuplo);

        if(Hduplo.chave == -1) 
        {
            fseek(arqDuplo, ((posicao) * sizeof (hashD)), SEEK_SET);
            fwrite(&HashD, sizeof(hashD), 1, arqDuplo);
            fclose(arqDuplo);
            return;
        }
    }
    fclose(arqDuplo);
}

/*
Objetivo: Encontrar a chave no hash e exibir o que tem lá

Como Funciona:
    F1 - Calculo o mod desta chave inserida.
    F2 - Posiciono o ponteiro do arquivo no índice do mod.
    F3 - A chave deste índice é a chave que eu to procurando? Se sim, imprimo os dados dele, senão, vou saltando no for até achar.
    F4 - Se acabar o for e eu não achar, está chave não existe no hash e exibo o print da linha 175.
*/
void ConsultaHashDuplo() {

    int i, chave, posicao;

    scanf("%d", &chave);
    arqDuplo = fopen("HashingDuplo.bin","r+b");

     for(i = 0; i < TAMANHO_DO_ARQUIVO; i++) 
     {

        posicao = Hashduplo(chave, i);
        fseek(arqDuplo, ((posicao) * sizeof (hashD)), SEEK_SET);
        fread(&HashD, sizeof(hashD), 1, arqDuplo);

        if(HashD.chave == chave) {

            printf("chave: %d\n", HashD.chave);
            printf("%s\n", HashD.nome);
            printf("%d\n", HashD.idade);
            fclose(arqDuplo);
            return;
        }
    }
    printf("chave nao encontrada: %d\n", chave);
    fclose(arqDuplo);
}

/*
Objetivo: Remover a chave no hash

Como Funciona:
    F1 - Calculo o mod desta chave que quero remover.
    F2 - Posiciono o ponteiro do arquivo no índice do mod.
    F3 - A chave deste índice é a chave que eu to procurando para remover? Se sim, removo, senão, vou saltando no for até achar e removo.
    F4 - Se acabar o for e eu não achar, está chave não existe no hash então não removo e exibo o print da linha 212.
*/
void RemoveHashDuplo() {
    
    int i, chave, posicao;
    hashD Hduplo;

    scanf("%d", &chave);
    arqDuplo = fopen("HashingDuplo.bin","r+b");

     for(i = 0; i < TAMANHO_DO_ARQUIVO; i++)
     {
        posicao = Hashduplo(chave, i);
        fseek(arqDuplo, ((posicao) * sizeof (hashD)), SEEK_SET);
        fread(&HashD, sizeof(hashD), 1, arqDuplo);

        if(HashD.chave == chave) {

            Hduplo.chave = -1;
            Hduplo.idade = -1;
            fseek(arqDuplo, ((posicao) * sizeof (hashD)), SEEK_SET);
            fwrite(&Hduplo, sizeof(hashD), 1, arqDuplo);
            fclose(arqDuplo);
            return;
        }
    }
    printf("chave nao encontrada: %d\n", chave);
    fclose(arqDuplo);
}

/*
Objetivo: Imprimir todas as posições do hash

Como Funciona:
    F1 - Percorro todo o Hash com o for.
    F2 - Se nesta posição a chave for vazia, imprimo nulo, senão, imprimo seus dados.
*/
void ImprimeHashDuplo() {

    int i;
    arqDuplo = fopen("HashingDuplo.bin", "r+b");

    if(arqDuplo != NULL) 
    {
        for (i = 0; i < TAMANHO_DO_ARQUIVO; i++)
        {
            fread(&HashD, sizeof (hashD), 1, arqDuplo);
            if(HashD.chave == -1)
                printf("%d: vazio\n", i);
            else
                printf("%d: %d %s %d\n", i, HashD.chave, HashD.nome, HashD.idade);
        }
        fclose(arqDuplo);
    }
}

/*
Objetivo: Calcular a Média de acessos do hash

Como Funciona:
    F1 - Percorro todo o Hash com o for, posicionando o índice do for na índice do hash
    F2 - Se não posição que eu estou olhando do hash a chave não for vazia, eu começo a contar a partir do primeiro registo.
    F3 - Conto o restante a partir do segundo for

    F4 - Se no segundo for, eu encontrar uma chave que não está no índice correto dela, eu vou saltando e contando cada acesso
    até encontrar Hduplo.chave == chave e atualizo meu contador.

    F5 - A cada vez que eu percorrer o meu primeiro for, e tiver no hash uma chave com valor != -1 significa que eu tenho
    uma chave lá dentro, então eu conto quantos registros eu tenho na linha 302.

    F6 - Por fim, calculo a média = custo/quantidade de registros. Isso claro se houver pelo menos 1 registro no hash, ou mais
*/
void MediaAcessosHashDuplo() {

	int i, j, chave, count, posicao;

	float mediaAcessos = 0, qtd_registros = 0, custo = 0;
	hashD Hduplo;

	arqDuplo = fopen("HashingDuplo.bin","r+b");

    for(i = 0; i < TAMANHO_DO_ARQUIVO; i++) 
    {
        fseek(arqDuplo, (i * sizeof (hashD)), SEEK_SET);
        fread(&Hduplo, sizeof(hashD),1, arqDuplo);

        if(Hduplo.chave != -1) {

			chave = Hduplo.chave;
			count = 0;
			
			for(j = 0; j < TAMANHO_DO_ARQUIVO; j++) {

				posicao = Hashduplo(chave, j);
				fseek(arqDuplo, ((posicao) * sizeof (hashD)), SEEK_SET);
				fread(&Hduplo, sizeof(hashD),1, arqDuplo);
				count++;

				if(Hduplo.chave == chave) {					
					custo = custo + count;
					break;			
				}
			}
			qtd_registros++;
        }     
    }
    
    if(qtd_registros > 0) mediaAcessos = custo/qtd_registros;
	
    fclose(arqDuplo);
	printf("%.1f\n", mediaAcessos);
}

/*
Funções de "menu" do hashing duplo. Funcionam até que eu digite 'e' para encerrar.
*/
void Double_hashing() {

	char escolha[0];

	do{
		scanf("%c", &escolha[0]);	
		switch(escolha[0]) {
			case 'i':
				//chama o método para inserir no arquivo
				InserirHashDuplo();
				break;
			case 'c':
				//chama o método para consultar no arquivo
				ConsultaHashDuplo();
				break;
			case 'r':
				//chama o método para remover no arquivo
				RemoveHashDuplo();
				break;
			case 'p':
				//chama o método para printar as informações do arquivo
				ImprimeHashDuplo();
				break;
			case 'm':
				//chama o método para calcular a média de acessos
				MediaAcessosHashDuplo();
				break;

		}
	}while(escolha[0] != 'e');
}