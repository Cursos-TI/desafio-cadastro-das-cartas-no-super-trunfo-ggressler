#include <stdio.h>


int main() {

    char estado;
    char código_da_carta[4];
    char nome_da_cidade[50];
    int população;
    float área;
    float pib;
    int número_de_pontos_turisticos;

    printf("---carta1---");

    printf("digite o estado da carta: ");
    scanf("%s", estado);
    printf("o estado da carta é: %s\n, estado");

    printf("insira o código da carta:");
    scanf("%s", código_da_carta);
    printf("o código da carta é: %s\n, código_da_carta");

    printf("digite o nome da cidade");
    scanf("%s",nome_da_cidade);
    printf("o nome da cidade é:%s\n, nome_da_cidade");

    printf("digite a população da carta:");
    scanf("%d",população);
    printf("a população total da carta é: %d\n, população");

    printf("digite a área da carta");
    scanf("%f",área);
    printf("a área da carta é:%f\n, área");

    printf("digite o pib da carta");
    scanf("%f", pib);
    printf("o pib da carta é de:%f\n, pib");

    printf("o número de pontos turisticos é:");
    scanf("%d", número_de_pontos_turisticos);
    printf("o número de pontos turisticos é de:%d\n, número_de_pontos_turisticos");

   
     return 0;
    
   
}
