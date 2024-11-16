#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: , nome, , área,

//primeira carta 

     int codigo_da_cidade;
     int populacao;
     float PIB;
     int area;
     int numero_de_pontos_turisticos;
     char nome[50];

//Segunda carta

     int codigo_da_cidade2;
     int populacao2;
     float PIB2;
     int area2;
     int numero_de_pontos_turisticos2;
     char nome2[50];

//Terceira carta

     int codigo_da_cidade3;
     int populacao3;
     float PIB3;
     int area3;
     int numero_de_pontos_turisticos3;
     char nome3[50];

    // Cadastro
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.ro das Cartas:
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

// Primeira carta

    printf("Nome da Cidade: \n");
    scanf("%s", &nome);

    printf("Codigo da Cidade: \n");
    scanf("%d", &codigo_da_cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Area da cidade: \n");
    scanf("%d", &area);

    printf("PIB:$ \n");
    scanf("%f", &PIB);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);
 
    printf("\n");

//Segunda carta 

    printf("Nome da Cidade: \n");
    scanf("%s", &nome2);

    printf("Codigo da Cidade: \n");
    scanf("%d", &codigo_da_cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Area da cidade: \n");
    scanf("%d", &area2);

    printf("PIB:$ \n");
    scanf("%f", &PIB2);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    printf("\n");

//Terceira carta

    printf("Nome da Cidade: \n");
    scanf("%s", &nome3);

    printf("Codigo da Cidade: \n");
    scanf("%d", &codigo_da_cidade3);

    printf("População: \n");
    scanf("%d", &populacao3);

    printf("Area da cidade: \n");
    scanf("%d", &area3);

    printf("PIB:$ \n");
    scanf("%f", &PIB3);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos3);

    printf("\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

//Primeira carta

    printf("Nome da Cidade: %s\n", nome);
    printf("Codigo da Cidade: %d\n",codigo_da_cidade);
    printf("População: %d\n",populacao);
    printf("Área: %d\n",area);
    printf("PIB: $%.3f\n",PIB);
    printf("Numero de pontos turisticos: %d\n",numero_de_pontos_turisticos);
    printf("\n");

//segunda carta 

    printf("Nome da Cidade: %s\n", nome2);
    printf("Codigo da Cidade: %d\n",codigo_da_cidade2);
    printf("População: %d\n",populacao2);
     printf("Área: %d\n",area2);
    printf("PIB: $%.3f\n",PIB2);
    printf("Numero de pontos turisticos: %d\n",numero_de_pontos_turisticos2);
    printf("\n");
 
 //Terceira carta

    printf("Nome da Cidade: %s\n", nome3);
    printf("Codigo da Cidade: %d\n",codigo_da_cidade3);
    printf("População: %d\n",populacao3);
     printf("Área: %d\n",area3);
    printf("PIB: $%.3f\n",PIB3);
    printf("Numero de pontos turisticos: %d\n",numero_de_pontos_turisticos3);
    printf("\n");

    return 0;
}
