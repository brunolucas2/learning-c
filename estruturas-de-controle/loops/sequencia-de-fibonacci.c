#include <stdio.h>

int main()
{
    int N;
    int num1 = 0, num2 = 1, aux;

    printf("Informe a quantidade de termos da sequencia Fibonacci que voce quer ver: ");
    scanf("%i", &N);

    printf("%i %i ", num1, num2);

    for (int i = 2; i < N; i++){
        printf("%i ", num1 + num2);
        aux = num1;
        num1 = num2;
        num2 += aux;
    }
}