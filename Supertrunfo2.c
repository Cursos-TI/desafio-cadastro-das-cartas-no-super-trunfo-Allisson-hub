#include <stdio.h>

int main(){ 
    char nome[50];
    char Código;
    int população;
    float Área ;
    float PIB;
    int NúmeroDePontosTurísticos;


    printf("Qual o nome do estado");
    scanf(" %s", &nome);

    printf("Qual código da cidade");
    scanf(" %c", &Código);

    printf("Quantidade população");
    scanf(" %d", &população);

    printf("Área km²");
    scanf(" %f", &Área);

    printf("Qual o PIB");
    scanf(" %f", &PIB);

    printf("Qual o número de pontos turísticos");
    scanf(" %d", &NúmeroDePontosTurísticos);

    printf("nome do estado: %s - Código da cidade: %c", nome, Código);
    printf("Quantidade da população: %d - Área km²: %f", população, Área);
    printf("PIB: %f - Número de pontos turísticos: %d", PIB, NúmeroDePontosTurísticos);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;}
