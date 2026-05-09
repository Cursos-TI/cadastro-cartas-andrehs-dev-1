#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// Área para definição das variáveis para armazenar as propriedades das cidades
int main() {

    //Variavel carta 1:
    char estado1[100];
    char codigo1[100];
    char nomeCidade1[100];

     //Variavel carta 2:
    char estado2[100];
    char codigo2[100];
    char nomeCidade2[100];

    // Variavel carta 1:
    int populacao1;
    int pontosTuriticos1;

    float area1;
    float pib1;

    // Variavel carta 2:
    int populacao2;
    int pontosTuriticos2;

    float area2;
    float pib2;
    
  // Layout Carta 1
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


  // Layout Carta 2
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

    // Váriaves Menu Interativo
    int escolhaJogador;


    // Layout Menu Interátivo
    printf("### Comparação de Atributos ###\n");

    printf("Escolha uma das opções e compare os atributos das cartas!\n");
    printf("1. Comparar População\n");
    printf("2. Comparar Área\n");
    printf("3. Comparar PIB\n");
    printf("4. Comparar Números de Pontos Turisticos\n");
    printf("5. Comparar densidade demográfica\n");
    printf("6. Sair do Jogo\n");
    printf("Faça sua escolha:");
    scanf("%d", &escolhaJogador);

    printf("----------------------------------------------\n");

    // Escolha do Jogador
    switch (escolhaJogador){
      // População
        case 1:

        printf("\n### Comparação de Cartas ###\n");

        printf("Atributo Comparação: População\n");

        printf("-----------------------------------------\n");

        printf("Carta 1: %s\n", nomeCidade1);
        printf("População Carta 1: %d\n", populacao1);

        printf("Carta 2: %s\n", nomeCidade2);
        printf("População Carta 2: %d\n", populacao2);

        if (populacao1 > populacao2){
            printf("Resultado: Carta 1 venceu!\n");
        }
        else if (populacao2 > populacao1){
            printf("Resultado: Carta 2 venceu!\n");
        }
        else {
            printf("Empate");
        }
        break;

        // Area
        case 2:

        printf("\n### Comparação de Cartas ###\n");

        printf("Atributo Comparação: Área\n");

        printf("-----------------------------------------\n");

        printf("Carta 1: %s\n", nomeCidade1);
        printf("Área Carta 1: %.2f\n", area1);

        printf("Carta 2: %s\n", nomeCidade2);
        printf("Área Carta 2: %.2f\n", area2); 
        
        if (area1 > area2){
          printf("Carta 1 venceu\n");
        }
        else if(area2 > area1){
          printf("Carta 2 venceu\n");
        }
        else {
          printf("Empate!\n");
        }
        break;

        // PIB
        
    
        
    }


   /* // Comparação cartas
    printf("\nComparação de Cartas:\n");

    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontosTuriticos1 > pontosTuriticos2 ? 1 : 2, pontosTuriticos1 > pontosTuriticos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", PibPerCapta1 > PibPerCapta2 ? 1 : 2, PibPerCapta1 > PibPerCapta2);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2); */

return 0;
} 