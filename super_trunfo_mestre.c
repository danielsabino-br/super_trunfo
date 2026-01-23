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

    float densidade1, pibPerCapita1, superPoder1;

    // ===== CARTA 2 =====
    char estado2[3];
    char codigo2[6];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    float densidade2, pibPerCapita2, superPoder2;

    // ===== ENTRADA CARTA 1 =====
    printf("Carta 1\n");
    printf("Estado: ");
    scanf(" %2s", estado1);

    printf("Codigo:"); 
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

    printf("Codigo:");
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

    superPoder1 =
        (float) populacao1 +
        area1 +
        pib1 +
        pontosTuristicos1 +
        pibPerCapita1 +
        (1.0f / densidade1);

    superPoder2 =
        (float) populacao2 +
        area2 +
        pib2 +
        pontosTuristicos2 +
        pibPerCapita2 +
        (1.0f / densidade2);

    // ===== COMPARAÇÕES =====
    printf("\n===== COMPARACAO DE CARTAS =====\n\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);

    // Menor densidade vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);
    
    printf("Resultado final para (1= true, 0 = false), então Carta 1 venceu se for 1; se não, Carta 2 venceu o resultado é 0.\n");

    
    return 0;
}
