#include <stdio.h>

int main(){

// variaveis da cidade 1
char estado1;
char cartcode1[4];
char nomecidade1[50];
float areacidade1;
float pibcidade1;
float populacao1;
int ptsturisticos1;

// variaveis da cidade 2
char estado2;
char cartcode2[4];
char nomecidade2[50];
float areacidade2;
float pibcidade2;
float populacao2;
int ptsturisticos2;

    printf("Bem vindo ao Super Trunfo cidades!!!\n"); //mensagem de introdução
    printf("\n");
    printf("Vamos cadastrar uma nova carta? \n");
    printf("\n");

//cadastro da cidade 1
    printf("Observação: não utilize espaços ao inserir as informações solicitadas\n");
    //input estado
    printf ("Digite a letra que represente o estado de sua cidade!\n");
    printf ("As opções são A,B,C,D,E,F,G,H[digite em maiusculo]\n");
    scanf (" %c", &estado1); //tem que dar um espaço antes do "%c" para tirar o \n do buffer
    //input código da carta
    printf ("Digite o código de sua carta! O código é composto pela letra do estado, e dois números(em maiusculo)\n");
    printf ("Exemplo: A01\n");
    scanf ("%s", &cartcode1);
    //input nome da cidade
    printf("Digite o nome de sua cidade! *Não utilize espaços*\n");
    scanf ("%s", &nomecidade1);
    //input pib da cidade
    printf("Digite a area de sua cidade em km²(apenas os números)\n");
    scanf("%f", &areacidade1);
    //input população
    printf("Digite a população de sua cidade em(apenas os números)\n");
    scanf("%f", &populacao1);
    //input PIB
    printf("Digite o PIB de sua cidade em Bilhoes de reais(apenas os números)\n");
    scanf("%f", &pibcidade1);
    //input quantidade de pontos turisticos
    printf("Digite a quantidade de pontos turisticos da cidade(apenas números)\n");
    scanf("%i", &ptsturisticos1);

    //ESPAÇO
    printf("\n\n");

//cadastro da cidade 2
    printf("Agora vamos cadastrar a segunda cidade!\n");
    printf("\n");
    //input estado
    printf ("Digite a letra que represente o estado de sua cidade!\n");
    printf ("As opções são A,B,C,D,E,F,G,H[digite em maiusculo]\n");
    scanf (" %c", &estado2); //tem que dar um espaço antes do "%c" para tirar o \n do buffer
    //input código da carta
    printf ("Digite o código de sua carta! O código é composto pela letra do estado, e dois números(em maiusculo)\n");
    printf ("Exemplo: A01\n");
    scanf ("%s", &cartcode2);
    //input nome da cidade
    printf("Digite o nome de sua cidade! *Não utilize espaços*\n");
    scanf ("%s", &nomecidade2);
    //input pib da cidade
    printf("Digite a area de sua cidade em km²(apenas os números)\n");
    scanf("%f", &areacidade2);
    //input população
    printf("Digite a população de sua cidade em(apenas os números)\n");
    scanf("%f", &populacao2);   
    //input PIB
    printf("Digite o PIB de sua cidade em Bilhoes de reais(apenas os números)\n");
    scanf("%f", &pibcidade2);
    //input quantidade de pontos turisticos
    printf("Digite a quantidade de pontos turisticos da cidade(apenas números)\n");
    scanf("%i", &ptsturisticos2);
    printf("\n\n");

//Impressão da cartas cadastradas
    printf("///Cartas cadastradas///\n");
    printf("\n");
    
// Carta 1
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cartcode1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %.0f\n", populacao1);
    printf("Área: %.2fKM²\n", areacidade1);
    printf("PIB: %.0f bilhões de Reais\n", pibcidade1);
    printf("Número de pontos turísticos: %i\n", ptsturisticos1);
    printf("\n"); // linha em branco para separar as cartas

// Carta 2
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cartcode2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %.0f\n", populacao2);
    printf("Área: %.2fKM²\n", areacidade2);
    printf("PIB: %.0f bilhões de Reais\n", pibcidade2);
    printf("Número de pontos turísticos: %i\n", ptsturisticos2);
    printf("\n");


//Fim do código
    return 0;
}