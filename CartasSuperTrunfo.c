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
    printf("Digite o estado da carta: ");
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
    printf("Digite o estado da carta: ");
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

    // COMPARAÇÕES

    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %lu\n", nome_da_cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", nome_da_cidade2, estado2, populacao2);
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade1);
    } else {
        if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    printf("\nComparação de cartas (Atributo: Área):\n");
    printf("Carta 1 - %s (%s): %.2f\n", nome_da_cidade1, estado1, area1);
    printf("Carta 2 - %s (%s): %.2f\n", nome_da_cidade2, estado2, area2);
    if (area1 > area2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade1);
    } else {
        if (area2 > area1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    printf("\nComparação de cartas (Atributo: PIB):\n");
    printf("Carta 1 - %s (%s): %.2f\n", nome_da_cidade1, estado1, pib1);
    printf("Carta 2 - %s (%s): %.2f\n", nome_da_cidade2, estado2, pib2);
    if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade1);
    } else {
        if (pib2 > pib1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n");
    printf("Carta 1 - %s (%s): %d\n", nome_da_cidade1, estado1, numero_de_pontos_turisticos1);
    printf("Carta 2 - %s (%s): %d\n", nome_da_cidade2, estado2, numero_de_pontos_turisticos2);
    if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade1);
    } else {
        if (numero_de_pontos_turisticos2 > numero_de_pontos_turisticos1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    printf("\nComparação de cartas (Atributo: Densidade Populacional - menor vence):\n");
    printf("Carta 1 - %s (%s): %.2f\n", nome_da_cidade1, estado1, densidade1);
    printf("Carta 2 - %s (%s): %.2f\n", nome_da_cidade2, estado2, densidade2);
    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade1);
    } else {
        if (densidade2 < densidade1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    printf("\nComparação de cartas (Atributo: PIB per capita):\n");
    printf("Carta 1 - %s (%s): %.2f\n", nome_da_cidade1, estado1, pib_per_capita1);
    printf("Carta 2 - %s (%s): %.2f\n", nome_da_cidade2, estado2, pib_per_capita2);
    if (pib_per_capita1 > pib_per_capita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade1);
    } else {
        if (pib_per_capita2 > pib_per_capita1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    printf("\nComparação de cartas (Atributo: Super Poder):\n");
    printf("Carta 1 - %s (%s): %.2f\n", nome_da_cidade1, estado1, super_poder1);
    printf("Carta 2 - %s (%s): %.2f\n", nome_da_cidade2, estado2, super_poder2);
    if (super_poder1 > super_poder2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade1);
    } else {
        if (super_poder2 > super_poder1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    return 0;
}