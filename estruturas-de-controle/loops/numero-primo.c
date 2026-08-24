#include <stdio.h>

int main()
{
    int num, divisores = 0;

    printf("Informe um numero: ");
    scanf("%i", &num);

    for (int i = 1; i < num + 1; i++)
    {
        if (num % i == 0)
            divisores++;
    }

    if (divisores == 2)
        printf("%i e um numero primo", num);
    else
        printf("%i nao e um numero primo", num);

    return 0;
}