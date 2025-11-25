#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


// Área para definição das variáveis para armazenar as propriedades das cidades

int main() {
  char Estado[50];
  char Código da carta[50];
  char Nome da cidade[50];
  int População;
  float Área em km²;
  float PIB;
  int Número de pontos turísticos;
  
// Área para entrada de dados
  
  printf("Digite o Estado \n");
  scanf("%s", &Estado);
  
  printf("Digite o Código da carta \n");
  scanf("%s", &Código da carta);

  printf("Digite o nome da cidade \n");
  scanf("%s", &Nome da Cidade);

  printf("Digite o número da população \n")
  scanf("%d", &População);

  printf("Digite o tamanho da área do estado, em km² \n")
  scanf("%f", &Área em km²);

  printf("Digite o valor do PIB do estado \n")
  scanf("&f", &PIB);

  printf("Digite o número de pontos  turísticos \n")
  scanf("%d", &Número de pontos turísticos);

  // Área para exibição dos dados da cidade

  printf(" - Código da carta: %s\n", Código da carta);
  printf(" - Nome da Cidade: %s\n", Nome da Cidade);
  printf(" - Estado: %s\n", Estado);
  printf(" - População %d\n", População);
  printf(" - Área em km² %f\n", Área em km²);
  printf(" - PIB %f\n", PIB);
  printf(" - Numero de pontos turísticos %d\n", Número de pontos turísticos);
  

return 0;
} 
