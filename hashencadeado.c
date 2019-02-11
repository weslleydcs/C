#include <stdio.h>
#include <string.h>
#include "hashencadeado.h"
#define TAMANHO_DO_ARQUIVO 11
#define nulo "nulo"
int ProximaPosicaoVazia = TAMANHO_DO_ARQUIVO - 1;

FILE *arqEncadeado;

typedef struct {

    int chave;
    char nome[21];
    int idade;  
    int apontador;

}hashL;

hashL HashL; //para declarar um hash encadeado

void InicializaArquivoHashEncadeado() {

	int i;
	
    HashL.chave = -1;
    HashL.idade = -1;
    HashL.apontador = -1;
    strcpy(HashL.nome, "");

	arqEncadeado = fopen("HashingEncadeado.bin","r+b");

    if(arqEncadeado == NULL)
    {
        arqEncadeado = fopen("HashingEncadeado.bin","w+b");
        for (i = 0; i < TAMANHO_DO_ARQUIVO; i++)
        {
            fwrite(&HashL, sizeof(hashL), 1, arqEncadeado);
        }
    }
    fclose(arqEncadeado);
}

/*
Objetivo: 
    Quando a função InserirHashEncadeado é executada, esta função(existeChaveHashEncadeado) é chamada recebendo o valor da chave.
    Nela eu verifico se a chave digitada pelo usuário já existe no hashing encadeado e retorna 1 caso sim, 0 caso contrário. 
    Mas para isto existem 3 casos.

    Caso 1: Encontra a chave logo na primeira consulta, no índice igual ao seu mod
    Caso 2: Não encontra a chave no seu índice, mas também não existe apontador de onde esta chave poderia estar(chave não existe no hashing)
    Caso 3: Não encontra a chave no seu índice e mesmo percorrendo todos os apontadores, chega a um apontador -1 e não encontra a chave(não há mais caminho a seguir)

Como Funciona: 
    F1 - Para o Caso 1 return true(1)
    F2 - Para os Casos 2 e 3 return false(0)
*/
int existeChaveHashEncadeado(int chave) {

    int  i, posicao;
    hashL HEncadeado;

    arqEncadeado = fopen("HashingEncadeado.bin","r+b");

    posicao = hash1(HashL.chave);

    for(i = 0; i < TAMANHO_DO_ARQUIVO; i++) 
    {        
        fseek(arqEncadeado, ((posicao) * sizeof (hashL)), SEEK_SET);
        fread(&HEncadeado, sizeof(hashL), 1, arqEncadeado);
        
        if(HEncadeado.chave == chave) { //se encontrou a chave, return true
            fclose(arqEncadeado);
            return 1;
        }
        else if(HEncadeado.chave != chave && HEncadeado.apontador == -1) //se não encontrou a chave e também não tiver apontador, return false
        {
            fclose(arqEncadeado);
            return 0;
        }
        else
        { //então não encontrou a chave, mas o apontador tem valor, a posicao a ser percorrida sera o apontador
            posicao = HEncadeado.apontador;
        }
    }
    fclose(arqEncadeado);
    return 0;
}

/*
Objetivo: 
   Encontrar a próxima posição mais vazia do Hashing de baixo para cima

Como Funciona: 
	F1 - Explicado melhor no passo a passo abaixo
*/
int EncontreFimCadeia(int chave) {

    int  i, posicao;
    hashL HEncadeado;

    posicao = hash1(chave);

    for(i = 0; i < TAMANHO_DO_ARQUIVO; i++) 
    {        
    	//Percorre o vetor 10 caso necessário, posicionando o ponteiro do arquivo no índice igual ao mod da chave
        fseek(arqEncadeado, ((posicao) * sizeof (hashL)), SEEK_SET);
        fread(&HEncadeado, sizeof(hashL), 1, arqEncadeado);
        
        if(HEncadeado.apontador == -1) //se a posição lida tiver apontador igual a -1
        {   
            return posicao;
        }
        else
        { //se não encontrou a chave, mas o apontador tem valor, a posicao a ser percorrida sera o apontador
            posicao = HEncadeado.apontador;
        }
    }
    return -1;
}

