#include <stdio.h>

int main()
{
    int num;

    for (int i = 0; i < 5; i++)
    {
        printf("Seu numero: ");
        scanf("%d", &num);

        if (num == 0)
        {
            printf("Seu numero e igual a zero\n\n");
        }
        else if (num % 2 == 0)
        {
            printf("Seu numero e Par\n\n");
        }
        else
        {
            printf("Seu numero e Impar\n\n");
        }
    }
}