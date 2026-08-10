#include <stdio.h>

int main()
{
    // Declarando variaveis que vao receber as entradas dos numeros.
    // É as que vão ser utilizadas pra compor a impressão final: Maior, Meio e Menor.
    int num1, num2, num3, maior, menor, meio;

    //Entrada do usuario
    printf("Digite tres numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);


    // Verifico se os 3 números são iguais
    if (num1 == num2 && num1 == num3)
    {
        printf("Os tres numeros sao iguais\n");
        return 0;
    }

    // Se os 3 números não forem iguais.
    // Começo verificando se o num1 e maior que os outros
    // Se ele for, eu verifico entre os dois numeros que sobraram quem e o maior, assim eu salvo como Meio e menor
    // Essa lógica serve para as 3 verificações abaixo.

    // Assumindo num1 como maior.
    if (num1 >= num2 && num1 >= num3)
    {
        maior = num1;
        if (num2 >= num3)
        {
            meio = num2;
            menor = num3;
        }
        else
        {
            meio = num3;
            menor = num2;
        }
    }

    //Assumindo num2 como maior
    else if (num2 >= num1 && num2 >= num3)
    {
        maior = num2;
        if (num1 >= num3)
        {
            meio = num1;
            menor = num3;
        }
        else
        {
            meio = num3;
            menor = num1;
        }

    // Se o num1 nem o num2 forem maiores que o num2 nas verificações acima
    // Assumo que num3 e o maior.
    } else {
        maior = num3;
        
        if (num1 > num2) {
            meio = num1;
            menor = num2;
        } else {
            meio = num2;
            menor = num1;
        }
    }
    printf("Maior: %d | Meio: %d | Menor: %d\n", maior, meio, menor);

    return 0;
}