#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    for (int a = 1; a <= 10; a++)
    {
        printf("Tabuada do %i\n", a);

        for (int b = 1; b <= 10; b++)
        {
            printf("%i x %i = %d\n", a, b, a * b);
        }

        printf("\n");
    }

    return 0;
}