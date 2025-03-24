#include <stdio.h>

int main (){
    // Definição das variáveis para armazenar as propriedades das cidades
    char codigo_carta[10], codigo_carta02[10];
    char nome_cidade[50], nome_cidade02[50];
    char estado[20], estado02[20]; 
    int populacao, populacao02;
    float area, area02;
    float pib, pib02;
    int qtde_pontos_turisticos, qtde_pontos_turisticos02;


    // Cadastro das Cartas:

    printf(" - Preencha os dados da Carta 01:  \n ");
    printf("Codigo da carta (Ex: A01, B02...): ");
    scanf("%s", codigo_carta);  // Lê a string para o código da carta

    printf("Estado (letra de A a H): ");
    scanf(" %s", &estado);   

    printf("Nome da cidade: ");
    scanf("%s", nome_cidade);  // Lê apenas uma palavra para o nome da cidade

    printf("Populacao: ");
    scanf("%d", &populacao);
    
    printf("PIB: ");
    scanf("%f", &pib);

    printf("Area (km2): ");
    scanf("%f", &area);


    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &qtde_pontos_turisticos);

    
    printf(" - Preencha os dados da Carta 02:  \n ");
    printf("Codigo da carta 02 (Ex: A01, B02...): ");
    scanf("%s", codigo_carta02);

    printf("Estado  (letra de A a H): ");
    scanf(" %s", &estado02);   

    printf("Nome da cidade: ");
    scanf("%s", nome_cidade02); 

    printf("Populacao: ");
    scanf("%d", &populacao02);

    printf("PIB: ");
    scanf("%f", &pib02);

    printf("Area (km2): ");
    scanf("%f", &area02);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &qtde_pontos_turisticos02);

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("CARTA 01:\n");
    printf("Codigo: %s\n", codigo_carta);
    printf("Estado: %c\n", estado);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Quantidade de pontos turisticos: %d\n", qtde_pontos_turisticos);

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("CARTA 02:\n");
    printf("Codigo: %s\n", codigo_carta02);
    printf("Estado: %c\n", estado02);
    printf("Nome da Cidade: %s\n", nome_cidade02);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Quantidade de pontos turisticos: %d\n", qtde_pontos_turisticos);

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Densidade Populacional de ambas as cartas:\n");

    //Calculo dos valores derivados
    float densidade_pop01 = populacao / area;    
    float densidade_pop02 = populacao02 / area02;
    float pib_per_capita01 = pib / populacao;
    float pib_per_capita02 = pib02 / populacao02;

    // Escolha do atributo para comparação 
    char atributo_comparado[] = "Densidade Populacional";  // Altere para "Area", "PIB", "Densidade Populacional" ou "PIB per capita"
    float valor1, valor2;

    // Determina qual valor comparar com base no atributo escolhido
    if (strcmp(atributo_comparado, "Populacao") == 0) {
        valor1 = populacao;
        valor2 = populacao02;
    } else if (strcmp(atributo_comparado, "Area") == 0) {
        valor1 = area;
        valor2 = area02;
    } else if (strcmp(atributo_comparado, "PIB") == 0) {
        valor1 = pib;
        valor2 = pib02;
    } else if (strcmp(atributo_comparado, "Densidade Populacional") == 0) {
        valor1 = densidade_pop01;
        valor2 = densidade_pop02;
    } else if (strcmp(atributo_comparado, "PIB per capita") == 0) {
        valor1 = pib_per_capita01;
        valor2 = pib_per_capita02;
    }

    // Exibir os valores das duas cartas
    printf("\n====================\n");
    printf(" Comparação de cartas (Atributo: %s)\n", atributo_comparado);
    printf("====================\n");
    printf("Carta 1 - %s (%s): %.2f\n", nome_cidade, estado, valor1);
    printf("Carta 2 - %s (%s): %.2f\n", nome_cidade02, estado02, valor2);


    if (strcmp(atributo_comparado, "Densidade Populacional") == 0) {
        if (valor1 < valor2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade02);
        }
    } else {
        if (valor1 > valor2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade02);
        }
    }
    
    return 0;
}
