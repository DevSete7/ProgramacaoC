#include <stdio.h>

int main (){

    //Definição de variáveis

    int torre, rainha = 0, bispo = 0, cavalo = 1;

    //Movimento da torre - 5 casas a direita

    printf("Movimentação da torre: \n");

    for (torre = 0; torre < 5; torre++)
    {
        printf("Direita \n");
    }
    //Movimento do bispo - 5 casas diagonal para cima a direita

    printf("Movimentação do bispo: \n");

    while (bispo < 5)
    {
        printf("Cima Direita\n");
        bispo++;
    }
    //Movimento da rainha - 8 casas para a esquerda

    printf("Movimento da Rainha: \n");

    do
    {
        printf("Esquerda \n");
        rainha++;

    } while (rainha < 8);

    //Movimento do cavalo - 2 casas para baixo e 1 para esquerda

    printf(" \n");
    printf("Movimento do Cavalo: \n");

    while (cavalo <= 1) 
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo \n");
        }
        cavalo++;
        printf("Esquerda");
        printf(" \n");
    }
    
    
    return 0;
}