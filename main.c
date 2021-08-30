#include <stdio.h>
#include <stdlib.h>
#include "Caminho.h"
#include "Pontos.h"

int main()
{
    int n_pontos;
    PONTO *pts;
    CAMINHO *caminho;

    scanf("%d", &n_pontos);

    pts=(PONTO *)malloc(sizeof(PONTO)*n_pontos);
    caminho=(CAMINHO *)malloc(sizeof(CAMINHO)*(n_pontos-1));

    //leitura das cordenadas dos n pontos;
    DeclaraPontos(n_pontos, pts);

    //Define os caminhos de um ponto a outro e soma ao caminho total;
    caminho->dist_total = DefineCaminho(n_pontos, pts, caminho);

    printf("%.2f", caminho->dist_total);

    free(pts);
    free(caminho);

    return 0;
}
