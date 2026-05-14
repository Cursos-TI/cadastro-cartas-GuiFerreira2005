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
    int RespostaComparacao;

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

    //super poder: soma da população; área; PIB; numero de pontos turistico; PIB percapita; INVERSO da densidade populacional - FLOAT
    float superpoder1 = (float) populacao1 + (float) area1 + (float) pib1 + (float) ponTur1 + (float) pibper1 - (float) Densidade1;
    float superpoder2 = (float) populacao2 + (float) area2 + (float) pib2 + (float) ponTur2 + (float) pibper2 - (float) Densidade2;
   
    // Área para exibição dos dados da cidade
    printf("Parabens, suas cartas foram criadas, agora escolha qual atributo voce irá comparar:\n");

    printf("1.População \n2.Area \n3.Pib \n4.Pontos turisticos \n5.Densidade populacional \n6.Pib percapto \n7.Super poder \n");

    scanf("%d", &RespostaComparacao);
    printf("A opção escolhida foi: %d", RespostaComparacao);
    //Carta 1:
    printf("\nCarta1:\n Estado: %s\n Codigo: %s0%s\n Nome: %s\n População: %d\n Area em m²: %.2fm²\n Pib: R$%.2f\n Pontos turisticos: %d\n Densidade populacional: %.2f\n Pib per capita: %.2f\n Super poder: %.2f", estado1, estado1, codigo1, nome1, populacao1, area1, pib1, ponTur1, Densidade1, pibper1, superpoder1);

    //Carta 2:
    printf("\n\nCarta2:\n Estado: %s\n Codigo: %s0%s\n Nome: %s\n População: %d\n Area em m²: %.2fm²\n Pib: R$%.2f\n Pontos turisticos: %d\n Densidade populacional: %.2f\n Pib per capita: %.2f\n Super poder: %.2f", estado2, estado2, codigo2, nome2, populacao2, area2, pib2, ponTur2, Densidade2, pibper2, superpoder2);

    //Comparação de cartas:
    printf("\n\nAgora vamos descobrir qual carta ganhou: \n");
    
    //Comparação das cartas referente ao super poder de cartas
    switch (RespostaComparacao)
    {
    case 1:
      if (populacao1 > populacao2)
      {
        printf("A carta %9s foi a vencedora!", nome1);
      } else {
        printf("A carta %9s foi a vencedora!", nome2);
      }
    break;

    case 2:
      if (area1 > area2)
      {
        printf("A carta %9s foi a vencedora!", nome1);
      } else {
        printf("A carta %9s foi a vencedora!", nome2);
      }
    break;

    case 3:
      if (pib1 > pib2)
      {
        printf("A carta %9s foi a vencedora!", nome1);
      } else {
        printf("A carta %9s foi a vencedora!", nome2);
      }
    break;

    case 4:
      if (ponTur1 > ponTur2)
      {
        printf("A carta %9s foi a vencedora!", nome1);
      } else {
        printf("A carta %9s foi a vencedora!", nome2);
      }
    break;
               
    case 5:
      if (Densidade1 > Densidade2)
      {
        printf("A carta %9s foi a vencedora!", nome1);
      } else {
        printf("A carta %9s foi a vencedora!", nome2);
      }
    break;

    case 6:
      if (pibper1 > pibper2)
      {
        printf("A carta %9s foi a vencedora!", nome1);
      } else {
        printf("A carta %9s foi a vencedora!", nome2);
      }
    break;

    case 7:
      if (superpoder1 > superpoder2)
      {
        printf("A carta %9s foi a vencedora!", nome1);
      } else {
        printf("A carta %9s foi a vencedora!", nome2);
      }
    
      break;
    
    default:
      printf("Opção invalida");
      break;
    }

    //Finalização
    printf("\nRodada concluida com sucesso!! Para jogar novamente, é só rodar o codigo mais uma vez, Obrigado por jogar!\n\n");

return 0;
} 