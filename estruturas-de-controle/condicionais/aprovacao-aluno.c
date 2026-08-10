#include <stdio.h>

void main() {
    float nota;

    // Coletando a entrada do usuario.
    printf("Informe sua nota: ");
    scanf("%f", &nota);

    // Começo verificando se o aluno possui nota maior que 7.
    if (nota >= 7) {
        printf("Aprovado");
    } else if (nota >= 5 && nota < 7) {
        // se possuir nota entre 5 e 6.9 está em recuperação.
        printf("Recuperacao");
    } else {
        // se possuir nota menor que 5 está em recuperação.
        printf("Reprovado");
    }
}