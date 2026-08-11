#include <stdio.h>

int main()
{
    int num1, num2, num3;
    int maior, menor;
    // Solicitando os numeros.
    printf("Informe o primeiro numero: ");
    scanf("%i", &num1);

    printf("Informe o primeiro numero: ");
    scanf("%i", &num2);

    printf("Informe o primeiro numero: ");
    scanf("%i", &num3);

    // Verificando qual e o Maior e o Menor entre os 3 números solicitados.

    if (num1 >= num2 && num1 >= num3)
    {
        maior = num1;

        if (num2 > num3)
            menor = num3;
        else
            menor = num2;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        maior = num2;

        if (num1 > num3)
            menor = num3;
        else
            menor = num1;
    }
    else
    {
        maior = num3;

        if (num1 > num2 ) 
            menor = num2;
        else 
            menor = num1;
    }

    printf("Maior: %d | Menor: %d", maior, menor);
    return 0;
}