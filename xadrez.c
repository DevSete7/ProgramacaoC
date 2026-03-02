#include <stdio.h>

void moverTorre(int casas){                 //Recursividade para mover a torre
    if (casas > 0)
    {
        printf("Direita \n");
        moverTorre(casas - 1);
    }
}
void moverRainha(int casas){                //Recurssividade para mover a rainha
    if (casas > 0)
    {
        printf("Esquerda \n");
        moverRainha(casas - 1);
    }
}

int main (){

    //Definição de variáveis

    int torre, rainha = 0, bispo = 0;

    //Movimento da torre - 5 casas a direita

    printf("\n");
    printf("Movimentação da torre: \n");
    moverTorre(5);                          //Chamando recursividade

    //Movimento do bispo - 5 casas diagonal para cima a direita

    printf("\n");
    printf("Movimentação do bispo: \n");

    for (bispo = 0; bispo < 1 ; bispo++)    //Loop aninhado utilizando (for)
    {
        for (int i = 0; i < 5; i++)
        {
            printf("Cima Direita \n");
        }
    }
    
    //Movimento da rainha - 8 casas para a esquerda

    printf("\n");
    printf("Movimento da Rainha: \n");
    moverRainha(8);                         //Chamando recursividade

    //Movimento do cavalo - 2 casas para cima e 1 para direita

    printf(" \n");
    printf("Movimento do Cavalo: \n");

    for (int cavalo = 1, i = 0; i < 2; i++) //Loop aninhado complexo aplicando múltiplas variáveis
    {
        printf("Cima \n");
    }
        printf("Direita \n");
    
    return 0;
}