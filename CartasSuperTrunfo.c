#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo[50], nome[50];
    float populacao, area, pib;
    float turist;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o código da cidade: \n");
    scanf("%s", &codigo);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);
    printf("Digite a população da cidade: \n");
    scanf("%f", &populacao);
    printf("Digite a area da cidade: \n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", pib);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%f", turist);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Código da cidade: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População da cidade: %f\n", populacao);
    printf("Area da cidade: %f\n", area);
    printf("PIB da cidade: %f\n", pib);
    printf("Número de pontos turisticos da cidade: %f\n", turist);

    return 0;
}
