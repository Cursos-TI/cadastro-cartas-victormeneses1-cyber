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

    // CALCULOS NOVOS (NIVEL AVENTUREIRO)

    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    printf("\n\n");

    printf("=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\n");

    printf("=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    printf("\n===== BATALHA =====\n\n");

// População
if (populacao1 > populacao2)
    printf("Populacao: Carta 1 venceu!\n");
else if (populacao1 < populacao2)
    printf("Populacao: Carta 2 venceu!\n");
else
    printf("Populacao: Empate!\n");

// Densidade (MENOR vence)
if (densidade1 < densidade2)
    printf("Densidade: Carta 1 venceu!\n");
else if (densidade1 > densidade2)
    printf("Densidade: Carta 2 venceu!\n");
else
    printf("Densidade: Empate!\n");

// PIB per capita
if (pibPerCapita1 > pibPerCapita2)
    printf("PIB per Capita: Carta 1 venceu!\n");
else if (pibPerCapita1 < pibPerCapita2)
    printf("PIB per Capita: Carta 2 venceu!\n");
else
    printf("PIB per Capita: Empate!\n");

// Super Poder
float super1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibPerCapita1 - densidade1;
float super2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibPerCapita2 - densidade2;

if (super1 > super2)
    printf("Super Poder: Carta 1 venceu a batalha!\n");
else if (super1 < super2)
    printf("Super Poder: Carta 2 venceu a batalha!\n");
else
    printf("Super Poder: Empate absoluto!\n");

    return 0;
}