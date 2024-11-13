#include <stdio.h>

int main(){
    char estado[50];
    char codigocarta[10];
    char nomecidade[100];
    float populacao;
    float areakm2;
    float pib;
    int pontosturisticos;
    float densidade_populacional;
    float pib_per_capita;

    printf("Digite a sigla do seu estado: \n");
    scanf("%s", estado);

    printf("Digite o código de sua carta: \n");
    scanf("%s", codigocarta);

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", nomecidade);

    printf("Digite a quantidade de habitantes em sua cidade: \n");
    scanf("%f", &populacao);

    printf("Digite a área em km² de sua cidade: \n");
    scanf("%f", &areakm2);

    printf("Digite o PIB de sua cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos de sua cidade: \n");
    scanf("%d", &pontosturisticos);

    densidade_populacional = populacao / areakm2;
    pib_per_capita = pib / populacao;

    printf("\nEstado: %s\n", estado);
    printf("Código da carta: %s\n", codigocarta);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("População: %.2f\n", populacao);
    printf("Área km²: %.2f\n", areakm2);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontosturisticos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per capita: %.2f\n", pib_per_capita);

    return 0;
}
