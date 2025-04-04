#include <stdio.h>

int main() {
    
    char estado1[3], codigo1[4], nome_da_cidade1[50];
    int populacao1, numero_de_pontos_turisticos1;
    float area1, pib1, densidade1, pib_per_capita1;

    char estado2[3], codigo2[4], nome_da_cidade2[50];
    int populacao2, numero_de_pontos_turisticos2;
    float area2, pib2, densidade2, pib_per_capita2;

    printf("--- Carta 1 ---\n");

    printf("Digite o estado da carta (sigla de 2 letras): ");
    scanf("%2s", estado1);

    printf("O estado da carta é: %s\n", estado1);

    printf("Insira o código da carta: ");
    scanf("%3s", codigo1);

    printf("O código da carta é: %s\n", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade1);  // Espaço antes do % evita problemas de buffer

    printf("O nome da cidade é: %s\n", nome_da_cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos1);

    // Cálculo da densidade e PIB per capita
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    printf("A densidade populacional é: %.2f hab/km²\n", densidade1);
    printf("O PIB per capita é: %.2f\n", pib_per_capita1);


    printf("\n--- Carta 2 ---\n");

    printf("Digite o estado da carta (sigla de 2 letras): ");
    scanf("%2s", estado2);

    printf("O estado da carta é: %s\n", estado2);

    printf("Insira o código da carta: ");
    scanf("%3s", codigo2);

    printf("O código da carta é: %s\n", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade2);  // Espaço antes do % evita problemas de buffer

    printf("O nome da cidade é: %s\n", nome_da_cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    // Cálculo da densidade e PIB per capita
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    printf("A densidade populacional é: %.2f hab/km²\n", densidade2);
    printf("O PIB per capita é: %.2f\n", pib_per_capita2);

    return 0;
}