#include <stdio.h>

struct Carta {
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
};
int main() {
    struct Carta cartas[2];
    for (int i = 0; i < 2; i++) {
        printf("Cadastro da carta %d:\n", i + 1);
        printf("Digite a populacao: ");
        scanf("%d, &cartas[i].populacao");

            printf("Digite a area (em km²): ");
            scanf("%f, &cartas[i].area");

            printf("Digite p PIB (em bilhoes): ");
            scanf("%f, &cartas[i].pib");

                printf("Digite o numero de pontos turisticos: ");
                scanf("%d, &cartas[i].pontosturisticos");

                printf("\n");

}

printf("\n--- Dados das cartas cadastradas ---\n");
for (int i = 0; i < 2; i++) {
    printf("Carta %d:\n", i + 1);
    printf("Populacao: %d\n", cartas[i].populacao);
    printf("Area: %.2f km²\n", cartas[i].area);
    printf("PIB: %.2f bilhoes\n", cartas[i].pib);
    printf("Pontos turisticos: %d\n", cartas[i].pontosturisticos);
    printf("\n");
}

return 0;
}
