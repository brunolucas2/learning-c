#include <stdio.h>

int main()
{
    int num;

    printf("Informe o numero: ");
    scanf("%i", &num);

    for (int i = 1; i < 11; i++)
    {
        printf("%ix%i=%i\n", num, i, num*i);
    }
}