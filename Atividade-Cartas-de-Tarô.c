#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    printf("Olá pessoa que eu não conheço, se você está aqui então você quer criar algumas cartas de super trunfo de países");
    printf("\ncerto?");

    int escolha;

    printf("\n\n1 - Para sim\n2 - Para não\n\n");
    printf("Digite: ");
    scanf("%d", &escolha);

    if (escolha == 2){
        printf("Ah, tudo bem então.....adeus....usuário");
    }

    char sigla1;
    int codigo1;
    char codigoDeCarta1[4];
    char cidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int ponto1;

    printf("\nAeeeeee, então vamos lá\n\n");
    printf("Primeiro, você vai escolher a sigla de uma cidade (A até H)\n\n");
    printf("Digite: ");
    scanf(" %c", &sigla1);

    sigla1 = toupper(sigla1);

    while (sigla1 < 'A' || sigla1 > 'H'){
        printf("\nApenas de A até H\n\n");
        printf("Digite: ");
        scanf(" %c", &sigla1);
    }

    codigo1 = (rand() % 4) + 1;
    snprintf(codigoDeCarta1, sizeof(codigoDeCarta1), "%c%02d", sigla1, codigo1);

    printf("\nAgora diga o nome da cidade\n\n");
    printf("Digite: ");
    scanf(" %99[^\n]", cidade1);

    printf("\nAgora diga o numero de habitantes da cidade\n\n");
    printf("Digite: ");
    scanf("%d", &populacao1);

    printf("\nAgora diga o numero da área em km²\n\n");
    printf("Digite: ");
    scanf("%f", &area1);

    printf("\nAgora diga o PIB da sua cidade\n\n");
    printf("Digite: ");
    scanf("%f", &pib1);

    printf("\nE por último diga o numero de pontos turísticos da sua cidade\n\n");
    printf("Digite: ");
    scanf("%d", &ponto1);

    int escolha2;
    printf("\nParabéns, você fez a sua carta, deseja criar mais uma ou ver como ficou?\n");
    printf("1 - Ver carta e sair\n2 - Fazer outra carta\n\n");
    printf("Digite: ");
    scanf("%d", &escolha2);

    if (escolha2 == 2){
    char sigla2;
    int codigo2;
    char codigoDeCarta2[4];
    char cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int ponto2;

    printf("\nCriando a segunda carta...\n\n");

    printf("Primeiro, você vai escolher a sigla de uma cidade (A até H)\n\n");
    printf("Digite: ");
    scanf(" %c", &sigla2);

    sigla2 = toupper(sigla2);

    while (sigla2 < 'A' || sigla2 > 'H'){
        printf("\nApenas de A até H\n\n");
        printf("Digite: ");
        scanf(" %c", &sigla2);
    }

    codigo2 = (rand() % 4) + 1;
    snprintf(codigoDeCarta2, sizeof(codigoDeCarta2), "%c%02d", sigla2, codigo2);

    printf("\nAgora diga o nome da cidade\n\n");
    printf("Digite: ");
    scanf(" %99[^\n]", cidade2);

    printf("\nAgora diga o numero de habitantes da cidade \n\n");
    printf("Digite: ");
    scanf("%d", &populacao2);

    printf("\nAgora diga o numero da área em km² \n\n");
    printf("Digite: ");
    scanf("%f", &area2);

    printf("\nAgora diga o PIB da sua cidade \n\n");
    printf("Digite: ");
    scanf("%f", &pib2);

    printf("\nE por último diga o numero de pontos turísticos da sua cidade \n\n");
    printf("Digite: ");
    scanf("%d", &ponto2);

    printf("\n===== 1 CARTA =====\n");
    printf("Estado: %c\n", sigla1);
    printf("Codigo: %s\n", codigoDeCarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", ponto1);

    printf("\n===== 2 CARTA =====\n");
    printf("Estado: %c\n", sigla2);
    printf("Codigo: %s\n", codigoDeCarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", ponto2);

    }

    if (escolha2 == 1){
        printf("\n===== 1 CARTA =====\n");
        printf("Estado: %c\n", sigla1);
        printf("Codigo: %s\n", codigoDeCarta1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Pontos turísticos: %d\n", ponto1);
    }

    return 0;
}
