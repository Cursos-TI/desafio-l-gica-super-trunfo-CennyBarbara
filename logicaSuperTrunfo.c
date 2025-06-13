#include <stdio.h>

int main () {

    printf("Desafio xadrez!\n");

    char estado1, estado2;
    char codigo[20];
    char Nomedacidade [50];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int numeros;
    float densidade1, densidade2;
    float PIBpc1, PIBpc2;

    printf("Carta 1:\n");
    printf("Estado: ");
    scanf("%s", &estado1);

    printf("Código: \n");
    scanf(" %s", codigo);

    printf("Nome da cidade: \n");
    scanf("%s", &Nomedacidade);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &PIB1);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &numeros);

    densidade1 = (float) populacao1 / area1;
    PIBpc1 = (float) PIB1 / populacao1;

    printf("A densidade populacional é: %.2f\n", densidade1);

    printf("O PIB per capita é: %.2f\n", PIBpc1);

    printf("Carta 2:\n");
    printf("Estado: ");
    scanf("%d", &estado2);

    printf("Código: \n");
    scanf(" %s", codigo);

    printf("Nome da Cidade: \n");
    scanf("%s", &Nomedacidade);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área:  \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Número de pontos turisticos: \n");
    scanf("%d", &numeros);  

    densidade2 = (float) populacao2 / area2;
    PIBpc2 = (float) PIB2 / populacao2;

    printf("A densidade populacional é: %.2f\n", densidade2);
    
    printf("O PIB per capita é: %.2f\n", PIBpc2);

    printf("Comparação de cartas (Atributo: População):\n");

    if (populacao1 > populacao2) {
        printf("A Carta 1 venceu!\n");
    } else {
        printf("A carta 2 venceu!\n");
    }

     printf("Comparação de cartas (Atributo: PIB):\n");

    if (PIB1 > PIB2) {
        printf("A Carta 1 venceu!\n");
    } else {
        printf("A carta 2 venceu!\n");
    }

}
