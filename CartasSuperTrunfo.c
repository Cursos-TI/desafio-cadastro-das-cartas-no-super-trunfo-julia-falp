#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char estado;
    char codigoDaCarta[50], nomeDaCidade[50];
    int populacao, nPontoTuristico;
    float area, pib;

    printf("Digite a primeira letra do Estado de A a H: \n");
    scanf("%c", &estado);
    printf("Digite o código da carta de 01 a 04: \n");
    scanf("%s", &codigoDaCarta);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeDaCidade);
    printf("Digite a população: \n");
    scanf("%i", &populacao);
    printf("Digite a área: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%i", &nPontoTuristico);
    printf("Carta 1: \nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %i \nárea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de pontos turísticos: %i\n", estado, estado, codigoDaCarta, nomeDaCidade, populacao, area, pib, nPontoTuristico);
    return 0;
}
