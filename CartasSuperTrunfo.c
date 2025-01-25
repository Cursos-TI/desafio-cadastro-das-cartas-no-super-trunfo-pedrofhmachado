#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    int populacao, codigoCidade, numeropontosturisticos;
    char nome[20];
    float area, pib;

    printf("Digite código: \n");
    scanf("%d", &codigoCidade);
    printf("Digite o Nome: \n");
    scanf(" %s", &nome);
    printf("Digite a População: \n");
    scanf("%d", &populacao);
    printf("Digite a área: \n");
    scanf("%f", &area);
    printf("Digite o Numero de pontos turisticos: \n");
    scanf("%d", &numeropontosturisticos);
    printf("Digite o Pib: \n");
    scanf("%f", &pib);
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Informações Código: %d, Nome: %s, População: %d, Área: %f, Numero de pontos turisticos: %d e o Pib: %f\n",codigoCidade,nome,populacao,area,numeropontosturisticos,pib);
    return 0;
}
