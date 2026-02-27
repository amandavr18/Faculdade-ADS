#include <stdio.h>

int main() {

  // DADOS DA PRIMEIRA CARTA
  char estado[50];
  char codigo[50];
  char cidade[100];
  int populacao;
  float area;
  float pib;
  int pontos_turisticos;
  float densidade_populacional;
  float pib_per_capita;

  printf("Insira os dados da primeira carta\n");

  printf("Digite o estado:\n");
  fgets(estado, 50, stdin);

  printf("Digite o código:\n");
  fgets(codigo, 50, stdin);

  printf("Digite a cidade:\n");
  fgets(cidade, 100, stdin);

  printf("Digite a população:\n");
  scanf(" %d", &populacao);

  printf("Digite a área:\n");
  scanf(" %f", &area);

  printf("Digite o pib:\n");
  scanf(" %f", &pib);

  printf("Digite a quantidade de pontos turísticos:\n");
  scanf(" %d", &pontos_turisticos);

  // Cálculos da primeira carta: densidade populacional (hab/km²) e PIB per capita
  densidade_populacional = populacao / area;
  pib_per_capita = pib / populacao;

  // DADOS DA SEGUNDA CARTA
  char estado2[50];
  char codigo2[50];
  char cidade2[100];
  int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;
  float densidade_populacional2;
  float pib_per_capita2;

  printf("Insira os dados da segunda carta\n");

  printf("Digite o estado:\n");
  getchar(); // Limpa o '\n' residual do scanf anterior
  fgets(estado2, 50, stdin);

  printf("Digite o código:\n");
  fgets(codigo2, 50, stdin);

  printf("Digite a cidade:\n");
  fgets(cidade2, 100, stdin);

  printf("Digite a população:\n");
  scanf(" %d", &populacao2);

  printf("Digite a área:\n");
  scanf(" %f", &area2);

  printf("Digite o pib:\n");
  scanf(" %f", &pib2);

  printf("Digite a quantidade de pontos turísticos:\n");
  scanf(" %d", &pontos_turisticos2);

  // Cálculos da segunda carta
  densidade_populacional2 = populacao2 / area2;
  pib_per_capita2 = pib2 / populacao2;

  // Exibição dos resultados - Carta 1
  printf("\nCarta 1:\n");
  printf("Estado: %s", estado);
  printf("Código: %s", codigo);
  printf("Nome da Cidade: %s", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita);

  // Exibição dos resultados - Carta 2
  printf("\nCarta 2:\n");
  printf("Estado: %s", estado2);
  printf("Código: %s", codigo2);
  printf("Nome da Cidade: %s", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

  return 0;
}
