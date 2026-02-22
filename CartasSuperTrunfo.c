#include <stdio.h>

int main() {

    char codigo1[4];
    char estado1;
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    char codigo2[4];
    char estado2;
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    printf("=== SUPER TRUNFO - PAISES ===\n\n");

    printf("Cadastro da Carta 1\n");

    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    printf("\n");

    printf("Cadastro da Carta 2\n");

    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    printf("\n\n");

    printf("=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);

    printf("\n");

    printf("=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);

    return 0;
}