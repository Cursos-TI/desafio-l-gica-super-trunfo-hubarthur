#include <stdio.h>

int main() {
    //inclusão de variáveis
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;

    //Entrada de dados Carta 1
    printf("Digite as informações da Carta 1\n");
    printf("Letra do Estado (A-H): ");
    scanf("%c\n", &estado1);
    printf("Código da Carta: ");
    scanf("%c\n", codigo1);
    printf("Nome da Cidade: ");
    scanf("%[^\n]", cidade1);
    printf("População: ");
    scanf("%d\n", &populacao1);
    printf("Área em Km²: ");
    scanf("%.2f\n", &area1);
    printf("PIB: ");
    scanf("%.2f\n", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d\n", &pontosturisticos1);
    
    densidade1 = (float) populacao1 / area1;
    pibpercapita1 = (float) pib1 / populacao1;
    superpoder1 = (float) populacao1 + area1 + pib1 + pontosturisticos1;

    //Entrada de dados da Carta 2
    printf("Digite as informações da Carta 2\n");
    printf("Letra do Estado (A-H): ");
    scanf("%c\n", &estado2);
    printf("Código da Carta: ");
    scanf("%s\n", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d\n", &populacao2);
    printf("Área: ");
    scanf("%.2f\n", &area2);
    printf("PIB: ");
    scanf("%.2f\n", pib2);
    printf("Pontos Turísticos: ");
    scanf("%d\n", &pontosturisticos2);

    densidade2 = (float) populacao2 / area2;
    pibpercapita2 = (float) pib2 / populacao2;
    superpoder2 = (float) populacao2 + area2 + pib2 + pontosturisticos2;

    //Exibição dos poderes das Cartas 1 e 2
    printf("\nCarta 1:\n");
    printf("Letra do Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpercapita1);
    printf("Super Poder: %.2f pontos\n", superpoder1);

    printf("\nCarta 2:\n");
    printf("Letra do Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f pontos\n", superpoder2);

    //Comparação de cartas, uso if else
    printf("______________________________");
    printf("**Resultado da comparação de cartas**\n");
    if(populacao1 > populacao2){
        printf("População: Carta 1 venceu!\n");
    } else {
        printf("População: Carta 2 venceu!\n");
    }
    if (area1 > area2){
        printf("Área: Carta 1 venceu!\n");
    } else {
        printf("Área: Carta 2 venceu!\n");
    }
    if (pib1 > pib2){
        printf("PIB: Carta 1 venceu!\n");
    } else{
        printf("PIB: Carta 2 venceu!\n");
    }
    if(pontosturisticos1 > pontosturisticos2){
        printf("Pontos Turístico: Carta 1 venceu!\n");
    } else{
        printf("Pontos Turísticos: Carta 2 venceu!\n");
    }
    if(densidade1 < densidade2){
        printf("Densidade Populacional: Carta 1 venceu!\n");
    } else{
        printf("Densidade Populacional: Carta 2 venceu!\n");
    }
    if(pibpercapita1 > pibpercapita2){
        printf("PIB per capita: Carta 1 venceu!\n");
    } else{
        printf("PIB per capita: Carta 2 venceu!\n");
    }
    printf("Super poder: ");
    if(superpoder1 > superpoder2){
        printf("Carta 1 venceu!\n");
    }else{
        printf("Carta 2 venceu!\n");
    }
    return 0;
}