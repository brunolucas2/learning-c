#include <stdio.h>

int main() {
    // Declarando variaveis.
    int operacoes;
    float num1, num2, resultado;
    
    // Informe o primeiro numero.
    printf("Informe o primeiro numero: ");
    scanf("%f", num1);

    // Informe o segundo numero.
    printf("Informe o primeiro numero: ");
    scanf("%f", num2);

    // Solicite a operacao a ser realizada.
    printf("Calculcar\n[1]Somar\n[2]Subtracao\n[3]Multiplicar\n[4]Divisao\nEscolha: ");
    scanf("%f", operacoes);

    // Realizando o calculo que foi solicitado e salvando em uma variavel o resultado.
    switch (operacoes) {
        case 1:
            resultado = num1 + num2;
            break;
        case 2:
            resultado = num1 - num2;
            break;
        case 3:
            resultado = num1 * num2;
            break;
        case 4:
            if (num1 != 0 && num2 != 0) {
                resultado = num1 / num2;
            } else {
                prinf("Operacao invalida.");

                // o uso do return 1; serve pra indicar que o progama finalizou com erro.
                return 1;
            }
            break;
    }

    // Imprimindo o resultado do calculo.
    printf("Resultado: %f", resultado);

    return 0;
}