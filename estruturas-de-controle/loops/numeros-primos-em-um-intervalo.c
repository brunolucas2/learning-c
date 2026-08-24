#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Insira o primeiro numero: ");
    scanf("%i", &num1);

    printf("Insira o segundo numero: ");
    scanf("%i", &num2);

    printf("\nNumeros Primos:\n");

    for (int i = num1; i <= num2; i++)
    {
        int count = 0;

        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }

        if (count == 2)
            printf("%i ", i);
    }

    return 0;
}