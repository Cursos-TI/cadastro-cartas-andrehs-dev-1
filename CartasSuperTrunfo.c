#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// Área para definição das variáveis para armazenar as propriedades das cidades
int main() {
    char estado[100];
    char codigo[100];
    char nomeCidade[100];

    int populacao;
    int pontosTuriticos;

    float area;
    float pib;
    
  // Área para entrada de dados

  printf("Digite o estado: ");
    scanf("%s", estado); // "%s" só le até o primeiro espaço
    printf("Digite o código: ");
    scanf("%s", codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("Digite a área: ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontosTuriticos);
    printf("\n------------------------------\n");


  // Área para exibição dos dados da cidade
  printf("\nEstado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuriticos);

return 0;
} 
