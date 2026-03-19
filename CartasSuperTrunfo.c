#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    //variaveis da carta 1:
    char estado1[2];
    char codigo1[2];
    char nome1[10];
    int populacao1;
    float area1;
    float pib1;
    int ponTur1;
    
    //variaveis da carta 2:
    char estado2[2];
    char codigo2[2];
    char nome2[10];
    int populacao2;
    float area2;
    float pib2;
    int ponTur2;
    
  // Área para entrada de dados
    //Info's da carta 1
    printf("Olá tudo bem? vamos começar a cadastrar suas cartas... \nVou começar perguntando sobre as informações da primeira carta:\n");
    printf("qual o estado da sua carta (pode ser usado apenas letras de 'A' a 'H')?\n");
    scanf("%s", &estado1);
    printf("Agora escolha um codigo para sua carta? (pode ser usado apenas os numero de 1 a 4 )\n");
    scanf("%s", &codigo1);
    printf("e qual o nome do seu estado?\n");
    scanf("%s", &nome1);
    printf("E qual a população dessa cidade (Arredonde para numero inteiro)?\n");
    scanf("%d", &populacao1);
    printf("pode me dizar qual a area total em metros quadrados desse estado (escreva só o numero, sem unidade de medida)?\n");
    scanf("%f", &area1);
    printf("e qual o PIB desse estado (informe sem sinais de moeda)?\n");
    scanf("%f", &pib1);
    printf("Só para finalizar, quantos pontos turisticos tem esse estado?\n");
    scanf("%d", &ponTur1);
    
    float Densidade1 = (float) populacao1/area1;
    float pibper1 = (float) pib1/populacao1;

    printf("Agora vamos cadastrar a sua proxima carta:\n");

    //Info's da carta 2
    printf("qual o estado da sua carta (pode ser usado apenas letras de 'A' a 'H')?\n");
    scanf("%s", &estado2);
    printf("Agora escolha um codigo para sua carta? (pode ser usado apenas os numero de 1 a 4 )\n");
    scanf("%s", &codigo2);
    printf("e qual o nome do seu estado?\n");
    scanf("%s", &nome2);
    printf("E qual a população dessa cidade (Arredonde para numero inteiro)?\n");
    scanf("%d", &populacao2);
    printf("pode me dizar qual a area total em metros quadrados desse estado (escreva só o numero, sem unidade de medida)?\n");
    scanf("%f", &area2);
    printf("e qual o PIB desse estado (informe sem sinais de moeda)?\n");
    scanf("%f", &pib2);
    printf("Só para finalizar, quantos pontos turisticos tem esse estado?\n");
    scanf("%d", &ponTur2);
    float Densidade2 = (float) populacao2/area2;
    float pibper2 = (float) pib2/populacao2;

  // Área para exibição dos dados da cidade
    printf("Parabens, suas cartas foram criadas, fique agora com o resultado final:\n");

    //Carta 1:
    printf("Carta1:\n Estado: %s\n Codigo: %s0%s\n Nome: %s\n População: %d\n Area em m²: %.2fm²\n Pib: R$%.2f\n Pontos turisticos: %d\n Densidade populacional: %.2f\n Pib per capita: %.2f\n\n", estado1, estado1, codigo1, nome1, populacao1, area1, pib1, ponTur1, Densidade1, pibper1);

    //Carta 2:
    printf("Carta2:\n Estado: %s\n Codigo: %s0%s\n Nome: %s\n População: %d\n Area em m²: %.2fm²\n Pib: R$%.2f\n Pontos turisticos: %d\n Densidade populacional: %.2f\n Pib per capita: %.2f\n", estado2, estado2, codigo2, nome2, populacao2, area2, pib2, ponTur2, Densidade2, pibper2);

return 0;
} 