/*
	Objetivo:
		Encontrar um índice original da chave, o índice que é igual ao seu mod

	Como Funciona:
		F1 - Procura de trás pra frente seu índice através do seu mod
*/
int EncontraIndiceDeQuemAponta(int chave){

    hashL HEncadeado;
    int i = 0;
    int Posicao[TAMANHO_DO_ARQUIVO];
    
    HEncadeado.apontador = hash1(chave);
    
    while(1)
    {
        fseek(arqEncadeado, (HEncadeado.apontador * sizeof(hashL)), SEEK_SET);
        fread(&HEncadeado, sizeof(hashL), 1, arqEncadeado);
        if(HEncadeado.chave == chave) 
        {
            return Posicao[i-2];
        }
        Posicao[i++] = HEncadeado.apontador;
    }
}

/*
Objetivo:
	O usuário deseja inserir uma chave no hashing usando o tipo HashL global e setando HashL.apontador = -1; na linha 125.

Como Funciona:
	F1 - Após inserir os dados da minha chave, verifico se a chave já existe no hashing.
	F2 - Se já existir, mesmo após inserir os dados, informo que a chave já existe e acaba a função
	F3 - Calcula o mod a chave, coloco o ponteiro do arquivo no índice hash = mod da chave e leio o que tem lá
	F4 - A chave deste índice é vazia?(HEncadeado.chave == -1). Se sim, pode inserir sem colisão

	F5 - Se existir chave, e o mod desta chave for diferente do mod da chave que eu quero inserir, então
	esta chave não pertence a esta posição, mas de alguma forma se encontra ai.

	F6 - Que eu faço? chamo a função EncontraIndiceDeQuemAponta para saber em que índice se encontra a chave 
	que tem o apontador igual a posição que estou agora.

	F7 - Feito isto eu vou agora na posição do hashing igual ao mod da chave que quero inserir e insiro.
	F9 - Agora eu vou onde o índice de EncontraIndiceDeQuemAponta está e seto que ele aponta para 
	onde a chave de antes vai ficar.
*/
void InserirHashEncadeado() {

    int i, e, posicao;
    int posicaoFimCadeia;
    hashL HEncadeado; //cria um hash do tipo encadeado para inserir os valores
    HashL.apontador = -1;//insere obrigatoriamente -1 no apontador
  
    scanf("%d", &HashL.chave); 
    scanf(" %[^\n]s", HashL.nome);
    scanf("%d", &HashL.idade);

    if(existeChaveHashEncadeado(HashL.chave) == 1) {
        printf("Esta chave ja existe: %d\n", HashL.chave);
        return;    
    }

        posicao = hash1(HashL.chave); //pega a posição pelo mod da chace
        
        arqEncadeado = fopen("HashingEncadeado.bin","r+b");

        fseek(arqEncadeado, ((posicao) * sizeof(hashL)), SEEK_SET);
        fread(&HEncadeado, sizeof(hashL), 1, arqEncadeado);

        if(HEncadeado.chave == -1) //se for possível inserir sem der colisão, insere
        {
            fseek(arqEncadeado, ((posicao) * sizeof (hashL)), SEEK_SET);
            fwrite(&HashL, sizeof(hashL), 1, arqEncadeado);
            fclose(arqEncadeado);
            return;
        }
        else if(hash1(HEncadeado.chave) != posicao) //se o mod da chave que eu encontrei lendo o arquivo é diferente do mod da chave que eu quero inserir
        {
            int quemaponta = EncontraIndiceDeQuemAponta(HEncadeado.chave); //encontro o índice da chave que eu encontrei lendo o arquivo
            int apontador;

            //coloco o ponteiro do arquivo no índice hash = mod da chave que eu encontrei no hash e escrevo os dados chave que quero inserir lá
            fseek(arqEncadeado, ((posicao) * sizeof (hashL)), SEEK_SET); 
            fwrite(&HashL, sizeof(hashL), 1, arqEncadeado);
            
            HashL = HEncadeado; //Passo os dados da chave que estava antes para o HashL global
            HashL.apontador = -1; //seta apontador = -1
            apontador = HEncadeado.apontador; //a variável apontador recebe o valor do apontador da chave que estava antes

            //coloco o ponteiro do arquivo no índice hash de quem apontava pra essa chave e leio o que está lá
            fseek(arqEncadeado, ((quemaponta) * sizeof (hashL)), SEEK_SET);
            fread(&HEncadeado, sizeof(hashL), 1, arqEncadeado);

            HEncadeado.apontador = apontador;

            /*coloco o ponteiro do arquivo no índice hash de quem aponta 
            e agora digo que o apontador dele será igual aonde a chave de antes vai ficar*/
            fseek(arqEncadeado, ((quemaponta) * sizeof (hashL)), SEEK_SET);
            fwrite(&HEncadeado, sizeof(hashL), 1, arqEncadeado);
        }

        posicaoFimCadeia = EncontreFimCadeia(HashL.chave); //posicaoFimCadeia recebe a próxima posição vazia de cima para baixo do hashing
        
        for(e = 0; e < TAMANHO_DO_ARQUIVO; e++) 
        { 
            fseek(arqEncadeado, ((ProximaPosicaoVazia) * sizeof (hashL)), SEEK_SET);
            fread(&HEncadeado, sizeof(hashL), 1, arqEncadeado);

            if(HEncadeado.chave == -1)//verifica se a proxima posicao esta vazia
            {
                HashL.apontador = -1;
                //escreve na proxima posicao vazia o novo registro com os valores digitados(chave, nome, idade)
                fseek(arqEncadeado, ((ProximaPosicaoVazia) * sizeof (hashL)), SEEK_SET);
                fwrite(&HashL, sizeof(hashL), 1, arqEncadeado);//testar com HEncadeado

                //lê a posicao que ele estava antes para informar que nela, o apontador agora tem valor
                fseek(arqEncadeado, ((posicaoFimCadeia) * sizeof (hashL)), SEEK_SET);
                fread(&HEncadeado, sizeof(hashL), 1, arqEncadeado);

                HEncadeado.apontador = ProximaPosicaoVazia;

                //escreve o valor do apontador na posição acessada inicialmente
                fseek(arqEncadeado, ((posicaoFimCadeia) * sizeof (hashL)), SEEK_SET);
                fwrite(&HEncadeado, sizeof(hashL), 1, arqEncadeado);
                break;
            }
            ProximaPosicaoVazia--;  //Atualizo a ProximaPosicaoVazia caso não não entre no if, ou seja, a posição não está vazia 
        }     
    fclose(arqEncadeado);
}

