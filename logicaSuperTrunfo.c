#include <stdio.h>

int main() {
    // Dados da primeira carta
    char estado1[3] = "SP"; 
    char codigo1[4] = "A01";
    char cidade1[50] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11; 
    float pib1 = 699.28;
    int pontos1 = 50;

    // Dados da segunda carta
    char estado2[3] = "RJ"; 
    char codigo2[4] = "B02"; 
    char cidade2[50] = "Rio de Janeiro"; 
    int populacao2 = 6000000; 
    float area2 = 1200.25; 
    float pib2 = 300.50; 
    int pontos2 = 30; 

    // Cálculo da densidade populacional 
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Cálculo do PIB per capita
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1; // converte de bilhões para reais
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibe os dados da Carta 1
    printf("Carta 1\n");
    printf("Cidade: %s (%s)\n", cidade1, estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1);

    // Exibe os dados da Carta 2
    printf("Carta 2\n");
    printf("Cidade: %s (%s)\n", cidade2, estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita2);

    // Comparação das cartas com base no PIB per capita
    printf("Comparação de Cartas (Atributo: PIB per Capita)\n");
    printf("Carta 1 - %s: %.2f reais\n", cidade1, pibPerCapita1);
    printf("Carta 2 - %s: %.2f reais\n", cidade2, pibPerCapita2);

    // Verifica qual carta venceu com base no PIB per capita
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}

