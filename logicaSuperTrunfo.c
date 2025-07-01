#include <stdio.h>

int main() {
    // Dados fixos da Carta 1
    char estado1[3] = "SP"; 
    char codigo1[4] = "A01";
    char cidade1[50] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11; 
    float pib1 = 699.28;
    int pontos1 = 50;

    // Dados fixos da Carta 2
    char estado2[3] = "RJ"; 
    char codigo2[4] = "B02"; 
    char cidade2[50] = "Rio de Janeiro"; 
    int populacao2 = 6000000; 
    float area2 = 1200.25; 
    float pib2 = 300.50; 
    int pontos2 = 30; 

    // Densidades
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Exibe as cartas
    printf("Carta 1\n");
    printf("Cidade: %s (%s)\n", cidade1, estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n\n", densidade1);

    printf("Carta 2\n");
    printf("Cidade: %s (%s)\n", cidade2, estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n\n", densidade2);

    
    int opcao1, opcao2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    char nomeAtributo1[30], nomeAtributo2[30];

    // Menu 1: Primeiro atributo
    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n");
    printf("Opção: ");
    scanf("%d", &opcao1);

    // Salva valores do primeiro atributo
    switch (opcao1) {
        case 1:
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
            sprintf(nomeAtributo1, "População");
            break;
        case 2:
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            sprintf(nomeAtributo1, "Área");
            break;
        case 3:
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            sprintf(nomeAtributo1, "PIB");
            break;
        case 4:
            valor1_carta1 = pontos1;
            valor1_carta2 = pontos2;
            sprintf(nomeAtributo1, "Pontos Turísticos");
            break;
        case 5:
            valor1_carta1 = densidade1;
            valor1_carta2 = densidade2;
            sprintf(nomeAtributo1, "Densidade Populacional");
            break;
        default:
            printf("Opção inválida! Encerrando programa.\n");
            return 1;
    }

    // Menu 2: Segundo atributo (exclui o anterior)
    printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != opcao1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Populacional\n"); break;
            }
        }
    }
    printf("Opção: ");
    scanf("%d", &opcao2);

    if (opcao2 == opcao1 || opcao2 < 1 || opcao2 > 5) {
        printf("Opção inválida ou repetida. Encerrando programa.\n");
        return 1;
    }

    // Salva valores do segundo atributo
    switch (opcao2) {
        case 1:
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
            sprintf(nomeAtributo2, "População");
            break;
        case 2:
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            sprintf(nomeAtributo2, "Área");
            break;
        case 3:
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            sprintf(nomeAtributo2, "PIB");
            break;
        case 4:
            valor2_carta1 = pontos1;
            valor2_carta2 = pontos2;
            sprintf(nomeAtributo2, "Pontos Turísticos");
            break;
        case 5:
            valor2_carta1 = densidade1;
            valor2_carta2 = densidade2;
            sprintf(nomeAtributo2, "Densidade Populacional");
            break;
    }

    // Mostra os valores escolhidos
    printf("\nComparando os atributos: %s e %s\n", nomeAtributo1, nomeAtributo2);
    printf("%s - %s: %.2f | %s: %.2f\n", nomeAtributo1, cidade1, valor1_carta1, cidade2, valor1_carta2);
    printf("%s - %s: %.2f | %s: %.2f\n", nomeAtributo2, cidade1, valor2_carta1, cidade2, valor2_carta2);

    // Regras de comparação (densidade é o contrário)
    int v1 = (opcao1 == 5) ? (valor1_carta1 < valor1_carta2) : (valor1_carta1 > valor1_carta2);
    int v2 = (opcao2 == 5) ? (valor2_carta1 < valor2_carta2) : (valor2_carta1 > valor2_carta2);

    // Soma dos dois atributos por carta
    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    printf("\nResultado individual:\n");
    printf("%s venceu no %s? %s\n", cidade1, nomeAtributo1, v1 ? "Sim" : "Não");
    printf("%s venceu no %s? %s\n", cidade1, nomeAtributo2, v2 ? "Sim" : "Não");

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    // Resultado final
    printf("\nResultado final: ");
    (soma1 > soma2) ? printf("%s venceu!\n", cidade1) :
    (soma2 > soma1) ? printf("%s venceu!\n", cidade2) :
    printf("Empate!\n");

    return 0;
}