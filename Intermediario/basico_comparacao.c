#include <stdio.h>

int main() {

    // ===== CARTA 1 =====
    char estado1[3];
    char codigo1[6];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    float densidade1, pibPerCapita1;

    // ===== CARTA 2 =====
    char estado2[3];
    char codigo2[6];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    float densidade2, pibPerCapita2;

    // ===== ENTRADA CARTA 1 =====
    printf("Carta 1\n");
    printf("Estado: ");
    scanf(" %2s", estado1);

    printf("Codigo: ");
    scanf("%5s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // ===== ENTRADA CARTA 2 =====
    printf("\nCarta 2\n");
    printf("Estado: ");
    scanf("%2s", estado2);

    printf("Codigo: ");
    scanf("%5s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ===== CÁLCULOS =====
    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;

    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;

    // ===== COMPARAÇÃO (ATRIBUTO FIXO: POPULAÇÃO) =====
    printf("\n===== COMPARACAO DE CARTAS =====\n\n");
    printf("Atributo utilizado: Populacao\n\n");

    printf("Carta 1 - %s (%s): %lu\n",
           nomeCidade1, estado1, populacao1);

    printf("Carta 2 - %s (%s): %lu\n\n",
           nomeCidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
