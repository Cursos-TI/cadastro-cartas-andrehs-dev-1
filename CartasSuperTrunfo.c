#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// Área para definição das variáveis para armazenar as propriedades das cidades
int main() {

    //Varivael carta 1:
    char estado1[100];
    char codigo1[100];
    char nomeCidade1[100];

     //Varivael carta 2:
    char estado2[100];
    char codigo2[100];
    char nomeCidade2[100];

    // Varivavel carta 1:
    int populacao1;
    int pontosTuriticos1;

    float area1;
    float pib1;

    // Varivavel carta 2:
    int populacao2;
    int pontosTuriticos2;

    float area2;
    float pib2;
    
  // Área para entrada de dados 1
  printf("Carta 1\n");

    printf("Digite o estado: ");
    scanf("%s", estado1); // "%s" só le até o primeiro espaço
    printf("Digite o código: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontosTuriticos1);

  // Divisão

    printf("\n------------------------------\n");


  // Área para entrada de dados 2
  printf("Carta 2\n");
    printf("Digite o estado: ");
    scanf("%s", estado2); // "%s" só le até o primeiro espaço
    printf("Digite o código: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontosTuriticos2);

    printf("\n------------------------------\n");


  // Calculo Densidade e PIB 1
  float densidade1 = populacao1 / area1;
  float PibPerCapta1 = pib1 / populacao1;

  // Calculo Densidade e PIB 2
  float densidade2 = populacao2 / area2;
  float PibPerCapta2 = pib2 / populacao2;

  // Calculo Superpoder
  float superPoder1;
  float superPoder2;

  superPoder1 = populacao1 + area1 + pib1 + pontosTuriticos1 + PibPerCapta1 + (1 / densidade1);
  superPoder2 = populacao2 + area2 + pib2 + pontosTuriticos2 + PibPerCapta2 + (1 / densidade2);



  // Resultado carta 1

    printf("Carta 1:");
    printf("\nEstado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuriticos1);
    printf("Densidade Populacional: %2f\n", densidade1);
    printf("Valor PIB: %.2f\n", PibPerCapta1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Resultado carta 2
    printf("Carta 2:\n");
    printf("\nEstado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuriticos2);
    printf("Densidade Populacional: %2f\n", densidade2);
    printf("Valor PIB: %.2f\n", PibPerCapta2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\n------------------------------\n");

    // Comparação cartas
    printf("\nComparação de Cartas:\n");

    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontosTuriticos1 > pontosTuriticos2 ? 1 : 2, pontosTuriticos1 > pontosTuriticos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", PibPerCapta1 > PibPerCapta2 ? 1 : 2, PibPerCapta1 > PibPerCapta2);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2);

return 0;
} 
