#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    int populacao, populacao2, codigoCidade, codigoCidade2, numeropontosturisticos;
    int numeropontosturisticos2;
    char nome[20], nome2[20];
    float area, pib, pibp, densidadePopulacional;
    float area2, pib2, pibp2, densidadePopulacional2;
    int superP;
    int superP2;

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

    printf("Digite código 2: \n");
    scanf("%d", &codigoCidade2);
    printf("Digite o Nome 2: \n");
    scanf(" %s", &nome2);
    printf("Digite a População 2: \n");
    scanf("%d", &populacao2);
    printf("Digite a área 2: \n");
    scanf("%f", &area2);
    printf("Digite o Numero de pontos turisticos 2: \n");
    scanf("%d", &numeropontosturisticos2);
    printf("Digite o Pib 2: \n");
    scanf("%f", &pib2);


    densidadePopulacional = populacao / area;
    pibp = pib / populacao;

    densidadePopulacional2 = populacao2 / area2;
    pibp2 = pib2 / populacao2;

    superP = populacao + numeropontosturisticos + area + pib + pibp;
    superP2 = populacao2 + numeropontosturisticos2 + area2 + pib2 + pibp2;
 
    
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
    printf("Pib Per capita: %f \n \n", pibp);


    printf("Informações Código 2: %d \n", codigoCidade2);
    printf("Nome 2: %s \n", nome2);
    printf("População 2: %d \n", populacao2);
    printf("Área 2: %f\n", area2);
    printf("Numero de pontos turisticos 2: %d \n", numeropontosturisticos2);
    printf("Pib 2: %f \n", pib2);
    printf("Densidade Populacional 2: %f \n", densidadePopulacional2);
    printf("Pib Per capita 2: %f \n", pibp2);

    if(superP > superP2){
        printf("a carta %s codigo: %d e a vencedora \n", nome, codigoCidade);
    }else{
        printf("a carta %s codigo: %d e a vencedora\n", nome2, codigoCidade2);
    }

    return 0;
}
