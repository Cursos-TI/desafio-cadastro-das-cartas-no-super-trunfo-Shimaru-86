// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// **** Programa desenvolvido pelo aluno Elcimar Alves de Moura

// Inclusão das bibliotecas para uso das funções
#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis da Carta 1
    char estado1[50], codCarta1[5], nomeCidade1[50];
    int populacao1, pontosTurCid1;
    float areaCid1, pibCid1;

    // Variáveis da Carta 2
    char estado2[50], codCarta2[5], nomeCidade2[50];
    int populacao2, pontosTurCid2;
    float areaCid2, pibCid2;

    printf("Olá!\nBem-vindo ao Jogo SUPER TRUNFO!\n\n");
    printf("Neste primeiro momento, é necessário cadastrar os dados das cartas.\n\n");

    // ---------------- CARTA 1 ----------------
    printf("Cadastro da Carta 1\n\n");

    // Para capturar os dados de string, utilizei fgets como recomendado no material.
    printf("Digite o Estado (ex: Bahia): ");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0; // remove o \n do final

    printf("Digite o Código da Carta (ex: A01): ");
    fgets(codCarta1, sizeof(codCarta1), stdin);
    codCarta1[strcspn(codCarta1, "\n")] = 0;

    printf("Digite o Nome da Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &areaCid1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pibCid1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTurCid1);

    getchar(); // limpar o buffer antes de ler a próxima carta

    // ---------------- CARTA 2 ----------------
    printf("\n\nCadastro da Carta 2\n\n");

    printf("Digite o Estado (ex: Rio de Janeiro): ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    printf("Digite o Código da Carta (ex: B02): ");
    fgets(codCarta2, sizeof(codCarta2), stdin);
    codCarta2[strcspn(codCarta2, "\n")] = 0;

    printf("Digite o Nome da Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &areaCid2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pibCid2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTurCid2);

    // ---------------- EXIBINDO AS CARTAS ----------------
    printf("\n==============================\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", areaCid1);
    printf("PIB: %.2f bilhões de reais\n", pibCid1);
    printf("Número de Pontos Turísticos: %d\n", pontosTurCid1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areaCid2);
    printf("PIB: %.2f bilhões de reais\n", pibCid2);
    printf("Número de Pontos Turísticos: %d\n", pontosTurCid2);
    printf("==============================\n");

    return 0;
}