#include<stdio.h>
typedef struct
{
    char     codigo[10];
    unsigned moradores;
    char     interesse;
    char     rede_ex;
    double   consumo;

}   Casa;

typedef struct 
{
    unsigned cap;
    unsigned size;
    Casa* R;

}   Base; // banco de dados da pesquisa

// retorna uma Casa, preenchida. 
// prefixo = string 6 ultimos digitos da matricula
Casa* fabrica(const char* prefixo);
int   mostra_casa(Casa* cs);

Base* cria_base(unsigned tam); // retorna um banco de dados de certo tamanho
Base* apaga_base(Base* db); // destroi o banco, retorna NULL
int   mostra_base(Base* db, const char* tit); // mostra o relatorio
