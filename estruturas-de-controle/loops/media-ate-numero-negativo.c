#include <stdio.h>

int main()
{
    // Variavel para armazenar a soma, o numero informado e a quantidade de numeros
    int media = 0, input, count = 0;

    // Loop infinito que so termina quando um numero negativo for informado
    while (1)
    {
        // Pede um numero ao usuario
        printf("Informe um numero: ");
        scanf("%i", &input);

        // Se o numero for negativo, encerra o programa
        if (input < 0)
        {
            // Verifica se existe algum numero para calcular a media
            if (media > 0)
                printf("Media: %i", media / count);

            break;
        }

        // Conta quantos numeros foram informados
        count++;

        // Soma o numero informado na variavel media
        media += input;
    }

    return 0;
}