/*
	Objetivo:
		Encontrar uma chave no Hashing

	Como Funciona:
		F1 - Explicado melhor no passo a passo abaixo
*/
void ConsultaHashEncadeado() {

    int i, chave, posicao;
    scanf("%d", &chave);

    arqEncadeado = fopen("HashingEncadeado.bin","r+b");

    posicao = hash1(chave); //pega o indice do chave % tamanho_do_arquivo

    //procuro no arquivo o que tem neste indice
    fseek(arqEncadeado, ((posicao) * sizeof (hashL)), SEEK_SET);
    fread(&HashL, sizeof(hashL), 1, arqEncadeado);

    if(HashL.chave == chave)//se a chave desse indice for igual a chave que eu digitei pra consultar...achou 
    {
        printf("chave: %d\n", HashL.chave);
        printf("%s\n", HashL.nome);
        printf("%d\n", HashL.idade);
        printf("%d\n", HashL.apontador);
        fclose(arqEncadeado);
        return;
    }
    else//(11 != 55)
    {
        while(HashL.apontador != -1) 
        {
            if(HashL.chave == chave)//se a chave desse índice for igual a chave que eu digitei pra consultar...achou 
            {
                printf("chave: %d\n", HashL.chave);
                printf("%s\n", HashL.nome);
                printf("%d\n", HashL.idade);
                printf("%d\n", HashL.apontador);
                fclose(arqEncadeado);
                return;
            }
            /*se a chave deste índice não for a chave que eu busco, mas ela não tem apontador, não terá como buscá-la
            ou seja, ela não existe no hashing*/
            else if(HashL.apontador == -1)
            {
                printf("chave nao encontrada: %d\n", chave);
                fclose(arqEncadeado);
                return;
            }
            /*Se o apontador tiver valor eu vou ler a posição do hashing = apontador até achar está chave pois 
            ficará no loop do while até que encontre um apontador vazio*/
            else
            {
                fseek(arqEncadeado, ((HashL.apontador) * sizeof (hashL)), SEEK_SET);
                fread(&HashL, sizeof(hashL), 1, arqEncadeado);

                //Quando a posição de um apontador fizer referência ao índice da chave que eu procuro eu printo ela e fecho o arquivo
                if(HashL.chave == chave) 
                {
                    printf("chave: %d\n", HashL.chave);
                    printf("%s\n", HashL.nome);
                    printf("%d\n", HashL.idade);
                    printf("%d\n", HashL.apontador);
                    fclose(arqEncadeado);
                }
            }
        }
    }
}

