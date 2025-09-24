#include <stdio.h>

int main(){
    char estado1, estado2;
    char codigo1[4], codigo2[4]; // colocar um char a mais para buffer
    char nome1[60], nome2[60]; 
    int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int tur1, tur2;

    float densidade_pop1, densidade_pop2;
    float pib_per_capita1, pib_per_capita2;

        // Le as informações da primeira carta
    printf("Insira as informações da primeira carta:\n");
    //Le o estado
    printf("Estado: ");
    scanf(" %c", &estado1);
    fflush(stdout);

    //Le o codigo
    printf("Codigo: ");
    scanf("%s", codigo1);
    fflush(stdout);

    //Le o nome
    printf("Nome: ");
    scanf(" %[^\n]", nome1);
    fflush(stdout);

    //Le a populacao
    printf("População: ");
    scanf("%d", &pop1);
    //Le a Area
    printf("Area: ");
    scanf("%f", &area1);
    //Le o PIB
    printf("PIB: ");
    scanf("%f", &pib1);
    //Le a quantidade de pontos turisticos
    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &tur1);

    // Le as informações da segunda carta
    printf("Insira as informações da segunda carta:\n");
    //Le o estado
    printf("Estado: ");
    scanf(" %c", &estado2);
    fflush(stdout);

    //Le o codigo
    printf("Codigo: ");
    scanf("%s", codigo2);
    fflush(stdout);

    //Le o nome
    printf("Nome: ");
    scanf(" %[^\n]", nome2);
    fflush(stdout);

    //Le a populacao
    printf("População: ");
    scanf("%d", &pop2);
    //Le a Area
    printf("Area: ");
    scanf("%f", &area2);
    //Le o PIB
    printf("PIB: ");
    scanf("%f", &pib2);
    //Le a quantidade de pontos turisticos
    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &tur2);
    fflush(stdout);

    //Calculo da densidade populacional e pib per capita da carta 1
    densidade_pop1 = pop1/area1;
    pib_per_capita1 = pib1 * 1000000000/ pop1;

    //Calculo da densidade populacional e pib per capita da carta 2
    densidade_pop2 = pop2/area2;
    pib_per_capita2 = pib2 * 1000000000 / pop2;


    //Imprime as informações da primeira carta
    printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km2\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km2\nPIB per Capita: %.2f reais\n", estado1, codigo1, nome1, pop1, area1, pib1, tur1, densidade_pop1, pib_per_capita1);
    fflush(stdout);

    //Imprime as informações da segunda carta
    printf("\nCarta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km2\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km2\nPIB per Capita: %.2f reais\n", estado2, codigo2, nome2, pop2, area2, pib2, tur2, densidade_pop2, pib_per_capita2);
    fflush(stdout);



    return 0;
}