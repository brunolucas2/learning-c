#include <stdio.h>

int main()
{
    int numeros[6] = {4, 8, 2, 15, 7, 3};
    int m = 0;
    int length = (sizeof(numeros) / sizeof(numeros[0]));

    for (int i = length - 1; i > 0; i--)
    {
        if (numeros[m] < numeros[i])
            m = i;
    }
    printf("Indicie do maior: %i", m);
    return 0;
}