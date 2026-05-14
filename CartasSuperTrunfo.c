#include <stdio.h>

// Desafio Super Trunfo - Países (corrigido para C)
// Requisito: escolher 2 atributos distintos; somar os valores dos atributos;
// verificar empate; impedir escolha repetida (menu dinâmico para o 2º atributo).

float getValue(int attr, int pop, float area, float pib, int pont, float dens, float pibper, float superp) {
    switch (attr) {
        case 1: return (float) pop;               // População
        case 2: return area;                      // Área
        case 3: return pib;                       // PIB
        case 4: return (float) pont;              // Pontos turísticos
        case 5: return (dens > 0.0f) ? (1.0f / dens) : 0.0f; // Densidade inversa (maior é melhor)
        case 6: return pibper;                    // PIB per capita
        case 7: return superp;                    // Super poder
        default: return 0.0f;
    }
}

int main() {
    // Variáveis das cartas (tamanhos seguros para strings)
    char estado1[3];
    char codigo1[3];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int ponTur1;

    char estado2[3];
    char codigo2[3];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int ponTur2;

    // Entrada de dados - carta 1
    printf("Olá tudo bem? vamos começar a cadastrar suas cartas...\n");
    printf("Vou começar perguntando sobre as informações da primeira carta:\n");
    printf("qual o estado da sua carta (pode ser usado apenas letras de 'A' a 'H')?\n");
    scanf("%2s", estado1);
    printf("Agora escolha um codigo para sua carta? (pode ser usado apenas os numero de 1 a 4 )\n");
    scanf("%2s", codigo1);
    printf("e qual o nome do seu estado?\n");
    scanf("%49s", nome1);
    printf("E qual a população dessa cidade (Arredonde para numero inteiro)?\n");
    scanf("%d", &populacao1);
    printf("pode me dizar qual a area total em metros quadrados desse estado (escreva só o numero, sem unidade de medida)?\n");
    scanf("%f", &area1);
    printf("e qual o PIB desse estado (informe sem sinais de moeda)?\n");
    scanf("%f", &pib1);
    printf("Só para finalizar, quantos pontos turisticos tem esse estado?\n");
    scanf("%d", &ponTur1);

    // Cálculos auxiliares carta 1
    float Densidade1 = (area1 > 0.0f) ? ((float)populacao1 / area1) : 0.0f;
    float pibper1 = (populacao1 > 0) ? (pib1 / (float)populacao1) : 0.0f;
    float superpoder1 = (float)populacao1 + area1 + pib1 + (float)ponTur1 + pibper1 - Densidade1;

    // Entrada de dados - carta 2
    printf("\nAgora vamos cadastrar a sua proxima carta:\n");
    printf("qual o estado da sua carta (pode ser usado apenas letras de 'A' a 'H')?\n");
    scanf("%2s", estado2);
    printf("Agora escolha um codigo para sua carta? (pode ser usado apenas os numero de 1 a 4 )\n");
    scanf("%2s", codigo2);
    printf("e qual o nome do seu estado?\n");
    scanf("%49s", nome2);
    printf("E qual a população dessa cidade (Arredonde para numero inteiro)?\n");
    scanf("%d", &populacao2);
    printf("pode me dizar qual a area total em metros quadrados desse estado (escreva só o numero, sem unidade de medida)?\n");
    scanf("%f", &area2);
    printf("e qual o PIB desse estado (informe sem sinais de moeda)?\n");
    scanf("%f", &pib2);
    printf("Só para finalizar, quantos pontos turisticos tem esse estado?\n");
    scanf("%d", &ponTur2);

    // Cálculos auxiliares carta 2
    float Densidade2 = (area2 > 0.0f) ? ((float)populacao2 / area2) : 0.0f;
    float pibper2 = (populacao2 > 0) ? (pib2 / (float)populacao2) : 0.0f;
    float superpoder2 = (float)populacao2 + area2 + pib2 + (float)ponTur2 + pibper2 - Densidade2;

    // Menu de atributos
    printf("\nParabens, suas cartas foram criadas.\n");
    printf("Agora escolha dois atributos para comparar (será somada a pontuação dos dois):\n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. Pib\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade populacional (quanto menor a densidade, melhor; será usado o inverso)\n");
    printf("6. Pib percapita\n");
    printf("7. Super poder\n");

    int attr1 = 0, attr2 = 0;

    // Ler primeira escolha com validação
    do {
        printf("Escolha o primeiro atributo (1-7): ");
        if (scanf("%d", &attr1) != 1) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}
            attr1 = 0;
        }
    } while (attr1 < 1 || attr1 > 7);

    // Mostrar menu dinâmico para o segundo atributo (sem repetir o primeiro)
    printf("\nAgora escolha o segundo atributo (não pode ser o mesmo que o primeiro):\n");
    for (int i = 1; i <= 7; ++i) {
        if (i == attr1) continue;
        switch (i) {
            case 1: printf("1. População\n"); break;
            case 2: printf("2. Area\n"); break;
            case 3: printf("3. Pib\n"); break;
            case 4: printf("4. Pontos turisticos\n"); break;
            case 5: printf("5. Densidade populacional (inverso)\n"); break;
            case 6: printf("6. Pib percapita\n"); break;
            case 7: printf("7. Super poder\n"); break;
        }
    }

    // Ler segunda escolha com validação (não pode ser igual ao primeiro)
    do {
        printf("Escolha o segundo atributo (1-7, diferente de %d): ", attr1);
        if (scanf("%d", &attr2) != 1) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}
            attr2 = 0;
        }
    } while (attr2 < 1 || attr2 > 7 || attr2 == attr1);

    // Calcular valores escolhidos para cada carta e somar
    float val1_attr1 = getValue(attr1, populacao1, area1, pib1, ponTur1, Densidade1, pibper1, superpoder1);
    float val1_attr2 = getValue(attr2, populacao1, area1, pib1, ponTur1, Densidade1, pibper1, superpoder1);
    float somaCarta1 = val1_attr1 + val1_attr2;

    float val2_attr1 = getValue(attr1, populacao2, area2, pib2, ponTur2, Densidade2, pibper2, superpoder2);
    float val2_attr2 = getValue(attr2, populacao2, area2, pib2, ponTur2, Densidade2, pibper2, superpoder2);
    float somaCarta2 = val2_attr1 + val2_attr2;

    // Exibir resumo das cartas e dos atributos escolhidos
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\nCodigo: %s0%s\nNome: %s\nPopulação: %d\nArea em m²: %.2f\nPib: R$%.2f\nPontos turisticos: %d\nDensidade: %.6f\nPib per capita: %.6f\nSuper poder: %.6f\n",
           estado1, estado1, codigo1, nome1, populacao1, area1, pib1, ponTur1, Densidade1, pibper1, superpoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\nCodigo: %s0%s\nNome: %s\nPopulação: %d\nArea em m²: %.2f\nPib: R$%.2f\nPontos turisticos: %d\nDensidade: %.6f\nPib per capita: %.6f\nSuper poder: %.6f\n",
           estado2, estado2, codigo2, nome2, populacao2, area2, pib2, ponTur2, Densidade2, pibper2, superpoder2);

    // Mostrar os valores usados na soma e o resultado final
    printf("\nAtributo %d (valor Carta1: %.6f, Carta2: %.6f)\n", attr1, val1_attr1, val2_attr1);
    printf("Atributo %d (valor Carta1: %.6f, Carta2: %.6f)\n", attr2, val1_attr2, val2_attr2);
    printf("\nSoma Carta1: %.6f\nSoma Carta2: %.6f\n", somaCarta1, somaCarta2);

    // Determinar vencedor ou empate
    if (somaCarta1 > somaCarta2) {
        printf("\nA carta vencedora foi: %s\n", nome1);
    } else if (somaCarta2 > somaCarta1) {
        printf("\nA carta vencedora foi: %s\n", nome2);
    } else {
        printf("\nResultado: empate\n");
    }

    printf("\nRodada concluida com sucesso!! Para jogar novamente, é só rodar o codigo mais uma vez, Obrigado por jogar!\n\n");

    return 0;
}