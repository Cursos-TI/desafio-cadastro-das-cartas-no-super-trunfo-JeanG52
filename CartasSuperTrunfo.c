#include <stdio.h> // Biblioteca padrão de entrada e saída

int main(){
    // Declaração de variáveis para armazenar as informações da cidade
    char estado[50]; // Armazena a sigla do estado
    char codigocarta[10]; // Armazena o código da carta
    char nomecidade[100]; // Armazena o nome da cidade
    float populacao; // Armazena o número de habitantes da cidade
    float areakm2; // Armazena a área da cidade em km²
    float pib; // Armazena o PIB da cidade
    int pontosturisticos; // Armazena o número de pontos turísticos
    float densidade_populacional; // Armazena a densidade populacional (calculada)
    float pib_per_capita; // Armazena o PIB per capita (calculado)

    // Entrada de dados do usuário
    printf("Digite a sigla do seu estado: \n");
    scanf("%s", estado); // Lê a sigla do estado

    printf("Digite o código de sua carta: \n");
    scanf("%s", codigocarta); // Lê o código da carta

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", nomecidade); // Lê o nome da cidade

    printf("Digite a quantidade de habitantes em sua cidade: \n");
    scanf("%f", &populacao); // Lê a população da cidade

    printf("Digite a área em km² de sua cidade: \n");
    scanf("%f", &areakm2); // Lê a área da cidade em km²

    printf("Digite o PIB de sua cidade: \n");
    scanf("%f", &pib); // Lê o PIB da cidade

    printf("Digite o número de pontos turísticos de sua cidade: \n");
    scanf("%d", &pontosturisticos); // Lê o número de pontos turísticos

    // Cálculos das propriedades
    densidade_populacional = populacao / areakm2; // Calcula a densidade populacional
    pib_per_capita = pib / populacao; // Calcula o PIB per capita

    // Saída de dados
    printf("\nEstado: %s\n", estado); // Exibe o estado
    printf("Código da carta: %s\n", codigocarta); // Exibe o código da carta
    printf("Nome da cidade: %s\n", nomecidade); // Exibe o nome da cidade
    printf("População: %.2f\n", populacao); // Exibe a população
    printf("Área km²: %.2f\n", areakm2); // Exibe a área em km²
    printf("PIB: %.2f\n", pib); // Exibe o PIB
    printf("Pontos turísticos: %d\n", pontosturisticos); // Exibe o número de pontos turísticos
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional); // Exibe a densidade populacional calculada
    printf("PIB per capita: %.2f\n", pib_per_capita); // Exibe o PIB per capita calculado

    return 0; // Indica que o programa terminou com sucesso
}
