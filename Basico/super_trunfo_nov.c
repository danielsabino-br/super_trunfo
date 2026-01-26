#include <stdio.h>

int main() {

    // ===== Carta 1 =====
    char carta1[10];
    char estado1[3];
    char codigocarta1[20];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int numeropontos1;

    // ===== Carta 2 =====
    char carta2[10];
    char estado2[3];
    char codigocarta2[20];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numeropontos2;

    // ================== Cadastro Carta 1 ==================
    printf("=== Carta 1 ===\n");

    printf("Digite a carta (ex: C1): ");
    scanf("%9s", carta1);

    printf("Digite o estado (ex: SP): ");
    scanf("%2s", estado1);

    printf("Digite o codigo da carta: ");
    scanf("%19s", codigocarta1);

    printf("Digite o nome da cidade: ");
    scanf("%49s", nomecidade1);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &numeropontos1);

    // ================== Cadastro Carta 2 ==================
    printf("\n=== Carta 2 ===\n");

    printf("Digite a carta (ex: C2): ");
    scanf("%9s", carta2);

    printf("Digite o estado (ex: SP): ");
    scanf("%2s", estado2);

    printf("Digite o codigo da carta: ");
    scanf("%19s", codigocarta2);

    printf("Digite o nome da cidade: ");
    scanf("%49s", nomecidade2);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &numeropontos2);

    // ================== Exibicao ==================
    printf("\n===== DADOS DA CARTA 1 =====\n");
    printf("Carta: %s\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigocarta1);
    printf("Cidade: %s\n", nomecidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", numeropontos1);

    printf("\n===== DADOS DA CARTA 2 =====\n");
    printf("Carta: %s\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigocarta2);
    printf("Cidade: %s\n", nomecidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", numeropontos2);

    return 0;
}
