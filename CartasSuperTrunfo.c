#include <stdio.h>

int main() {
    
    char estado1, codigo1[4], nome_da_cidade1[50];
    int populacao1, numero_de_pontos_turisticos1;
    float area1, pib1;


    char estado2, codigo2[4], nome_da_cidade2[50];
    int populacao2, numero_de_pontos_turisticos2;
    float area2, pib2;

   
    printf("--- Carta 1 ---\n");

    printf("Digite o estado da carta: ");
    scanf(" %c", &estado1);
    printf("O estado da carta é: %c\n", estado1);

    printf("Insira o código da carta: ");
    scanf("%3s", codigo1);
    printf("O código da carta é: %s\n", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade1);
    printf("O nome da cidade é: %s\n", nome_da_cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    printf("A população total da cidade é: %d\n", populacao1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);
    printf("A área da cidade é: %.2f\n", area1);

    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib1);
    printf("O PIB da cidade é: %.2f\n", pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &numero_de_pontos_turisticos1);
    printf("O número de pontos turísticos é: %d\n", numero_de_pontos_turisticos1);

  
    printf("\n--- Carta 2 ---\n");

    printf("Digite o estado da carta: ");
    scanf(" %c", &estado2);
    printf("O estado da carta é: %c\n", estado2);

    printf("Insira o código da carta: ");
    scanf("%3s", codigo2);
    printf("O código da carta é: %s\n", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade2);
    printf("O nome da cidade é: %s\n", nome_da_cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("A população total da cidade é: %d\n", populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);
    printf("A área da cidade é: %.2f\n", area2);

    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib2);
    printf("O PIB da cidade é: %.2f\n", pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &numero_de_pontos_turisticos2);
    printf("O número de pontos turísticos é: %d\n", numero_de_pontos_turisticos2);

    return 0;
}