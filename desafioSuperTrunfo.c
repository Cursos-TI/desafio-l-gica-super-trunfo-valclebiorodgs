#include <stdio.h>

int main (){
    // Definição das variáveis para armazenar as propriedades das cidades
    char codigo_carta[10], codigo_carta02[10];
    char nome_cidade[50], nome_cidade02[50];
    char estado, estado02;  // Espera-se que o usuário digite apenas UMA letra
    int populacao, populacao02;
    float area, area02;
    float pib, pib02;
    int qtde_pontos_turisticos, qtde_pontos_turisticos02;


    // Cadastro das Cartas:

    printf(" - Preencha os dados da Carta 01:  \n ");
    printf("Codigo da carta (Ex: A01, B02...): ");
    scanf("%s", codigo_carta);  // Lê a string para o código da carta

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado);   // Lê apenas UM caractere; se o usuário digitar mais, os demais ficarão no buffer!

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
    scanf(" %c", &estado02);   

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

}
