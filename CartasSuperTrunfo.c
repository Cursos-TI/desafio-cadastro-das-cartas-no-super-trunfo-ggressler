#include <stdio.h>

int main() {

    char estado1[3], codigo1[4], nome_da_cidade1[50];
    unsigned long int populacao1;
    int numero_de_pontos_turisticos1;
    float area1, pib1, densidade1, pib_per_capita1, super_poder1;

    char estado2[3], codigo2[4], nome_da_cidade2[50];
    unsigned long int populacao2;
    int numero_de_pontos_turisticos2;
    float area2, pib2, densidade2, pib_per_capita2, super_poder2;

    printf("--- Carta 1 ---\n");

    printf("Digite o estado da carta (sigla de 2 letras): ");
    scanf("%2s", estado1);

    printf("Insira o código da carta: ");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade1);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos1);

    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + numero_de_pontos_turisticos1 + densidade1 + pib_per_capita1;

    printf("\n--- Carta 2 ---\n");

    printf("Digite o estado da carta (sigla de 2 letras): ");
    scanf("%2s", estado2);

    printf("Insira o código da carta: ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade2);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + numero_de_pontos_turisticos2 + densidade2 + pib_per_capita2;

    printf("\n--- Comparação ---\n");

    printf("População: %s\n", 
        populacao1 > populacao2 ? "Carta 1 vence" :
        populacao2 > populacao1 ? "Carta 2 vence" : "Empate");

    printf("Área: %s\n",
        area1 > area2 ? "Carta 1 vence" :
        area2 > area1 ? "Carta 2 vence" : "Empate");

    printf("PIB: %s\n",
        pib1 > pib2 ? "Carta 1 vence" :
        pib2 > pib1 ? "Carta 2 vence" : "Empate");

    printf("Pontos turísticos: %s\n",
        numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2 ? "Carta 1 vence" :
        numero_de_pontos_turisticos2 > numero_de_pontos_turisticos1 ? "Carta 2 vence" : "Empate");

    printf("Densidade populacional: %s\n",
        densidade1 < densidade2 ? "Carta 1 vence (menor é melhor)" :
        densidade2 < densidade1 ? "Carta 2 vence (menor é melhor)" : "Empate");

    printf("PIB per capita: %s\n",
        pib_per_capita1 > pib_per_capita2 ? "Carta 1 vence" :
        pib_per_capita2 > pib_per_capita1 ? "Carta 2 vence" : "Empate");

    printf("Super poder total: %s\n",
        super_poder1 > super_poder2 ? "Carta 1 vence" :
        super_poder2 > super_poder1 ? "Carta 2 vence" : "Empate");

    return 0;
}