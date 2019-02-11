#ifndef HASHENCADEADO
#define HASHENCADEADO

//chama o método para inicializar o arquivo
void InicializaArquivoHashEncadeado();

int hash1(int chave);

//chama o método para inserir no arquivo
void InserirHashEncadeado();

//chama o método para consultar no arquivo
void ConsultaHashEncadeado();

//chama o método para remover no arquivo
void RemoveHashEncadeado();

//chama o método para printar as informações do arquivo
void ImprimeHashEncadeado();

//chama o método para calcular a média de acessos
void MediaAcessosHashEncadeado();

//chama a função recebendo um valor de chave como parâmetro para percorrer o hashing e verificar se está chave existe nele ou não
int existeChaveHashEncadeado(int chave);

//Encontra o fim da cadeia(a próxima posição vazia de baixo pra cima da tabela hash) recebendo uma chave como parâmetro
int EncontreFimCadeia(int chave);

//Encontrar um índice original da chave, o índice que é igual ao seu mod
int EncontraIndiceDeQuemAponta(int chave);

//Funções de "menu" do hashing encadeado. Funcionam até que eu digite 'e' para encerrar.
void Hashing_lisch();
#endif
