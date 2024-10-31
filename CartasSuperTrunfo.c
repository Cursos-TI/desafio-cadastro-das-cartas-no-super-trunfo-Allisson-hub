#include <stdio.h>

int main(){ 
    char nome[50];
    int Codigo;
    double populacao; 
    double  Area;
    double PIB;
    int PontosTuristicos;


    printf("Qual o nome do estado: \n");
    scanf("%s", &nome);

    printf("Qual código da cidade: \n");
    scanf( " %d", &Codigo);

    printf("Quantidade população: \n");
    scanf(" %f", &populacao);

    printf("Área km²: \n");
    scanf(" %f", &Area);

    printf("Qual o PIB: \n");
    scanf(" %f", &PIB);

    printf("Qual o número de pontos turísticos: \n");
    scanf(" %d", &PontosTuristicos);

    printf("nome do estado: %s \n", nome);
    printf(" Qual o código da cidade: %d \n", Codigo);
    printf("Quantidade da população: %f \n", populacao);
    printf("Qual a área em km²: %f \n", Area);
    printf("PIB: %f \n", PIB);
    printf("Número de pontos turísticos: %d \n", PontosTuristicos);

    double densidadepopulacional;
    double PIBpercapta;

    densidadepopulacional = populacao / Area;
    PIBpercapta = PIB / populacao;

printf("Densidade populacional: %.2f \n", densidadepopulacional);
printf("PIB percapta: %.2f\n", PIBpercapta );

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
    }

