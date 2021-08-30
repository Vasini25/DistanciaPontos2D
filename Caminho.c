#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Caminho.h"
#include "Pontos.h"

float DefineCaminho (int n_pontos, PONTO *pts, CAMINHO *caminho)
{
    caminho->dist_total = 0;

    for(int i=0; i<(n_pontos-1); i++)
    {
        caminho[i].distancia = sqrt((pts[i+1].ponto_x - pts[i].ponto_x) * (pts[i+1].ponto_x - pts[i].ponto_x) + (pts[i+1].ponto_y - pts[i].ponto_y) * (pts[i+1].ponto_y - pts[i].ponto_y));
        caminho->dist_total += caminho[i].distancia;
    }

    return caminho->dist_total;
}