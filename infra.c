#include "memory.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "infra.h"

Base* apaga_base(Base* db) { return NULL; }

Base* cria_base(unsigned lim) { return NULL; }

Casa* fabrica(const char* prefixo)
{
    if (strlen(prefixo) != 6) return NULL;
    Casa* nv = (Casa*)malloc(sizeof(Casa));
    memcpy(nv->codigo, prefixo, 6);
    nv->codigo[6] = '1' + rand() % 3; // regiao 1..3
    nv->codigo[7] = 'A' + 2*(rand()%2); // A ou C
    nv->codigo[8] = 0; // termina a string    
    nv->moradores = 1 + rand() % 5;  // 1 a 6 moradores
    nv->interesse = rand() % 3;
    nv->rede_ex = rand() % 2;
    nv->consumo   = 1.0 + (double)(rand()%3) + 1.0 / ((double)(rand() % 100));
    return nv;
}

int   mostra_base(Base* base, const char* tit)
{
    return 0;
}

int mostra_casa(Casa* cs)
{
    const char* rg[] = {"", "Aroeira", "Visconde", "Miramar"};
    const char* tipo[] = {"Casa", "Apto"};
    const char* inter[] = {"Indiferente", "Positivo", "Negativo"};
    const char* rede[] = {"Nao","Sim"};
    printf(
        "%8s %8s   %4s   %8d   %11s     %3s  %7.1f   %7.2f\n",
        cs->codigo,
        rg[cs->codigo[6] -'0'],
        tipo[(cs->codigo[7] != 'A')],
        cs->moradores,
        inter[cs->interesse],
        rede[cs->rede_ex == 'S'],
        (double)cs->consumo,
        (double)cs->consumo / cs->moradores);
        return 0;
}
