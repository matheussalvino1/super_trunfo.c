#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados de cada carta
struct Carta {
    char estado[3];
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    struct Carta carta1, carta2;

    // Cadastro da carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (ex: SP): ");
    scanf("%s", carta1.estado);
    printf("Codigo da carta (ex: SP01): ");
    scanf("%s", carta1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nome);
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Area (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos da carta 1
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    printf("\n");

    // Cadastro da carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Estado (ex: RJ): ");
    scanf("%s", carta2.estado);
    printf("Codigo da carta (ex: RJ02): ");
    scanf("%s", carta2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nome);
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Area (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos da carta 2
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    printf("\n--- Resultado da Comparacao ---\n");
    printf("Comparacao pelo atributo: PIB\n");
    printf("%s: %.2f bilhoes\n", carta1.nome, carta1.pib);
    printf("%s: %.2f bilhoes\n", carta2.nome, carta2.pib);

    // Lógica de comparação (PIB — maior vence)
    if (carta1.pib > carta2.pib) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
    } else if (carta2.pib > carta1.pib) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
