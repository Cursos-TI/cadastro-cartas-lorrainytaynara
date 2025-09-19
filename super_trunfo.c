

// Definição da estrutura para a carta do Super Trunfo
struct carta {
    char estado;
    char codigo_carta[5]; // Ex: A01, B03 (4 caracteres + 1 para o terminador nulo '\0')
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    // Declaração de duas variáveis do tipo struct carta
    struct carta carta1;
    struct carta carta2;

    // --- CADASTRO DA CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n\n");

    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", carta1.codigo_carta);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", carta1.nome_cidade);

    printf("Digite a populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a area em km2: ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB: ");
    scanf("%f", &carta1.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    printf("\n--------------------------\n");

    // --- CADASTRO DA CARTA 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n\n");

    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", carta2.codigo_carta);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", carta2.nome_cidade);

    printf("Digite a populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a area em km2: ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB: ");
    scanf("%f", &carta2.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    printf("\n--------------------------\n");

    // --- EXIBIÇÃO DAS CARTAS ---
    printf("\n--- Informacoes das Cartas ---\n\n");

    // Exibição da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo_carta);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontos_turisticos);

    printf("\n");

    // Exibição da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo_carta);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontos_turisticos);

    return 0;
}
