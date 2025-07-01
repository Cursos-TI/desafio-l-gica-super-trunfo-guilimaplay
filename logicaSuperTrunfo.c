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

    // Exibe os dados das cartas
    printf("Carta 1\n");
    printf("Cidade: %s (%s)\n", cidade1, estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n\n", densidade1);

    printf("Carta 2\n");
    printf("Cidade: %s (%s)\n", cidade2, estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n\n", densidade2);

    // Menu interativo
    int opcao;
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\nComparação de Cartas (Atributo: ");
    switch (opcao) {
        case 1:
            printf("População)\n");
            printf("%s: %d habitantes\n", cidade1, populacao1);
            printf("%s: %d habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Área)\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("PIB)\n");
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Pontos Turísticos)\n");
            printf("%s: %d pontos\n", cidade1, pontos1);
            printf("%s: %d pontos\n", cidade2, pontos2);
            if (pontos1 > pontos2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (pontos2 > pontos1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Densidade Populacional)\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente com um número de 1 a 5.\n");
            break;
    }

    return 0;
}


