#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char estadoCarta1, estadoCarta2;
    char codigoDaCarta1[50], nomeDaCidadeCarta1[50], codigoDaCarta2[50], nomeDaCidadeCarta2[50];
    int populacaoCarta1, nPontoTuristicoCarta1, populacaoCarta2, nPontoTuristicoCarta2;
    float areaCarta1, pibCarta1, densidadeCarta1, perCapitaCarta1, areaCarta2, pibCarta2, densidadeCarta2, perCapitaCarta2;

    printf("Carta 1 \n");
    printf("Digite a primeira letra do Estado de A a H: \n");
    scanf(" %c", &estadoCarta1);
    printf("Digite o código da carta de 01 a 04: \n");
    scanf("%s", &codigoDaCarta1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeDaCidadeCarta1);
    printf("Digite a população: \n");
    scanf("%i", &populacaoCarta1);
    printf("Digite a área: \n");
    scanf("%f", &areaCarta1);
    printf("Digite o PIB: \n");
    scanf("%f", &pibCarta1);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%i", &nPontoTuristicoCarta1);

    printf("Carta 2 \n");
    printf("Digite a primeira letra do Estado de A a H: \n");
    scanf(" %c", &estadoCarta2);
    printf("Digite o código da carta de 01 a 04: \n");
    scanf("%s", &codigoDaCarta2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeDaCidadeCarta2);
    printf("Digite a população: \n");
    scanf("%i", &populacaoCarta2);
    printf("Digite a área: \n");
    scanf("%f", &areaCarta2);
    printf("Digite o PIB: \n");
    scanf("%f", &pibCarta2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%i", &nPontoTuristicoCarta2);

    densidadeCarta1 = populacaoCarta1 / areaCarta1;
    perCapitaCarta1 = pibCarta1 / populacaoCarta1;
    densidadeCarta2 = populacaoCarta2 / areaCarta2;
    perCapitaCarta2 = pibCarta2 / populacaoCarta2;

    printf("Carta 1: \nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %i \nárea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de pontos turísticos: %i\n", estadoCarta1, estadoCarta1, codigoDaCarta1, nomeDaCidadeCarta1, populacaoCarta1, areaCarta1, pibCarta1, nPontoTuristicoCarta1);
    printf("Densidade populacional: %.2f\nPIB per Capita: %.2f\n", densidadeCarta1, perCapitaCarta1);
    printf("\nCarta 2: \nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %i \nárea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de pontos turísticos: %i\n", estadoCarta2, estadoCarta2, codigoDaCarta2, nomeDaCidadeCarta2, populacaoCarta2, areaCarta2, pibCarta2, nPontoTuristicoCarta2);
    printf("Densidade populacional: %.2f\nPIB per Capita: %.2f\n", densidadeCarta2, perCapitaCarta2);
    return 0;
}