/*
	Objetivo:
		Remover uma chave no Hashing

	Como Funciona:
		F1 - Explicado melhor no passo a passo abaixo
*/

void RemoveHashEncadeado() {
    int i, posicao, quemAponta, proximo;
    hashL HEncadeado;

    scanf("%d", &HashL.chave);

    if(existeChaveHashEncadeado(HashL.chave) == 0) { //Chamo a função existeChaveHashEncadeado para verificar se esta chave existe ou não no hashing
        printf("chave nao encontrada: %d\n", HashL.chave);
        return;
    }
    arqEncadeado = fopen("HashingEncadeado.bin","r+b");

    HEncadeado.apontador = hash1(HashL.chave); //O hashL local HEncadeado.apontador recebe o mod da chave que eu quero remover
    HEncadeado.chave = -1; //para setar que esta chave não existe mais

    while(HEncadeado.chave != HashL.chave)//Enquanto HashL.chave for diferente de -1(não esteja vazia)
    { 
        //Fico procurando no hash a posição que tem o apontador igual ao mod da chave que quero inserir até quebrar o while   
        posicao = HEncadeado.apontador;
        fseek(arqEncadeado, ((posicao) * sizeof (hashL)), SEEK_SET);
        fread(&HEncadeado, sizeof(hashL), 1, arqEncadeado);
    }
    /*Se a o mod da chave que que encontrei agora for igual ao valor da posicao(linha 313 e linha 320)
    && ainda assim este apontador for nulo, ele é o primeiro, e não aponta pra ninguém. Posso simplesmente remover*/
    if(posicao == hash1(HEncadeado.chave) && HEncadeado.apontador == -1)
    {
        HEncadeado.chave = -1; //escreve vazio no arquivo
        fseek(arqEncadeado, ((posicao) * sizeof (hashL)), SEEK_SET);
        fwrite(&HEncadeado, sizeof(hashL), 1, arqEncadeado);

        if(ProximaPosicaoVazia < posicao) {
            ProximaPosicaoVazia = posicao;
        }
    }
    /*Se a o mod da chave que que encontrei agora for igual ao valor da posicao(linha 313 e linha 320)
    && ainda assim este apontador não for nulo, percorro sempre quem aponta para quem até cair no caso do if(linha 326)*/
    else if(posicao == hash1(HEncadeado.chave) && HEncadeado.apontador != -1)
    {
        proximo = HEncadeado.apontador;

        fseek(arqEncadeado, ((HEncadeado.apontador) * sizeof (hashL)), SEEK_SET);
        fread(&HEncadeado, sizeof(hashL), 1, arqEncadeado);

        fseek(arqEncadeado, ((posicao) * sizeof (hashL)), SEEK_SET);
        fwrite(&HEncadeado, sizeof(hashL), 1, arqEncadeado);

        HEncadeado.chave = -1;
        
        fseek(arqEncadeado, ((proximo) * sizeof (hashL)), SEEK_SET);
        fwrite(&HEncadeado, sizeof(hashL), 1, arqEncadeado);

        if(ProximaPosicaoVazia < proximo) {
            ProximaPosicaoVazia = proximo;
        }
    }
    /*Se eu quiser remover uma chave tal que o mod dela não pertença àquela posição,
    eu removo e atualizo quem aponta para apontar para -1 caso seja necessário
    ou simplesmente apago
    */
    else
    {
        proximo = HEncadeado.apontador;
        quemAponta = EncontraIndiceDeQuemAponta(HashL.chave);
        
        fseek(arqEncadeado, ((quemAponta) * sizeof (hashL)), SEEK_SET);
        fread(&HEncadeado, sizeof(hashL), 1, arqEncadeado);

        HEncadeado.apontador = proximo;

        fseek(arqEncadeado, ((quemAponta) * sizeof (hashL)), SEEK_SET);
        fwrite(&HEncadeado, sizeof(hashL), 1, arqEncadeado);

        fseek(arqEncadeado, ((posicao) * sizeof (hashL)), SEEK_SET);
        fread(&HEncadeado, sizeof(hashL), 1, arqEncadeado);

        HEncadeado.chave = -1;

        fseek(arqEncadeado, ((posicao) * sizeof (hashL)), SEEK_SET);
        fwrite(&HEncadeado, sizeof(hashL), 1, arqEncadeado);

        if(ProximaPosicaoVazia < posicao) {
            ProximaPosicaoVazia = posicao;
        }
    }
    fclose(arqEncadeado);
}

