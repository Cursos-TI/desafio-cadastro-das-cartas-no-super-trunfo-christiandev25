#include <stdio.h>

int main() {
    int pop1;
    float area1;
    float pib1;
    int pontos1;

    int pop2;
    float area2;
    float pib2;
    int pontos2;

    // Carta 1
    printf("Escreva a população da carta 1: ");
    scanf("%d", &pop1);

    printf("Escreva a área da carta 1: ");
    scanf("%f", &area1);

    printf("Escreva o PIB da carta 1: ");
    scanf("%f", &pib1);

    printf("Escreva os pontos turísticos da carta 1: ");
    scanf("%d", &pontos1);

    // Carta 2
    printf("Escreva a população da carta 2: ");
    scanf("%d", &pop2);

    printf("Escreva a área da carta 2: ");
    scanf("%f", &area2);

    printf("Escreva o PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Escreva os pontos turísticos da carta 2: ");
    scanf("%d", &pontos2);

    #include <stdio.h>

int main() {
    // Carta 1
    int pop1, pontos1;
    float area1, pib1;
    float densidade1, pibPerCapita1;

    // Carta 2
    int pop2, pontos2;
    float area2, pib2;
    float densidade2, pibPerCapita2;

    // Entrada - Carta 1
    printf("=== Carta 1 ===\n");
    printf("População: ");
    scanf("%d", &pop1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Entrada - Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("População: ");
    scanf("%d", &pop2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculo dos atributos derivados
    densidade1 = pop1 / area1;
    pibPerCapita1 = pib1 / pop1;

    densidade2 = pop2 / area2;
    pibPerCapita2 = pib2 / pop2;

    // Saída
    printf("\n=== Dados da Carta 1 ===\n");
    printf("População: %d\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.6f bilhões por habitante\n", pibPerCapita1);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("População: %d\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.6f bilhões por habitante\n", pibPerCapita2);


    return 0;
}
