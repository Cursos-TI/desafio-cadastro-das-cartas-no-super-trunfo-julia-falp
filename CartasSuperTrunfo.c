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
    printf("Digite o c�digo da carta de 01 a 04: \n");
    scanf("%s", &codigoDaCarta);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeDaCidade);
    printf("Digite a popula��o: \n");
    scanf("%i", &populacao);
    printf("Digite a �rea: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    printf("Digite o n�mero de pontos tur�sticos: \n");
    scanf("%i", &nPontoTuristico);
    printf("Carta 1: \nEstado: %c\nC�digo: %c%s\nNome da Cidade: %s\nPopula��o: %i \n�rea: %.2f km�\nPIB: %.2f bilh�es de reais\nN�mero de pontos tur�sticos: %i\n", estado, estado, codigoDaCarta, nomeDaCidade, populacao, area, pib, nPontoTuristico);
    return 0;
}
