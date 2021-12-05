#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "infra.h"

int main(void)
{
    srand(211204);

    /*
 Codigo   Regiao  Tipo   Moradores   Interesse     Rede    ConMes    ConMor\n");
XXXXXXXX YYYYYYY  %%%%   12345678   SSSSSSSSSS      Sim    0001.1     0000.11
    */
    printf(
        "Codigo   Regiao     Tipo   Moradores"
        "   Interesse     Rede    ConMes    ConMor\n");

    for (int i = 0; i < 10; i += 1)
    {
        Casa* casa = fabrica("AB123X");
        if (casa == NULL) return -1;  // nao criou
        mostra_casa(casa);
        free(casa);
    }
    return 0;
}
