#include <stdio.h>

struct Carta {
    char estado[3];
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
};
int main() {
    struct Carta cartas[2];

    for (int i = 0; i < 2; i++) {
        printf("Cadastro da carta %d:\n", i + 1);

        printf("Digite o estado (ex: SP): ");
        scanf("%s", cartas[i].estado);

        printf("Digite o codigo da cidade (ex: A01): ");
        scanf("%s", cartas[i].codigo);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", &cartas[i].nomeCidade);

        printf("Digite a populacao: ");
        scanf("%d", &cartas[i].populacao);

            printf("Digite a area (em km²): ");
            scanf("%f", &cartas[i].area);

            printf("Digite o PIB (em bilhoes): ");
            scanf("%f", &cartas[i].pib);

                printf("Digite o numero de pontos turisticos: ");
                scanf("%d", &cartas[i].pontosturisticos);

                printf("\n");

}

printf("\n--- Dados das cartas cadastradas ---\n");
for (int i = 0; i < 2; i++) {
    printf("Carta %d:\n", i + 1);
    printf("||Estado: %s\n", cartas[i].estado);
    printf("Codigo da cidade: %s\n", cartas[i].codigo);
    printf("Nome da cidade: %s\n", cartas[i].nomeCidade);
    printf("Populacao: %d\n", cartas[i].populacao);
    printf("Area: %.2f km²\n", cartas[i].area);
    printf("PIB: %.2f bilhoes\n", cartas[i].pib);
    printf("Pontos turisticos: %d\n", cartas[i].pontosturisticos);
    printf("\n");
}

return 0;
}

