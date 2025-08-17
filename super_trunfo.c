#include <stdio.h>

struct CartaSuperTrunfo {
    char  estado;
    char  codigo[5];          
    char  nomeCidade[50];     
    int   populacao;
    float area;
    float pib;
    int   pontosTuristicos;
};

int main() {
    
    struct CartaSuperTrunfo carta1;
    struct CartaSuperTrunfo carta2;

    // --- CADASTRO PRIMEIRA CARTA ---
    printf("--- Cadastro primeira carta ---\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &carta1.estado); 

    printf("Digite o código da Carta (ex: B02): ");
    scanf("%s", carta1.codigo);

    printf("Digite o nome da cidade: ");

    scanf(" %[^\n]", carta1.nomeCidade);

    printf("Digite a População: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a área (em km2): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // --- CADASTRO SEGUNDA CARTA ---
    printf("\n--- Cadastro segunda carta ---\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o código da carta (ex: C04): ");
    scanf("%s", carta2.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a àrea (em km2): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // --- MOSTRA OS DADOS CADASTRADOS ---
    printf("\n\n--- Dados das cartas cadastradas ---\n\n");

    // Exibindo dados da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area); 
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontosTuristicos);

    printf("\n"); 

    // Exibindo dados da segunda Carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontosTuristicos);

    return 0; 
}