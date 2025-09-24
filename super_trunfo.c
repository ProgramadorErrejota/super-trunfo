#include <stdio.h>

int main(){
    //Declaração de Variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4]; // um char a mais para buffer
    char nome1[60], nome2[60]; // Maior cidade tem 58 caracteres
    unsigned long int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int tur1, tur2;
    float densidade_pop1, densidade_pop2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    int carta2=0, carta1=0; //pra saber em quantos parametros a carta 2 venceu, para fazer o print final
    int parametro1, parametro2;
    int pulou=0;

        // Le as informações da primeira carta
    printf("Insira as informações da primeira carta:\n");
    //Le o estado
    printf("Estado: ");
    scanf(" %c", &estado1);
    fflush(stdout); // Para evitar bugs com o uso de vários scanf()
    //Le o codigo
    printf("Codigo: ");
    scanf("%s", codigo1);
    fflush(stdout);
    //Le o nome
    printf("Nome: ");
    scanf(" %[^\n]", nome1); // %[ˆ\n] Para evitar bugs com entradas com espaços em branco no meio
    fflush(stdout);
    //Le a populacao
    printf("População: ");
    scanf("%lu", &pop1);
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
    scanf("%lu", &pop2);
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
    pib_per_capita1 = pib1 * 1000000000/ pop1; // da pra usar 1e9?
        //Calculo da densidade populacional e pib per capita da carta 2
    densidade_pop2 = pop2/area2;
    pib_per_capita2 = pib2 * 1000000000 / pop2;

        // Calculo dos Super Poderes
    super_poder1 = (float)pop1 + area1 + pib1 + (float)tur1 + pib_per_capita1 + (1/densidade_pop1); //calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")
    super_poder2 = (float)pop2 + area2 + pib2 + (float)tur2 + pib_per_capita2 + (1/densidade_pop2);


        //Imprime as informações da primeira carta
    printf("\n\nCarta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f km2\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km2\nPIB per Capita: %.2f reais\n", estado1, codigo1, nome1, pop1, area1, pib1, tur1, densidade_pop1, pib_per_capita1);
    fflush(stdout);

        //Imprime as informações da segunda carta
    printf("\nCarta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f km2\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km2\nPIB per Capita: %.2f reais\n", estado2, codigo2, nome2, pop2, area2, pib2, tur2, densidade_pop2, pib_per_capita2);
    fflush(stdout);


        //Comparacao das Cartas
    printf("\n\nComparação de Cartas:\n");
    if(pop1>pop2) printf("População: Carta 1 Venceu (1)\n");
    else{
        printf("População: Carta 2 Venceu (0)\n");
        carta2++;
    } 
    if(area1>area2) printf("Área: Carta 1 Venceu (1)\n");
    else{
        printf("Área: Carta 2 Venceu (0)\n");
        carta2++;
    } 
    if(pib1>pib2) printf("PIB: Carta 1 Venceu (1)\n");
    else{
        printf("PIB: Carta 2 Venceu (0)\n");
        carta2++;
    } 
    if(tur1>tur2) printf("Pontos Turísticos: Carta 1 Venceu (1)\n");
    else{
        printf("Pontos Turísticos: Carta 2 Venceu (0)\n");
        carta2++;
    } 
    if(densidade_pop1<densidade_pop2) printf("Densidade Populacional: Carta 1 Venceu (1)\n");
    else{
        printf("Densidade Populacional: Carta 2 Venceu (0)\n");
        carta2++;
    } 
    if(pib_per_capita1>pib_per_capita2) printf("PIB per Capita: Carta 1 Venceu (1)\n");
    else{
        printf("PIB per Capita: Carta 2 Venceu (0)\n");
        carta2++;
    } 
    if(super_poder1>super_poder2) printf("Super Poder: Carta 1 Venceu (1)\n");
    else{
        printf("Super Poder: Carta 2 Venceu (0)\n");
        carta2++;
    } 

    //     //Imprime qual foi a carta vencedora (a carta que venceu em mais comparações)
    // (carta2>3) ? printf("A carta vencedora foi a Carta 2\n") : printf("A carta vencedora foi a Carta 1\n");

        // Na verdade ele quer que compare um (ou dois) parametros específicos
    printf("Escolha o primeiro parametro a ser comparado (insira o numero da opção):\n\n");
    printf("1. População\n2.Área \n3.PIB \n4.Qtd. Pontos Turisticos \n5. Densidade Populacional\n6. PIB Per Capita\n7. Super Poder\n");
    scanf("%d", &parametro1);

    printf("Escolha o segundo parametro a ser comparado (insira o numero da opção):\n\n");
    printf("1. População\n2.Área \n3.PIB \n4.Qtd. Pontos Turisticos \n5. Densidade Populacional\n6. PIB Per Capita\n7. Super Poder\n");
    scanf("%d", &parametro2);

        //Faz a comparação 
    switch(parametro1){
        break;
    case 1:
            if(pop1>pop2) carta1++;
            break;    
        case 2:
            if(area1>area2) carta1++;
            break;    
        case 3:
            if(pib1>pib2) carta1++;
            break;    
        case 4:
            if(tur1>tur2) carta1++;
            break;    
        case 5:
            if(densidade_pop1<densidade_pop2) carta1++;
            break;    
        case 6:
            if(pib_per_capita1>pib_per_capita2) carta1++;
            break;    
        case 7:
            if(super_poder1>super_poder2) carta1++;
        default:
            printf("Você não inseriu um parametro válido. Comparação pulada:\n\n");
            pulou=1;
            break;
    }

    switch(parametro2){
        break;
    case 1:
            if(pop1>pop2) carta1++;
            break;    
        case 2:
            if(area1>area2) carta1++;
            break;    
        case 3:
            if(pib1>pib2) carta1++;
            break;    
        case 4:
            if(tur1>tur2) carta1++;
            break;    
        case 5:
            if(densidade_pop1<densidade_pop2) carta1++;
            break;    
        case 6:
            if(pib_per_capita1>pib_per_capita2) carta1++;
            break;    
        case 7:
            if(super_poder1>super_poder2) carta1++;
        default:
            printf("Você não inseriu um parametro válido. Comparação pulada:\n\n");
            pulou=1;
            break;
    }

    if(pulou==0){
        if(carta1==0) printf("A Carta 2 venceu!\n");
        if(carta1==1) printf("Empate\n");
        if(carta1==2) printf("A Carta 1 venceu!\n");
    }

    return 0;
}
