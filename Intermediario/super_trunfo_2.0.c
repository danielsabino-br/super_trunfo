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

    int atributo1, atributo2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

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

    // ===== CÁLCULO =====
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // ===== MENU 1 =====
    printf("\n=== Escolha o PRIMEIRO atributo ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    scanf("%d", &atributo1);

    // ===== MENU 2 (DINÂMICO) =====
    printf("\n=== Escolha o SEGUNDO atributo ===\n");

    if (atributo1 != 1) printf("1 - Populacao\n");
    if (atributo1 != 2) printf("2 - Area\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turisticos\n");
    if (atributo1 != 5) printf("5 - Densidade Demografica\n");

    scanf("%d", &atributo2);

    // ===== ATRIBUTO 1 =====
    switch (atributo1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontos1; valor1_c2 = pontos2; break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
    }

    // ===== ATRIBUTO 2 =====
    switch (atributo2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontos1; valor2_c2 = pontos2; break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
    }

    // ===== SOMA =====
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    // ===== RESULTADO =====
    printf("\n===== RESULTADO FINAL =====\n");
    printf("%s -> %.2f + %.2f = %.2f\n", pais1, valor1_c1, valor2_c1, soma1);
    printf("%s -> %.2f + %.2f = %.2f\n", pais2, valor1_c2, valor2_c2, soma2);

    printf("\nVencedor: %s\n",
        soma1 > soma2 ? pais1 :
        soma2 > soma1 ? pais2 :
        "Empate!"
    );

    return 0;
}
