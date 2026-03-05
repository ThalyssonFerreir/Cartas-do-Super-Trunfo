#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    printf("Olá pessoa que eu não conheço, se você está aqui então você quer criar algumas cartas de super trunfo de países");
    printf("\ncerto?");

    int escolha;

    printf("\n\n1 - Para sim\n2 - Para não\n\n");
    printf("Digite: ");
    scanf("%d", &escolha);

    if (escolha == 2){
        printf("Ah, tudo bem então.....adeus....usuário");
        return 0;
    }

    char sigla1;
    int codigo1;
    char codigoDeCarta1[4];
    char cidade1[100];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int ponto1;
    float densidade1;
    float pibcar1;
    float poder1;

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

    densidade1 = populacao1 / area1;

    pibcar1 = pib1 / populacao1;

    poder1 = populacao1 + area1 + pib1 + ponto1 + pibcar1 + (densidade1 - (densidade1 * 2));

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
    unsigned long int populacao2;
    float area2;
    float pib2;
    int ponto2;
    float densidade2;
    float pibcar2;
    float poder2;

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

    densidade2 = populacao2 / area2;

    pibcar2 = pib2 / populacao2;

    poder2 = populacao2 + area2 + pib2 + ponto2 + pibcar2 + (densidade2 - (densidade2 * 2));

    char popu[30];
    char area[30];
    char pib[30];
    char pontos[30];
    char densidade[30];
    char pibcar[30];
    char poder[30];

    if (populacao1 > populacao2){
        strcpy(popu, "Carta 1 venceu! (1)");
    }

    else if (populacao1 == populacao2){
        strcpy(popu, "Empate! (3)");
    }

    else{
        strcpy(popu, "Carta 2 venceu! (0)");
    };

    if (area1 > area2){
         strcpy(area, "Carta 1 venceu! (1)");
    }

    else if (area1 == area2){
        strcpy(area, "Empate! (3)");
    }

    else{
         strcpy(area, "Carta 2 venceu! (0)");
    };

    if (pib1 > pib2){
         strcpy(pib, "Carta 1 venceu! (1)");
    } 

    else if (pib1 == pib2){
        strcpy(pib, "Empate! (3)");
    }

    else{
         strcpy(pib, "Carta 2 venceu! (0)");
    };

    if (ponto1 > ponto2){
         strcpy(pontos, "Carta 1 venceu! (1)");
    }
     
    else if (ponto1 == ponto2){
        strcpy(pontos, "Empate! (3)");
    }

    else{
         strcpy(pontos, "Carta 2 venceu! (0)");
    };

    if (densidade1 > densidade2){
         strcpy(densidade, "Carta 1 venceu! (1)");
    }
     
    else if (densidade1 == densidade2){
        strcpy(densidade, "Empate! (3)");
    }

    else{
         strcpy(densidade, "Carta 2 venceu! (0)");
    };

    if (pibcar1 > pibcar2){
         strcpy(pibcar, "Carta 1 venceu! (1)");
    }
     
    else if (pibcar1 == pibcar2){
        strcpy(pibcar, "Empate! (3)");
    }

    else{
         strcpy(pibcar, "Carta 2 venceu! (0)");
    };

    if (poder1 > poder2){
         strcpy(poder, "Carta 1 venceu! (1)");
    }
     
    else if (poder1 == poder2){
        strcpy(poder, "Empate! (3)");
    }

    else{
         strcpy(poder, "Carta 2 venceu! (0)");
    };

    int poderOuVer;
    printf("\nPerfeito, sua carta está criada, deseja apenas ver as suas cartas ou além disso fazer a comparação de suas duas cartas(exceto Estado, código da carta e nome) para saber qual terá mais pontos ou fazer a comparação de dois atributos aleatório das duas cartas ou a opção de ver suas 2 cartas e fazer a comparação de dois atributos de sua escolha\n");

    printf("\n1 - Ver apenas as duas cartas\n2 - ver as duas cartas e fazer suas comparações\n3 - Ver as duas cartas e comparar atributos aleatórios\n4 - Ver as duas cartas e comparar atributos de sua escolha\n\n");
    printf("Digite: ");
    scanf("%d", &poderOuVer);

        if (poderOuVer == 1){
            printf("\n===== 1 CARTA =====\n");
            printf("Estado: %c\n", sigla1);
            printf("Codigo: %s\n", codigoDeCarta1);
            printf("Cidade: %s\n", cidade1);
            printf("População: %d\n", populacao1);
            printf("Área: %.2f km²\n", area1);
            printf("PIB: %.2f\n", pib1);
            printf("Pontos turísticos: %d\n", ponto1);
            printf("Densidade Populacional: %2.f\n", densidade1);
            printf("PIB per Capita: %2.f\n", pibcar1);
            printf("Super Poder(Soma de todos os dados numéricos): %2.f", poder1);

            printf("\n===== 2 CARTA =====\n");
            printf("Estado: %c\n", sigla2);
            printf("Codigo: %s\n", codigoDeCarta2);
            printf("Cidade: %s\n", cidade2);
            printf("População: %d\n", populacao2);
            printf("Área: %.2f km²\n", area2);
            printf("PIB: %.2f\n", pib2);
            printf("Pontos turísticos: %d\n", ponto2);
            printf("Densidade Populacional: %2.f\n", densidade2);
            printf("PIB per Capita: %2.f\n", pibcar2);
            printf("Super Poder(Soma de todos os dados numéricos): %2.f", poder2);
            }
        
        if (poderOuVer == 2){
            printf("\n===== 1 CARTA =====\n");
            printf("Estado: %c\n", sigla1);
            printf("Codigo: %s\n", codigoDeCarta1);
            printf("Cidade: %s\n", cidade1);
            printf("População: %d\n", populacao1);
            printf("Área: %.2f km²\n", area1);
            printf("PIB: %.2f\n", pib1);
            printf("Pontos turísticos: %d\n", ponto1);
            printf("Densidade Populacional: %2.f\n", densidade1);
            printf("PIB per Capita: %2.f\n", pibcar1);
            printf("Super Poder(Soma de todos os dados numéricos): %2.f", poder1);

            printf("\n===== 2 CARTA =====\n");
            printf("Estado: %c\n", sigla2);
            printf("Codigo: %s\n", codigoDeCarta2);
            printf("Cidade: %s\n", cidade2);
            printf("População: %lu\n", populacao2);
            printf("Área: %.2f km²\n", area2);
            printf("PIB: %.2f\n", pib2);
            printf("Pontos turísticos: %d\n", ponto2);
            printf("Densidade Populacional: %2.f\n", densidade2);
            printf("PIB per Capita: %2.f\n", pibcar2);
            printf("Super Poder(Soma de todos os dados numéricos): %2.f", poder2);

            printf("\n===== COMPARAÇÃO DE CARTAS =====\n");
            printf("População: %s\n", popu);
            printf("Área: %s\n", area);
            printf("PIB: %s\n", pib);
            printf("Pontos Turísticos: %s\n", pontos);
            printf("Densidade Populacional: %s\n", densidade);
            printf("PIB per Capita: %s\n", pibcar);
            printf("Super Poder: %s\n", poder);
            }

        if (poderOuVer == 3){

            printf("\n===== 1 CARTA =====\n");
            printf("Estado: %c\n", sigla1);
            printf("Codigo: %s\n", codigoDeCarta1);
            printf("Cidade: %s\n", cidade1);
            printf("População: %d\n", populacao1);
            printf("Área: %.2f km²\n", area1);
            printf("PIB: %.2f\n", pib1);
            printf("Pontos turísticos: %d\n", ponto1);
            printf("Densidade Populacional: %2.f\n", densidade1);
            printf("PIB per Capita: %2.f\n", pibcar1);
            printf("Super Poder(Soma de todos os dados numéricos): %2.f", poder1);

            printf("\n===== 2 CARTA =====\n");
            printf("Estado: %c\n", sigla2);
            printf("Codigo: %s\n", codigoDeCarta2);
            printf("Cidade: %s\n", cidade2);
            printf("População: %d\n", populacao2);
            printf("Área: %.2f km²\n", area2);
            printf("PIB: %.2f\n", pib2);
            printf("Pontos turísticos: %d\n", ponto2);
            printf("Densidade Populacional: %2.f\n", densidade2);
            printf("PIB per Capita: %2.f\n", pibcar2);
            printf("Super Poder(Soma de todos os dados numéricos): %2.f", poder2,"\n\n");

            int aleatorio;
            aleatorio = (rand() % 5) + 1;

            printf("\n===== COMPARAÇÃO ALEATÓRIA =====\n");

            if (aleatorio == 1){
                printf("\nComparação de cartas (Atributo: População)\n\n");

                printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
                printf("Carta 2 - %s: %lu\n\n", cidade2, populacao2);

                if (populacao1 > populacao2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                }
                else if (populacao1 < populacao2){
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                }
                else{
                    printf("Resultado: Empate!\n");
                }
            }

            if (aleatorio == 2){
                printf("\nComparação de cartas (Atributo: Área)\n\n");

                printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
                printf("Carta 2 - %s: %.2f km²\n\n", cidade2, area2);

                if (area1 > area2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                }
                else if (area1 < area2){
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                }
                else{
                    printf("Resultado: Empate!\n");
                }
            }

            if (aleatorio == 3){
                printf("\nComparação de cartas (Atributo: PIB)\n\n");

                printf("Carta 1 - %s: %.2f\n", cidade1, pib1);
                printf("Carta 2 - %s: %.2f\n\n", cidade2, pib2);

                if (pib1 > pib2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                }
                else if (pib1 < pib2){
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                }
                else{
                    printf("Resultado: Empate!\n");
                }
            }

            if (aleatorio == 4){
                printf("\nComparação de cartas (Atributo: Densidade Populacional)\n\n");

                printf("Carta 1 - %s: %.2f\n", cidade1, densidade1);
                printf("Carta 2 - %s: %.2f\n\n", cidade2, densidade2);

                if (densidade1 < densidade2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                }
                else if (densidade1 > densidade2){
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                }
                else{
                    printf("Resultado: Empate!\n");
                }
            }

            if (aleatorio == 5){
                printf("\nComparação de cartas (Atributo: PIB per Capita)\n\n");

                printf("Carta 1 - %s: %.2f\n", cidade1, pibcar1);
                printf("Carta 2 - %s: %.2f\n\n", cidade2, pibcar2);

                if (pibcar1 > pibcar2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                }
                else if (pibcar1 < pibcar2){
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                }
                else{
                    printf("Resultado: Empate!\n");
                }
            }
        }

        if (poderOuVer == 4){
            int escolherComparacao1;
            float inforCarta1;
            char guardarAtributo1[50];

            printf("\n===== 1 CARTA =====\n");
            printf("Estado: %c\n", sigla1);
            printf("Codigo: %s\n", codigoDeCarta1);
            printf("Cidade: %s\n", cidade1);
            printf("População: %d\n", populacao1);
            printf("Área: %.2f km²\n", area1);
            printf("PIB: %.2f\n", pib1);
            printf("Pontos turísticos: %d\n", ponto1);
            printf("Densidade Populacional: %2.f\n", densidade1);
            printf("PIB per Capita: %2.f\n", pibcar1);
            printf("Super Poder(Soma de todos os dados numéricos): %2.f", poder1);

            printf("\n\n===== PAINEL DE ATRIBUTOS =====\n");
            printf("1 - Para comparar populacao da carta 1\n2 - Para comparar Area da carta 1\n3 - Para comparar PIB da carta 1\n");
            printf("4 - Para comparar numero de pontos turisticos da carta 1\n5 - Para comparar densidade demografica 1\n\n");

            printf("Digite: ");
            scanf(" %d", &escolherComparacao1);

            switch (escolherComparacao1)
            {
            case 1:
                inforCarta1 = populacao1;
                strcpy(guardarAtributo1, "populacao");
                break;
            
            case 2:
                inforCarta1 = area1;
                strcpy(guardarAtributo1, "area");
                break;

            case 3:
                inforCarta1 = pib1;
                strcpy(guardarAtributo1, "PIB");
                break;

            case 4:
                inforCarta1 = ponto1;
                strcpy(guardarAtributo1, "numero de pontos turisticos");
                break;

            case 5:
                inforCarta1 = densidade1;
                strcpy(guardarAtributo1, "Densidade Demografica");
                break;

            default:
                printf("Numero invalido");
            }

            int escolherComparacao2;
            float inforCarta2;
            char guardarAtributo2[50];

            printf("\n===== 2 CARTA =====\n");
            printf("Estado: %c\n", sigla2);
            printf("Codigo: %s\n", codigoDeCarta2);
            printf("Cidade: %s\n", cidade2);
            printf("População: %d\n", populacao2);
            printf("Área: %.2f km²\n", area2);
            printf("PIB: %.2f\n", pib2);
            printf("Pontos turísticos: %d\n", ponto2);
            printf("Densidade Populacional: %2.f\n", densidade2);
            printf("PIB per Capita: %2.f\n", pibcar2);
            printf("Super Poder(Soma de todos os dados numéricos): %2.f", poder2);
            
            printf("\n\n===== PAINEL DE ATRIBUTOS =====\n");
            printf("1 - Para comparar populacao da carta 2\n2 - Para comparar Area da carta 2\n3 - Para comparar PIB da carta 2\n");
            printf("4 - Para comparar numero de pontos turisticos da carta 2\n5 - Para comparar densidade demografica 2(quanto menor o valor mais pontos da)\n\n");

            printf("Digite: ");
            scanf(" %d", &escolherComparacao2);

            switch (escolherComparacao2)
            {
            case 1:
                inforCarta2 = populacao2;
                strcpy(guardarAtributo2, "Populacao");
                break;
            
            case 2:
                inforCarta2 = area2;
                strcpy(guardarAtributo2, "Area");
                break;

            case 3:
                inforCarta2 = pib2;
                strcpy(guardarAtributo2, "PIB");
                break;

            case 4:
                inforCarta2 = ponto2;
                strcpy(guardarAtributo2, "Numero de Pontos Turisticos");
                break;

            case 5:
                inforCarta2 = densidade2;
                strcpy(guardarAtributo2, "Densidade Demografica");
                break;

            default:
                printf("Numero invalido");
            }

            printf("\nCarta 1: %s\n", cidade1);
            printf("Carta 2: %s\n\n", cidade2);
            printf("Atributo usado carta 1: %s\n", guardarAtributo1);
            printf("Atributo usado carta 2: %s\n\n", guardarAtributo2);
            printf("Valor da Carta 1: %.2f\n", inforCarta1);
            printf("Valor da Carta 2: %.2f", inforCarta2);

            printf("\n\n===== RESULTADO =====\n");

            int usarRegraDensidade = 0;
            if (strcmp(guardarAtributo1, "Densidade Demografica") == 0 || strcmp(guardarAtributo2, "Densidade Demografica") == 0) {
                usarRegraDensidade = 1;
            }

            if (usarRegraDensidade) {
                if (inforCarta1 < inforCarta2) {
                    printf("Carta 1 (%s) venceu!\n", cidade1);
                }
                else if (inforCarta2 < inforCarta1) {
                    printf("Carta 2 (%s) venceu!\n", cidade2);
                }
                else {
                    printf("Empate!\n");
                }
            }
            else {
                if (inforCarta1 > inforCarta2) {
                    printf("Carta 1 (%s) venceu!\n", cidade1);
                }
                else if (inforCarta2 > inforCarta1) {
                    printf("Carta 2 (%s) venceu!\n", cidade2);
                }
                else {
                    printf("Empate!\n");
                }
            }
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
        printf("Densidade Populacional: %2.f\n", densidade1);
        printf("PIB per Capita: %2.f\n", pibcar1);
        printf("Super Poder(Soma de todos os dados numéricos): %2.f", poder1);
    }

    return 0;
    }
}