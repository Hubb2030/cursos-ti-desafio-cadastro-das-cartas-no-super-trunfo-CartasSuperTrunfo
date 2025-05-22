#include <stdio.h>

int main(){
    //carta 1
    char carta1;
    char estado1 [20];
    char codigo1[30];
    char cidade1[60];
    int populacao1;
    float area1;
    float PIB1; // bilhóes
    int pontosturistico1;

    //carta 2
    char carta2;
    char estado2[40];
    char codigo2[20];
    char cidade2[50];
    int populacao2;
    float area2;
    float PIB2; // milhóes
    int pontoturistico2;

    // Cadastro da Carta 1
    printf("carta1\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código: ");
    scanf("%s",codigo1);
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &PIB1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosturistico1);

    // cadastro da carta 2
    printf("Digite os dados da carta2:\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código: ");
    scanf("%s",codigo2);
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &PIB2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontoturistico2);
    
    
    //exibição carta 1
    printf("\nCarta 1 : \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos turísticos: %d\n", pontosturistico1);

    //exibição carta 2
    printf("\nCarta 2 : \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turísticos: %d\n", pontoturistico2);

    return 0;

}