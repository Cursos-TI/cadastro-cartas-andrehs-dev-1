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
    int pontosTuristicos1;

    float area1;
    float pib1;

    // Variavel carta 2:
    int populacao2;
    int pontosTuristicos2;

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
    scanf("%d", &pontosTuristicos1);

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
    scanf("%d", &pontosTuristicos2);

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

    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + PibPerCapta1 + (1 / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + PibPerCapta2 + (1 / densidade2); 


  // Resultado carta 1

    printf("Carta 1:");
    printf("\nEstado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
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
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %2f\n", densidade2);
    printf("Valor PIB: %.2f\n", PibPerCapta2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\n------------------------------\n");

    
    // Dados já cadastrados das cartas


    int atributo1, atributo2;

    float valor1Atributo1, valor2Atributo1;
    float valor1Atributo2, valor2Atributo2;

    float somaCarta1, somaCarta2;

    // Escolha do primeiro atributo
    printf("Escolha o primeiro atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &atributo1);

    // Escolha do segundo atributo com menu dinâmico
    do {
        printf("\nEscolha o segundo atributo:\n");

        if (atributo1 != 1) printf("1. População\n");
        if (atributo1 != 2) printf("2. Área\n");
        if (atributo1 != 3) printf("3. PIB\n");
        if (atributo1 != 4) printf("4. Pontos Turísticos\n");
        if (atributo1 != 5) printf("5. Densidade Demográfica\n");
        if (atributo1 != 6) printf("6. PIB per Capita\n");

        printf("Opção: ");
        scanf("%d", &atributo2);

        if (atributo2 == atributo1) {
            printf("Erro: escolha um atributo diferente.\n");
        }

    } while (atributo2 == atributo1);

    // Valores do primeiro atributo
    switch (atributo1) {
        case 1:
            valor1Atributo1 = populacao1;
            valor2Atributo1 = populacao2;
            break;
        case 2:
            valor1Atributo1 = area1;
            valor2Atributo1 = area2;
            break;
        case 3:
            valor1Atributo1 = pib1;
            valor2Atributo1 = pib2;
            break;
        case 4:
            valor1Atributo1 = pontosTuristicos1;
            valor2Atributo1 = pontosTuristicos2;
            break;
        case 5:
            valor1Atributo1 = densidade1;
            valor2Atributo1 = densidade2;
            break;
        case 6:
            valor1Atributo1 = PibPerCapta1;
            valor2Atributo1 = PibPerCapta2;
            break;
    }

    // Valores do segundo atributo
    switch (atributo2) {
        case 1:
            valor1Atributo2 = populacao1;
            valor2Atributo2 = populacao2;
            break;
        case 2:
            valor1Atributo2 = area1;
            valor2Atributo2 = area2;
            break;
        case 3:
            valor1Atributo2 = pib1;
            valor2Atributo2 = pib2;
            break;
        case 4:
            valor1Atributo2 = pontosTuristicos1;
            valor2Atributo2 = pontosTuristicos2;
            break;
        case 5:
            valor1Atributo2 = densidade1;
            valor2Atributo2 = densidade2;
            break;
        case 6:
            valor1Atributo2 = PibPerCapta1;
            valor2Atributo2 = PibPerCapta2;
            break;
    }

    // Soma dos atributos
    somaCarta1 = valor1Atributo1 + valor1Atributo2;
    somaCarta2 = valor2Atributo1 + valor2Atributo2;

    // Resultado
    printf("\n--- Resultado da Comparação ---\n");
    printf("Carta 1: %s\n", nomeCidade1);
    printf("Carta 2: %s\n", nomeCidade2);

    printf("\nAtributo 1:\n");
    printf("%s: %.2f\n", nomeCidade1, valor1Atributo1);
    printf("%s: %.2f\n", nomeCidade2, valor2Atributo1);

    printf("\nAtributo 2:\n");
    printf("%s: %.2f\n", nomeCidade1, valor1Atributo2);
    printf("%s: %.2f\n", nomeCidade2, valor2Atributo2);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nomeCidade1, somaCarta1);
    printf("%s: %.2f\n", nomeCidade2, somaCarta2);

    if (somaCarta1 > somaCarta2) {
        printf("\nResultado: Carta 1 venceu!\n");
    } else if (somaCarta2 > somaCarta1) {
        printf("\nResultado: Carta 2 venceu!\n");
    } else {
        printf("\nResultado: Empate!\n");
    }




    /* Váriaves Menu Interativo
    int escolhaJogador; */


    /* Layout Menu Interátivo
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
        case 3:

        printf("\n### Comparação de Cartas ###\n");

        printf("Atributo Comparação: PIB\n");

        printf("-----------------------------------------\n");

        printf("Carta 1: %s\n", nomeCidade1);
        printf("PIB Carta 1: %.2f\n", pib1);

        printf("Carta 2: %s\n", nomeCidade2);
        printf("PIB Carta 2: %.2f\n", pib2); 
        
         if (pib1 > pib2){
          printf("Carta 1 venceu\n");
        }
        else if(pib2 > pib1){
          printf("Carta 2 venceu\n");
        }
        else {
          printf("Empate!\n");
        }
        
        break;
        
        // Pontos Turisticos
        case 4:

        printf("\n### Comparação de Cartas ###\n");

        printf("Atributo Comparação: PIB\n");

        printf("-----------------------------------------\n");

        printf("Carta 1: %s\n", nomeCidade1);
        printf("Pontos Turisticos Carta 1: %.2f\n",pontosTuriticos1);

        printf("Carta 2: %s\n", nomeCidade2);
        printf("Pontos Turisticos 2: %.2f\n", pontosTuriticos2);

        if (pontosTuriticos1 > pontosTuriticos2){
          printf("Carta 1 venceu\n");
        }
        else if(pontosTuriticos2 > pontosTuriticos1){
          printf("Carta 2 venceu\n");
        }
        else {
          printf("Empate!\n");
        }
        break;

        // Densidade Demográfica
        case 5:

        printf("\n### Comparação de Cartas ###\n");

        printf("Atributo Comparação: PIB\n");

        printf("-----------------------------------------\n");

        printf("Carta 1: %s\n", nomeCidade1);
        printf("Pontos Turisticos Carta 1: %.2f\n",densidade1);

        printf("Carta 2: %s\n", nomeCidade2);
        printf("Pontos Turisticos 2: %.2f\n", densidade2);

        if (densidade1 > densidade2){
          printf("Carta 1 venceu\n");
        }
        else if(densidade2 > densidade1){
          printf("Carta 2 venceu\n");
        }
        else {
          printf("Empate!\n");
        }
        break;

        // Sair do Jogo
        case 6:
        
        printf("Obrigado por jogar! Até a próxima!\n");

    }
  */

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