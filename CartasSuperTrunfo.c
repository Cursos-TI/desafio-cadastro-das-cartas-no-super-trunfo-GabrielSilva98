#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char Estado[2]
    char Codigo[8]
    char Cidade[50]
    int População
    float Area
    float Pib
    int Pnts_Turisticos

    printf("Digite seu Estado: \n");
    scanf("%s", &Estado);

    printf("Digite o Codigo da carta: \n");
    scanf("%s", &Codigo);

    printf("Digite sua Cidade: \n");
    scanf("%s", &Cidade);

    printf("Digite a População: \n");
    scanf("%d", &Populacao);

    printf("Digite a Area: \n");
    scanf("%f", &Area);

    printf("Digite o Pib: \n");
    scanf("%f", &Piib);

    printf("Digite os Pontos Turisticos: \n");
    scanf("%d", &Pnts_Turisticos);

    printf("Estado: %s", Estado);
    printf("Codigo: %s", Codigo);
    printf("Cidade: %s", Cidade);
    printf("População: %d", Populacao);
    printf("Area: %f", Area);
    printf("Pib: %f", Pib);
    printf("Pontos Turisticos: %d", Pnts_Turisticos);

    return 0;
}
