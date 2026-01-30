#include <stdio.h>

int main() {

    // ===== CARTA 1 =====
    char pais1[50];
    int populacao1, pontos1;
    float area1, pib1, densidade1;

    // ===== CARTA 2 =====
    char pais2[50];
    int populacao2, pontos2;
    float area2, pib2, densidade2;

    int opcao;

    // ===== ENTRADA CARTA 1 =====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Nome do pais: ");
    scanf(" %[^\n]", pais1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    // ===== ENTRADA CARTA 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Nome do pais: ");
    scanf(" %[^\n]", pais2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // ===== CÁLCULO DA DENSIDADE =====
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // ===== MENU =====
    printf("\n===== MENU DE COMPARACAO =====\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha o atributo: ");
    scanf("%d", &opcao);

    printf("\n===== RESULTADO =====\n");

    switch (opcao) {

        case 1: // POPULAÇÃO
            printf("Atributo: Populacao\n");
            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n", pais2, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // ÁREA
            printf("Atributo: Area\n");
            printf("%s: %.2f\n", pais1, area1);
            printf("%s: %.2f\n", pais2, area2);

            if (area1 > area2) {
                printf("Vencedor: %s\n", pais1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n", pais2, pib2);

            if (pib1 > pib2) {
                printf("Vencedor: %s\n", pais1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // PONTOS TURÍSTICOS
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", pais1, pontos1);
            printf("%s: %d\n", pais2, pontos2);

            if (pontos1 > pontos2) {
                printf("Vencedor: %s\n", pais1);
            } else if (pontos2 > pontos1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // DENSIDADE (REGRA INVERTIDA)
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f\n", pais1, densidade1);
            printf("%s: %.2f\n", pais2, densidade2);

            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Escolha um numero de 1 a 5.\n");
    }

    return 0;
}
