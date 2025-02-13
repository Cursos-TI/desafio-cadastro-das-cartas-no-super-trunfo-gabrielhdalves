#include <stdio.h>  //Imprimo a biblioteca para usar entrada e saída de dados

int main() {  //Função principal. onde o código começa a executar
    char nome[50]; // Variável que recebe o nome da cidade com array [50] para suportar nomes maiores
    double populacao; //Variável que recebe a população
    double area; //Variável que recebe a área
    double pib; //Variável que recebe o PIB
    int pontos_turisticos; //Variável que recebe a quantidade de pontos turísticos

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nome); // %[^\n] para ao digitar o nome da cidade não ser sensíveis a espaço

    printf("Digite a população da cidade:\n");
    scanf("%lf", &populacao); 

    printf("Digite a área da cidade em km²:\n");
    scanf("%lf", &area); 

    printf("Digite o PIB da cidade:\n");
    scanf("%lf", &pib); 

    printf("Digite quantos pontos turísticos há na cidade:\n");
    scanf("%d", &pontos_turisticos); 

    printf("\n--- Dados da Cidade ---\n");
    printf("Nome: %s\n", nome);
    printf("População: %.2lf\n", populacao);
    printf("Área: %.2lf km²\n", area);
    printf("PIB: %.2lf\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0; //Indica que o programa finalizou com sucesso
}
