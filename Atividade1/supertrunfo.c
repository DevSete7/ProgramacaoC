#include <stdio.h>

// Desafio Super Trunfo - Estados
// Tema 1 - Cadastro de Cartas
// Objetivo: Nível novato - Criar cartas representando cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){

    // Área para definição de variáveis para armazenar as propriedades das cidades

    int populacao, turisticos;
    float area, pib;
    char estado[20], codigo[4], cidade[20];

    // Área para entrada de dados

    //Cidade 01:

    printf("Digite o nome do Estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos a cidade: \n");
    scanf("%d", &turisticos);

    //Cidade 02: 

    printf("Digite o nome do Estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos a cidade: \n");
    scanf("%d", &turisticos);

    // Área para exibição dos dados da cidade

    //Cidade 01:

    printf("Carta 1: \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %f Km²\n", area);
    printf("PIB: %f Bilhões de Reais\n", pib);
    printf("Número de pontos turísticos: %d \n", turisticos);

    //Cidade 02: 
    
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %f Km²\n", area);
    printf("PIB: %f Bilhões de Reais\n", pib);
    printf("Número de pontos turísticos: %d \n", turisticos);

return 0;

}