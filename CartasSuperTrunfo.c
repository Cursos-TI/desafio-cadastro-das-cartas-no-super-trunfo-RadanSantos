#include <stdio.h>

// Definição da estrutura da carta
struct Carta {
    char estado[3];
    char codigo[4];
    char nomeCidade [50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePop;
    float pibPerCapita;
};

int main() {
    struct Carta carta1, carta2;
// --- CARTA 1 ---
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (ex: SP): ");
    scanf("%2s", carta1.estado);

    printf("Digite o codigo da cidade (ex: A01) ");
    scanf("%3s", carta1.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("Digite a populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a area (em km²): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB: ");
    scanf("%f", &carta1.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos
    carta1.densidadePop = carta1.populacao / carta1.area;
    carta1.pibPerCapita =(carta1.pib * 1000000000) / carta1.populacao;

    // --- CARTA 2 ---
    printf("\nCadastro da carta 2:\n");
    printf("Digite o estado (ex: SP): ");
    scanf("%2s", carta2.estado);

    printf("Digite o codigo da cidade (ex: A01): ");
    scanf("%3s", carta2.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Digite a populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a area (em km²): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB: ");
    scanf("%f", &carta2.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos
    carta2.densidadePop = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000) / carta2.populacao;

    // ---EXIBINDO RESULTADOS ---
    printf("\n--- RESULTADOS ---\n");

    //Exibição das cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePop);
    printf("PIB per Capita: %.2f reais\n", carta1.pibPerCapita);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePop);
    printf("PIB per Capita: %.2f reais\n", carta2.pibPerCapita);

    return 0;

}

