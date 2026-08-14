# Lista de Exercicios em C

## Assunto: Estruturas condicionais.

## 1. Faça um progama que leia um inteiro inserido pelo usuário, e imprima "Positivo" se o número for maior que zero, "Negativo" se for menor que zero.

### Resposta:

```c
#include <stdio.h>

int main() 
{
    int number;

    printf("Insira um número inteiro: ");
    scanf("%i", &number);

    if (number > 0)
        printf("Positivo");
    else if (number < 0)
        printf("Negativo");
    else
        printf("Zero");

    return 0;
}
```

## 2. Escreva um progama que leia um número inteiro do usuário (de 1 a 7) e imprima o dia da semana correspondente (1 para Segunda-feira, 2 para Terça-feira, etc.) Se a entrada não estiver entre 1 e 7, imprima "Dia inválido".

### Resposta:

```c
#include <stdio.h>
#include <string.h>


int main() 
{
    int numero_do_dia;
    char dia_da_semana[14];

    printf("Digite o numero da semana para saber o seu dia: ");
    scanf("%i", &numero_do_dia);

    switch (numero_do_dia) {
        case 1:
            strcpy(dia_da_semana, "Segunda-Feira");
            break;

        case 2:
            strcpy(dia_da_semana, "Terça-Feira");
            break;

        case 3:
            strcpy(dia_da_semana, "Quarta-Feira");
            break;

        case 4:
            strcpy(dia_da_semana, "Quinta-Feira");
            break;

        case 5:
            strcpy(dia_da_semana, "Sexta-Feira");
            break;

        case 6:
            strcpy(dia_da_semana, "Sabado");
            break;

        case 7:
            strcpy(dia_da_semana, "Domingo");
            break;

        default:
            printf("Dia invalido");
            break;
    }

    printf("Dia: %s\n", dia_da_semana);

    return 0;
}
```

## 3. Escreva um progama que leia dois números inteiros do usuário e imprima o maior dos dois. Se ambos forem iguais, imprima o caractere '='.

```c
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Insira dois números inteiros\n");

    printf("Primeiro número: ");
    scanf("%i", &num1);

    printf("Segundo número: ");
    scanf("%i",&num2);

    if (num1 == num2)
    {
        printf("=");
    }

    printf("Maior: %i", num1 > num2 ? num1 : num2);

    return 0;
}
```

## 4. Escreva um progama que leia um número inteiro representando a nota de um aluno e imprima a nota correspondente com base na seguinte escala:

* 90 - 100: 'A'
* 80 - 89: 'B'
* 70-79: 'C'
* 60-69: 'D'
* Abaixo de 60: 'F'

### Resposta:

```c
#include <stdio.h>

int main()
{
    float nota;

    printf("Insira sua nota abaixo\n")
    printf("Nota: ");
    scanf("%f", &nota);

    if (nota < 0 || nota > 100)
    {
        printf("Numero invalido");
        return 1;
    }

    if (nota >= 90 && nota <=  100)
        printf("A");
    else if (nota >= 80 && nota < 90)
        printf("B");
    else if (nota >= 70 && nota < 79)
        printf("C");
    else if (nota >= 60 && nota < 70)
        printf("D");

    return 0;
}
```

## 5. Faça um progama que peça para o usuário digitar um número entre 2 e 10 e informe se ele é primo ou não utilizando o comando `switch`.

### Resposta:

```c
#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero entre 2 e 10: ");
    scanf("%i", &numero);

    switch (numero)
    {
        case 2:
        case 3:
        case 5:
        case 7:
            printf("O numero e primo.");
            break;

        case 4:
        case 6:
        case 8:
        case 9:
        case 10:
            printf("O numero nao e primo.");
            break;

        default:
            printf("Numero invalido.");
            break;
    }

    return 0;
}
```



# Perguntas

### a) Quais são as duas principais diferenças do uso de `if-else` aninhados para o `switch`?

1. O `if-else` permite trabalhar com condições mais complexas, utilizando operadores relacionais e lógicos, enquanto o `switch` é utilizado principalmente para comparar uma variável com valores constantes específicos.


### b) Quais instruções pertencem ao primeiro `if`? É necessário o uso de chaves no primeiro `if` para abarcar o segundo `if` e seu `else`? Justifique.

As instruções pertencentes ao primeiro `if` dependem da estrutura do código. Quando não são utilizadas chaves, apenas a primeira instrução após o `if` pertence a ele.

Não é necessário utilizar chaves no primeiro `if` para que o segundo `if` e seu `else` sejam executados, porém, é importante observar a regra do `else`: ele sempre será associado ao `if` mais próximo que ainda não possui um `else`.

Por isso, o uso de chaves pode ser recomendado para deixar a estrutura do código mais clara e evitar ambiguidades, principalmente em casos de `if` aninhados.
