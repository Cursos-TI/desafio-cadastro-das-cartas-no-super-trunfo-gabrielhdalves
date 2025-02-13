#include <stdio.h> // importo a biblioteca para entrada e saída de dados
int main(){ //Função principal, onde o programa começa a executar
    char nome[20]; //Variável que recebe o nome da cidade digitada pelo usuário
    double populacao; //Variável que recebe o número de população da cidade 
    double area; //Variável que recebe o tamanho da área da cidade 
    double pib; //Variável que recebe o valor do PIB da cidade 
    int pontos_turisticos; //Variável que recebe a quantidade de Pontos Turísticos na cidade
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome); // Comando que irá enviar para variável nome o nome da cidade
    printf("Digite a população da cidade:\n");
    scanf("%lf", &populacao); //Comando que irá enviar para variável população o valor da população
    printf("Digite a área da cidade em km2:\n");
    scanf("%lf", &area); //Comando que irá enviar para variável area o valor em Km2 da area
    printf("Digite o PIB da cidade:\n");
    scanf("%lf", &pib); //Comando que irá enviar para variável pib o valor do PIB
    printf("Digite quantos pontos turísticos há na cidade:\n");
    scanf("%d", &pontos_turisticos); //Comando que irá enviar para variável pontos_turisticos a quantidade de pontos turísticos

    printf("A cidade cadastrada foi %s\nPopulação: %.2lf\nÁrea em km2: %.2lf\nPIB: %.2lf\nPontos turísticos informados: %d",nome, populacao, area, pib, pontos_turisticos); //Imprime todos os dados digitados
    return 0; // indica que o programa terminou perfeitamente
}