/*
Objetivo: Imprimir todas as posições do hash

Como Funciona:
    F1 - Percorro todo o Hash com o for.
    F2 - Se nesta posição a chave for vazia, imprimo nulo, senão, imprimo seus dados.
    F3 - Possui tratamento de printf para apontador com valor e apontador nulo
*/
void ImprimeHashEncadeado() {

    int i;
    arqEncadeado = fopen("HashingEncadeado.bin", "r+b");

    if(arqEncadeado != NULL) 
    {
        for (i = 0; i < TAMANHO_DO_ARQUIVO; i++)
        {
            fread(&HashL, sizeof (hashL), 1, arqEncadeado);
            if(HashL.chave == -1)
            {
                printf("%d: vazio\n", i);
            }
            else
            {
                if(HashL.apontador != -1)
                    printf("%d: %d %s %d %d\n", i, HashL.chave, HashL.nome, HashL.idade, HashL.apontador);
                else
                    printf("%d: %d %s %d %s\n", i, HashL.chave, HashL.nome, HashL.idade, nulo);
            }
        }
        fclose(arqEncadeado);
    }
}

/*
Objetivo: Imprimir a media de acesso aos registros

Como Funciona:
    F1 - Dentro do for, leio a posição do arquivo pelo apontador
    F2 - Se a chave desta posição não for nula, já fiz um acesso
    F3 - Se a chave desta posição lida pelo arquivo for igual a chave encontrada encontrada, eu fiz isso F2
    F4 - Se não, ela está no índice de algum apontador, e conto cada vez que acesso um apontador
    F5 - Encontro o customedio pelo contador/quantidade de registros não nulos acessados
*/
void MediaAcessosHashEncadeado() {

    hashL HEncadeado; 
    int i, posicao;
    int custo = 0, chaves = 0;
    float custoMedio;

    arqEncadeado = fopen("HashingEncadeado.bin", "r+b");

    for(i = 0; i < TAMANHO_DO_ARQUIVO; i++) 
    {       
        fseek(arqEncadeado, ((i) * sizeof (hashL)), SEEK_SET);
        fread(&HashL, sizeof(hashL), 1, arqEncadeado);

        if(HashL.chave >= 0) 
        {
            custo++;
            chaves++;
            
            posicao = hash1(HashL.chave);
            while(1) 
            {   
                fseek(arqEncadeado, (posicao) * sizeof(hashL), SEEK_SET);
                fread(&HEncadeado, sizeof(hashL), 1, arqEncadeado);
                
                if(HashL.chave == HEncadeado.chave)
                {
                    break;
                }
                else
                {
                    posicao = HEncadeado.apontador;
                    custo++;
                }
            }
        }
    }
    fclose(arqEncadeado);
    custoMedio = custo/chaves;
    printf("%.1f\n", custoMedio);
}

/*
Funções de "menu" do hashing encadeado. Funcionam até que eu digite 'e' para encerrar.
*/
void Hashing_lisch() {

	char escolha[0];
    int d;

	do{
		scanf("%c", &escolha[0]);
		switch(escolha[0]) {

			case 'i':
				//chama o método para inserir no arquivo
				InserirHashEncadeado();
				break;
			case 'c':
				//chama o método para consultar no arquivo
				ConsultaHashEncadeado();
				break;
			case 'r':
				//chama o método para remover no arquivo
				RemoveHashEncadeado();
				break;
			case 'p':
				//chama o método para printar as informações do arquivo
				ImprimeHashEncadeado();
				break;
			case 'm':
				//chama o método para calcular a média de acessos
				MediaAcessosHashEncadeado();
				break;
		}
	}while(escolha[0] != 'e');
}