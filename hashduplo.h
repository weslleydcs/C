#ifndef HASHDUPLO
#define HASHDUPLO

//chama o método para inicializar o arquivo
void InicializaArquivoHashDuplo();

//chama o método para calcular a função de hashing h1
int hash1(int chave);

//chama o método para calcular a função de hashing h2
int hash2(int chave);

//chama o método para encontrar o mod diretamente, pelo hash1 e pelo hash2
int Hashduplo(int chave, int i);

//chama a função recebendo um valor de chave como parâmetro para percorrer o hashing e verificar se está chave existe nele ou não
int existeChaveHashDuplo(int chave);

//chama o método para inserir no arquivo
void InserirHashDuplo();

//chama o método para consultar no arquivo
void ConsultaHashDuplo();

//chama o método para remover no arquivo
void RemoveHashDuplo();

//chama o método para printar as informações do arquivo
void ImprimeHashDuplo();

//chama o método para calcular a média de acessos
void MediaAcessosHashDuplo();

//Funções de "menu" do hashing duplo. Funcionam até que eu digite 'e' para encerrar.
void Double_hashing();
#endif