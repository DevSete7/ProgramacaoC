#include <stdio.h>

// Desafio Super Trunfo

int main(){

    // Área para definição de variáveis para armazenar as propriedades das cidades

    int populacao1, populacao2, turisticos1, turisticos2;
    float area1, area2, pib1, pib2, densidadec1, densidadec2, pibpcc1, pibpcc2;
    char estado1[20],estado2[20], codigo1[4],codigo2[4], cidade1[20], cidade2[20];

    // Área para entrada de dados

    // Cidade 01:

    printf("Digite o nome do Estado: \n");
    scanf("%s", estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos a cidade: \n");
    scanf("%d", &turisticos1);

    // Cidade 02: 

    printf("Digite o nome do Estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos a cidade: \n");
    scanf("%d", &turisticos2);

    // Cálculo da densidade e PIB per capita

    densidadec1 = (float) (populacao1 / area1);
    pibpcc1 = (float) (pib1 * 1000000000) / populacao1;
    densidadec2 = (float) (populacao2 / area2);
    pibpcc2 = (float) (pib2 * 1000000000) / populacao2;
    
    //Área para exibição de dados

    // Cidade 01:

    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões de Reais\n", pib1);
    printf("Número de pontos turísticos: %d \n", turisticos1);
    printf("Densidade populacional: %.2f hab/km \n", densidadec1);
    printf("PIB per capita: %.2f reais \n", pibpcc1);

    // Cidade 02:

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Número de pontos turísticos: %d \n", turisticos2);
    printf("Densidade populacional: %.2f hab/km \n", densidadec2);
    printf("PIB per capita: %.2f reais \n", pibpcc2);

return 0;

}