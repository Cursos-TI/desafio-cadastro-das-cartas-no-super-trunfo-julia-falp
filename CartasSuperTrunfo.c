#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char estadoCarta1, estadoCarta2;
    char codigoDaCarta1[50], nomeDaCidadeCarta1[50], codigoDaCarta2[50], nomeDaCidadeCarta2[50];
    int populacaoCarta1, nPontoTuristicoCarta1, populacaoCarta2, nPontoTuristicoCarta2, opcao1, opcao2;
    float areaCarta1, pibCarta1, densidadeCarta1, perCapitaCarta1, areaCarta2, pibCarta2, densidadeCarta2, perCapitaCarta2, superpoderCarta1, superpoderCarta2;
    float somaCarta1, somaCarta2;

    printf("*********Dados da Carta 1*********\n");
    printf("Digite a primeira letra do Estado de A a H: \n");
    scanf(" %c", &estadoCarta1);
    printf("Digite o codigo da carta de 01 a 04: \n");
    scanf("%s", &codigoDaCarta1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeDaCidadeCarta1);
    printf("Digite a populacao: \n");
    scanf("%i", &populacaoCarta1);
    printf("Digite a area: \n");
    scanf("%f", &areaCarta1);
    printf("Digite o PIB: \n");
    scanf("%f", &pibCarta1);
    printf("Digite o numero de pontos turistico: \n");
    scanf("%i", &nPontoTuristicoCarta1);

    printf("\n\n");

    printf("*********Dados da Carta 2*********\n");
    printf("Digite a primeira letra do Estado de A a H: \n");
    scanf(" %c", &estadoCarta2);
    printf("Digite o codigo da carta de 01 a 04: \n");
    scanf("%s", &codigoDaCarta2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeDaCidadeCarta2);
    printf("Digite a populacao: \n");
    scanf("%i", &populacaoCarta2);
    printf("Digite a area: \n");
    scanf("%f", &areaCarta2);
    printf("Digite o PIB: \n");
    scanf("%f", &pibCarta2);
    printf("Digite o numero de pontos turistico: \n");
    scanf("%i", &nPontoTuristicoCarta2);

    densidadeCarta1 = populacaoCarta1 / areaCarta1;
    perCapitaCarta1 = pibCarta1 / populacaoCarta1;
    densidadeCarta2 = populacaoCarta2 / areaCarta2;
    perCapitaCarta2 = pibCarta2 / populacaoCarta2;

    superpoderCarta1 = (float)populacaoCarta1 + areaCarta1 + pibCarta1 + (float)nPontoTuristicoCarta1 + perCapitaCarta1 + (1 / densidadeCarta1);
    superpoderCarta2 = (float)populacaoCarta2 + areaCarta2 + pibCarta2 + (float)nPontoTuristicoCarta2 + perCapitaCarta2 + (1 / densidadeCarta2);

    printf("\n\n");

    printf("Escolha um atributo abaixo: \n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de Pontos turisticos\n");
    printf("5. Densidade demografica\n");
    scanf("%d", &opcao1);

    printf("\n\n");

    printf("Escolha o segundo atributo abaixo: \n");
    printf(opcao1 == 1 ? "": "1. Populacao\n");
    printf(opcao1 == 2 ? "": "2. Area\n");
    printf(opcao1 == 3 ? "": "3. PIB\n");
    printf(opcao1 == 4 ? "": "4. Numero de Pontos turisticos\n");
    printf(opcao1 == 5 ? "": "5. Densidade demografica\n");
    scanf("%d", &opcao2);

    printf("\n\n");

    if (opcao1 == opcao2)
    {
        printf("Os atributos precisam ser diferentes\n");
        return 0;
    }
    printf("Competicao entre as cidades %s e %s \n \n", nomeDaCidadeCarta1, nomeDaCidadeCarta2);

    switch (opcao1)
    {
    case 1:
        somaCarta1 += populacaoCarta1;
        somaCarta2 += populacaoCarta2;

        if (populacaoCarta1 > populacaoCarta2)
        {
            printf("Para o atributo Populacao a Carta 1 venceu com o valor: %i contra %i da Carta 2\n", populacaoCarta1, populacaoCarta2);
        }
        else if (populacaoCarta1 < populacaoCarta2)
        {
            printf("Para o atributo Populacao a Carta 2 venceu com o valor: %i contra %i da Carta 1\n", populacaoCarta2, populacaoCarta1);
        }
        else
            printf("Empate\n");
        break;

    case 2:
        somaCarta1 += areaCarta1;
        somaCarta2 += areaCarta2;

        if (areaCarta1 > areaCarta2)
        {
            printf("Para o atributo Area a Carta 1 venceu com o valor: %.2f contra %.2f da Carta 2\n", areaCarta1, areaCarta2);
        }
        else if (areaCarta1 < areaCarta2)
        {
            printf("Para o atributo Area a Carta 2 venceu com o valor: %.2f contra %.2f da Carta 1\n", areaCarta2, areaCarta1);
        }
        else
            printf("Empate\n");
        break;

    case 3:
        somaCarta1 += pibCarta1;
        somaCarta2 += pibCarta2;

        if (pibCarta1 > pibCarta2)
        {
            printf("Para o atributo PIB a Carta 1 venceu com o valor: %.2f contra %.2f da Carta 2\n", pibCarta1, pibCarta2);
        }
        else if (pibCarta1 < pibCarta2)
        {
            printf("Para o atributo PIB a Carta 2 venceu com o valor: %.2f contra %.2f da Carta 1\n", pibCarta2, pibCarta1);
        }
        else
            printf("Empate\n");
        break;

    case 4:
        somaCarta1 += nPontoTuristicoCarta1;
        somaCarta2 += nPontoTuristicoCarta2;

        if (nPontoTuristicoCarta1 > nPontoTuristicoCarta2)
        {
            printf("Para o atributo Pontos Turisticos a Carta 1 venceu com o valor: %i contra %i da Carta 2\n", nPontoTuristicoCarta1, nPontoTuristicoCarta2);
        }
        else if (nPontoTuristicoCarta1 < nPontoTuristicoCarta2)
        {
            printf("Para o atributo Pontos Turisticos a Carta 2 venceu com o valor: %i contra %i da Carta 1\n", nPontoTuristicoCarta2, nPontoTuristicoCarta1);
        }
        else
            printf("Empate\n");
        break;

    case 5:
        somaCarta1 += densidadeCarta1;
        somaCarta2 += densidadeCarta2;

        if (densidadeCarta1 < densidadeCarta2)
        {
            printf("Para o atributo Densidade Populacional a Carta 1 venceu com o valor: %.2f contra %.2f da Carta 2\n", densidadeCarta1, densidadeCarta2);
        }
        else if (densidadeCarta1 > densidadeCarta2)
        {
            printf("Para o atributo Densidade Populacional a Carta 2 venceu com o valor: %.2f contra %.2f da Carta 1\n", densidadeCarta2, densidadeCarta1);
        }
        else
            printf("Empate\n");
        break;

    default:
        printf("Opcao invalida. Tente novamente.\n");
    }
    switch (opcao2)
    {
    case 1:
        somaCarta1 += populacaoCarta1;
        somaCarta2 += populacaoCarta2;

        if (populacaoCarta1 > populacaoCarta2)
        {
            printf("Para o atributo Populacao a Carta 1 venceu com o valor: %i contra %i da Carta 2\n", populacaoCarta1, populacaoCarta2);
        }
        else if (populacaoCarta1 < populacaoCarta2)
        {
            printf("Para o atributo Populacao a Carta 2 venceu com o valor: %i contra %i da Carta 1\n", populacaoCarta2, populacaoCarta1);
        }
        else
            printf("Empate\n");
        break;

    case 2:
        somaCarta1 += areaCarta1;
        somaCarta2 += areaCarta2;

        if (areaCarta1 > areaCarta2)
        {
            printf("Para o atributo Area a Carta 1 venceu com o valor: %.2f contra %.2f da Carta 2\n", areaCarta1, areaCarta2);
        }
        else if (areaCarta1 < areaCarta2)
        {
            printf("Para o atributo Area a Carta 2 venceu com o valor: %.2f contra %.2f da Carta 1\n", areaCarta2, areaCarta1);
        }
        else
            printf("Empate\n");
        break;

    case 3:
        somaCarta1 += pibCarta1;
        somaCarta2 += pibCarta2;

        if (pibCarta1 > pibCarta2)
        {
            printf("Para o atributo PIB a Carta 1 venceu com o valor: %.2f contra %.2f da Carta 2\n", pibCarta1, pibCarta2);
        }
        else if (pibCarta1 < pibCarta2)
        {
            printf("Para o atributo PIB a Carta 2 venceu com o valor: %.2f contra %.2f da Carta 1\n", pibCarta2, pibCarta1);
        }
        else
            printf("Empate\n");
        break;

    case 4:
        somaCarta1 += nPontoTuristicoCarta1;
        somaCarta2 += nPontoTuristicoCarta2;

        if (nPontoTuristicoCarta1 > nPontoTuristicoCarta2)
        {
            printf("Para o atributo Pontos Turisticos a Carta 1 venceu com o valor: %i contra %i da Carta 2\n", nPontoTuristicoCarta1, nPontoTuristicoCarta2);
        }
        else if (nPontoTuristicoCarta1 < nPontoTuristicoCarta2)
        {
            printf("Para o atributo Pontos Turisticos a Carta 2 venceu com o valor: %i contra %i da Carta 1\n", nPontoTuristicoCarta2, nPontoTuristicoCarta1);
        }
        else
            printf("Empate\n");
        break;

    case 5:
        somaCarta1 += densidadeCarta1;
        somaCarta2 += densidadeCarta2;

        if (densidadeCarta1 < densidadeCarta2)
        {
            printf("Para o atributo Densidade Populacional a Carta 1 venceu com o valor: %.2f contra %.2f da Carta 2\n", densidadeCarta1, densidadeCarta2);
        }
        else if (densidadeCarta1 > densidadeCarta2)
        {
            printf("Para o atributo Densidade Populacional a Carta 2 venceu com o valor: %.2f contra %.2f da Carta 1\n", densidadeCarta2, densidadeCarta1);
        }
        else
            printf("Empate\n");
        break;

    default:
        printf("Opcao invalida. Tente novamente.\n");
    }

    if (somaCarta1 > somaCarta2)
    {
        printf("A Carta 1 venceu a soma dos atributos com o valor de %f contra %f da Carta 2 \n \n", somaCarta1, somaCarta2);
    }
    else if (somaCarta1 < somaCarta2)
    {
        printf("A Carta 2 venceu a soma dos atributos com o valor de %f contra %f da Carta 1 \n \n", somaCarta2, somaCarta1);
    }
    else
        printf("A somatoria das cartas deram EMPATE!\n \n");
    

    return 0;
}
