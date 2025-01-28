#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    int populacao, codigoCidade, numeropontosturisticos;
    char nome[20];
    float area, pib, pibp, densidadePopulacional;

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


    densidadePopulacional = populacao / area;
    pibp = pib / populacao;
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Informações Código: %d \n", codigoCidade);
    printf("Nome: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %f\n", area);
    printf("Numero de pontos turisticos: %d \n", numeropontosturisticos);
    printf("Pib: %f \n", pib);
    printf("Densidade Populacional: %f \n", densidadePopulacional);
    printf("Pib Per capita: %f \n", pibp);
    return 0;
}
