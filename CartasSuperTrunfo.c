#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: , nome, , área, , .
     int codigo_da_cidade;
     int populacao;
     float PIB;
     int numero_de_pontos_turisticos;
    char nome[50];

// Cadastro
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.ro das Cartas:
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
// Primeira carta
    printf("Codigo da Cidade: \n");
    scanf("%d", &codigo_da_cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("PIB:$ \n");
    scanf("%f", &PIB);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("Nome da Cidade: \n");
    scanf("%s", &nome);
    printf("\n");

//Segunda carta

    printf("Codigo da Cidade: \n");
    scanf("%d", &codigo_da_cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("PIB:$ \n");
    scanf("%f", &PIB);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("Nome da Cidade: \n");
    scanf("%s", &nome);
    printf("\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
//Primeira carta

    printf("Nome da Cidade: %s\n", nome);
    printf("Codigo da Cidade: %d\n",codigo_da_cidade);
    printf("População: %d\n",populacao);
    printf("PIB: $%.3f\n",PIB);
    printf("Numero de pontos turisticos: %d\n",numero_de_pontos_turisticos);
    printf("\n");

//Segunda carta

    printf("Nome da Cidade: %s\n", nome);
    printf("Codigo da Cidade: %d\n",codigo_da_cidade);
    printf("População: %d\n",populacao);
    printf("PIB: $%.3f\n",PIB);
    printf("Numero de pontos turisticos: %d\n",numero_de_pontos_turisticos);
    printf("\n");

    return 0;
}
