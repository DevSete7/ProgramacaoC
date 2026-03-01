#include <stdio.h>

int main (){

    //Definição de variáveis

    int torre, rainha = 0, bispo = 0;

    //Movimento da torre - 5 casas a direita (for)

    printf("Movimentação da torre: \n");

    for (torre = 0; torre < 5; torre++)
    {
        printf("Direita \n");
    }
    //Movimento do bispo - 5 casas diagonal para cima a direita (while)

    printf("Movimentação do bispo: \n");

    while (bispo < 5)
    {
        printf("Cima Direita\n");
        bispo++;
    }
    //Movimento da rainha - 8 casas para a esquerda (do-while0)

    printf("Movimento da Rainha: \n");

    do
    {
        printf("Esquerda \n");
        rainha++;

    } while (rainha < 8);
    

    return 0;
}