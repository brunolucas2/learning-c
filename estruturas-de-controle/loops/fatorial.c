#include <stdio.h>

int main()
{
    int num, fatorial = 1;

    printf("Informe um numero: ");
    scanf("%i", &num);

    for (int i = 1; i < (num+1); i++){
        fatorial *= i;
    }
    
    printf("numero %d | Seu Fatorial: %i", num, fatorial);
}