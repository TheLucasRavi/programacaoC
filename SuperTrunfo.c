#include <stdio.h>

int main(){

    // Informações das Cartas:

    //POP: População
    //PT: Número de pontos Turísticos
    //EST: Estado
    //COD: Código da Carta
    //CID: Nome da Cidade
    //AREA: Área em km²
    //PIB: PIB

    int POP1, POP2, POP3, POP4, PT1, PT2, PT3, PT4, COD1, COD2, COD3, COD4;
    char EST1, EST2, EST3, EST4;
    char CID1[50], CID2[50], CID3[50], CID4[50];
    float AREA1, AREA2, AREA3, AREA4, PIB1, PIB2, PIB3, PIB4;

    // Diálogo:

    int jogar;
    int continuar;

    // Boas Vindas:

    printf("\nOlá, seja bem vindo ao Super Trunfo 2025! Caso queira jogar digite '1' !\n");
    scanf("%d", &jogar);

    // Como jogar:

    printf("\n");
    printf("Primeiro irei ensinar como jogar!\n");
    printf("O tema do Super Trunfo desse ano é Países!\n");
    printf("Cada país será dividido em oito estados, identificados pelas letras de A a H.\n");
    printf("Cada estado terá quatro cidades, numeradas de 1 a 4.\n");
    printf("A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).\n");

    printf("\nCada carta de cidade apresentará as seguintes informações:\n");
    printf("\n");
    printf("População : número de habitantes da cidade.\n");
    printf("\n");
    printf("Área : área total da cidade em quilômetros quadrados (km²).\n");
    printf("\n");
    printf("PIB : produto interno bruto da cidade, representando a soma de todos os bens e serviços produzidos no município.\n");
    printf("\n");
    printf("Número de pontos turísticos : quantidade de pontos turísticos famosos na cidade.\n");

    // Primeira Carta:

    printf("Muito bem, vamos registrar suas cartas! Para continuar digite '1' ! ");
    scanf("\n%d", &continuar);

    printf("\nPara começar a registrar sua primeira carta escolha um estado, entre a letra A até H!\n");
    scanf(" %c", &EST1);

    printf("\nMuito bem, agora que você escolheu um estado, escolha um número para essa carta(entre 01 e 04)!\n");
    scanf("%d", &COD1);

    printf("\nBoa, agora escolha um nome para a cidade, uma única palavra!\n");
    scanf("%s", &CID1);

    printf("\nÓtimo nome, agora escolha o tamanho da população de sua cidade!\n");
    scanf("%d", &POP1);

    printf("\nOk, agora escolha o tamanho da sua cidade em km²!\n");
    scanf("%f", &AREA1);

    printf("\nÓtimo, agora escolha um PIB para sua cidade!\n");
    scanf("%f", &PIB1);

    printf("\nÓtimo, agora escolha o número de pontos turísticos que sua cidade terá!\n");
    scanf("%f", &PT1);

    // Segunda Carta:

    printf("\nPara começar a registrar sua segunda carta escolha um estado, entre a letra A até H!\n");
    scanf(" %c", &EST2);

    printf("\nMuito bem, agora que você escolheu um estado, escolha um número para essa carta(entre 01 e 04)!\n");
    scanf("%d", &COD2);

    printf("\nBoa, agora escolha um nome para a cidade, uma única palavra!\n");
    scanf("%s", &CID2);

    printf("\nÓtimo nome, agora escolha o tamanho da população de sua cidade!\n");
    scanf("%d", &POP2);

    printf("\nOk, agora escolha o tamanho da sua cidade em km²!\n");
    scanf("%f", &AREA2);

    printf("\nÓtimo, agora escolha um PIB para sua cidade!\n");
    scanf("%f", &PIB2);

    printf("\nÓtimo, agora escolha o número de pontos turísticos que sua cidade terá!\n");
    scanf("%f", &PT2);

    // Terceira Carta:

    printf("\nPara começar a registrar sua terceira carta escolha um estado, entre a letra A até H!\n");
    scanf(" %c", &EST3);

    printf("\nMuito bem, agora que você escolheu um estado, escolha um número para essa carta(entre 01 e 04)!\n");
    scanf("%d", &COD3);

    printf("\nBoa, agora escolha um nome para a cidade, uma única palavra!\n");
    scanf("%s", &CID3);

    printf("\nÓtimo nome, agora escolha o tamanho da população de sua cidade!\n");
    scanf("%d", &POP3);

    printf("\nOk, agora escolha o tamanho da sua cidade em km²!\n");
    scanf("%f", &AREA3);

    printf("\nÓtimo, agora escolha um PIB para sua cidade!\n");
    scanf("%f", &PIB3);

    printf("\nÓtimo, agora escolha o número de pontos turísticos que sua cidade terá!\n");
    scanf("%f", &PT3);

    // Quarta Carta

    printf("\nPara começar a registrar sua quarta carta escolha um estado, entre a letra A até H!\n");
    scanf(" %c", &EST4);

    printf("\nMuito bem, agora que você escolheu um estado, escolha um número para essa carta(entre 01 e 04)!\n");
    scanf("%d", &COD4);

    printf("\nBoa, agora escolha um nome para a cidade, uma única palavra!\n");
    scanf("%s", &CID4);

    printf("\nÓtimo nome, agora escolha o tamanho da população de sua cidade!\n");
    scanf("%d", &POP4);

    printf("\nOk, agora escolha o tamanho da sua cidade em km²!\n");
    scanf("%f", &AREA4);

    printf("\nÓtimo, agora escolha um PIB para sua cidade!\n");
    scanf("%f", &PIB4);

    printf("\nÓtimo, agora escolha o número de pontos turísticos que sua cidade terá!\n");
    scanf("%f", &PT4);
    printf("\n\n\n");

    // Visualizar Cartas

    printf("Muito bem, agora que você registrou todas as cartas, vamos visualiza-las! Digite '1' para ver as 2 primeiras cartas!");
    scanf("%d", &continuar);
    printf("\n\n\n");


    // Visualizador da Carta 1

    printf("Estado: %c\n", EST1);
    printf("Código da Carta: %d\n", COD1);
    printf("Nome da Cidade: %s\n", CID1);
    printf("População: %d\n", POP1);
    printf("Área: %f\n", AREA1);
    printf("PIB: %f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", PT1);
    printf("\n\n");

    // Visualizador da Carta 2

    printf("Estado: %c\n", EST2);
    printf("Código da Carta: %d\n", COD2);
    printf("Nome da Cidade: %s\n", CID2);
    printf("População: %d\n", POP2);
    printf("Área: %f\n", AREA2);
    printf("PIB: %f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", PT2);
    printf("\n\n");

    // Visualizar Cartas 2

    printf("Digite '1' para ver a 3° e 4° carta!");
    scanf("%d", &continuar);
    printf("\n\n\n");

    // Visualizador da Carta 3

    printf("Estado: %c\n", EST3);
    printf("Código da Carta: %d\n", COD3);
    printf("Nome da Cidade: %s\n", CID3);
    printf("População: %d\n", POP3);
    printf("Área: %f\n", AREA3);
    printf("PIB: %f\n", PIB3);
    printf("Número de Pontos Turísticos: %d\n", PT3);
    printf("\n\n");

    // Visualizador da Carta 4

    printf("Estado: %c\n", EST4);
    printf("Código da Carta: %d\n", COD4);
    printf("Nome da Cidade: %s\n", CID4);
    printf("População: %d\n", POP4);
    printf("Área: %f\n", AREA4);
    printf("PIB: %f\n", PIB4);
    printf("Número de Pontos Turísticos: %d\n", PT4);

    printf("\n\n");
    printf("Esse foi o jogo, obrigado por jogar, atualizações em breve! Desenvolvedor: Lucas Ravi");

    return 0;


}