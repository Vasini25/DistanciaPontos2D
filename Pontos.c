#include <stdio.h>
#include <stdlib.h>
#include "Pontos.h"

void DeclaraPontos (int n_pontos, PONTO *pts)
{
    for(int i=0; i<n_pontos; i++)
    {
        scanf("%f", &pts[i].ponto_x);
        scanf("%f", &pts[i].ponto_y);
    }
}