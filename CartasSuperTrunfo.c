#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


// Área para definição das variáveis para armazenar as propriedades das cidades

int main(){
  char estado[30];
  char codigocarta[30];
  char nomedacidade[30];
  int populacao;
  float area;
  float pib;
  int pontosturisticos;
  
// Área para entrada de dados
  
  printf("Digite o Estado: \n");
  scanf("%s", &estado);
  
  printf("Digite o Código da carta: \n");
  scanf("%s", &codigocarta);

  printf("Digite o nome da cidade: \n");
  scanf("%s", &nomedacidade);

  printf("Digite o número da população: \n");
  scanf("%d", &populacao);

  printf("Digite o tamanho da área do estado, em km²: \n");
  scanf("%f", &area);

  printf("Digite o valor do PIB do estado: \n");
  scanf("%f", &pib);

  printf("Digite o número de pontos  turísticos: \n");
  scanf("%d", &pontosturisticos);

  // Área para exibição dos dados da cidade

  printf(" - Código da carta: %s\n", codigocarta);
  printf(" - Nome da Cidade: %s\n", nomedacidade);
  printf(" - Estado: %s\n", estado);
  printf(" - População %d\n", populacao);
  printf(" - Área em km² %f\n", area);
  printf(" - PIB %f\n", pib);
  printf(" - Numero de pontos turísticos %d\n", pontosturisticos);
  

return 0;
} 
