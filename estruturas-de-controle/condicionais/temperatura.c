#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>

void main() {

    // Declarando as variaveis que vao armazenar a temperatura inserida pelo usuario em escala Celsius.
    double celsius;
    // Declarando a variavel que vai armazenar a temperatura em Fahrenheit.
    double fahrenheit;

    // Declarando a variavel que vai armazenar a opção de escala de temperatura que o usuario optar.
    int menu;

    // Classificação 
    char classificacao[11];

    // Solicitando ao usuario uma temperatura em graus Celsius.
    printf("Informe a temperatura em graus Celsius: ");
    scanf("%lf", &celsius);

    Sleep(1000);

    system("cls");

    printf("Para ver a classificacao da temperatura recebida\n");
    printf("Insira em que escala deseja visualizar\n");
    printf("[1]Celsius\n");
    printf("[2]Fahrenheit\n");
    printf("Escala escolhida: ");
    scanf("%i",&menu);


    // Realizando a classificação da temperatura.
    if (celsius < 10) 
        strcpy(classificacao, "Frio");
    else if (celsius >= 10 && celsius <= 25)
        strcpy(classificacao, "Agradavel");
    else
        strcpy(classificacao, "Quente");

    // Conversão de Celsius para Fahrenheit.
    fahrenheit = celsius * 9 / 5 + 32;

    Sleep(1000);

    system("cls");

    if (menu == 1)
        printf("Temperatura: %.2lf°C\nClassificacao: %10s", celsius,classificacao);
    else
        printf("Temperatura: %.2lf°C\nClassificacao: %10s", fahrenheit,classificacao);
}