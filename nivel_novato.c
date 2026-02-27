#include <stdio.h>

int main() {

    //DADOS DA PRIMEIRA CARTA
    char estado[50];
    char codigo[50];
    char cidade[100];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

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


    //DADOS DA SEGUNDA CARTA
    char estado2[50];
    char codigo2[50];
    char cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("Insira os dados da segunda carta\n");

    printf("Digite o estado:\n");
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

    printf("DADOS DA PRIMEIRA CARTA\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);


    printf("DADOS DA SEGUNDA CARTA\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}