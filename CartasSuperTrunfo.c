#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char CodigoDaCidade[25];
    char Nome[25];
    int Populacao;
    float Area;
    float PIB;
    int PontosTuristicos;

    printf("Digite o Código da Cidade: \n");
    scanf("%s", CodigoDaCidade);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", Nome);
    
    printf("Digite a População da Cidade: \n");
    scanf("%d", &Populacao);

    printf("Digite a Área da Cidade: \n");
    scanf("%f", &Area);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB);

    printf("Digite a Quantidade de Pontos Turísticos da Cidade: \n");
    scanf("%d", &PontosTuristicos);



    return 0;
}
