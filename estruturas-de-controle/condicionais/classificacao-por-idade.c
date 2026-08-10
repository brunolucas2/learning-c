#include <stdio.h>

void main() {
    // Declarando a variavel que vai armazenar a idade do usuario.
    int idade;
    
    //Coletando a idade do usuario por meio da entrada no terminal.
    printf("Informe sua idade: ");
    scanf("%i", &idade);

    /* Lógica das idades:
    0-12 Criança
    13-17 Adolescente
    18-59 Adulto
    60+ Idoso
    */

    if (idade >=0 && idade <= 12) {
        printf("Crianca");
    } else if (idade >= 13 && idade <= 17){
        printf("Adolescente");
    } else if (idade >= 18 && idade <= 59) {
        printf("Adulto");
    } else {
        printf("Idoso");
    }
}