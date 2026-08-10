# Lista de questões
## Assunto: variáveis e operadores

## 1. Conceitos básicos

### A - Código-fonte

Código-fonte é um conjunto de instruções escritas em uma linguagem de programação que compõem um software.

### B - Compilador

O compilador é um software responsável por traduzir o código escrito em uma linguagem de programação para código que possa ser executado pela máquina. Ele realiza a conversão do código-fonte, passando por diferentes etapas até gerar o código de máquina e, no caso do C, normalmente um arquivo executável.

O compilador é necessário porque, sem ele, teríamos que fornecer as instruções diretamente em linguagem de máquina, o que seria muito mais complexo e difícil para um ser humano.

### C - Função `main`

A função `main` na linguagem de programação C é a função principal do programa. É a partir dela que a execução do programa normalmente começa. Ela contém as instruções que devem ser executadas e também pode chamar outras funções durante a execução do programa.

### D - Diretiva `#include`

A diretiva `#include` é utilizada para incluir arquivos de cabeçalho no código-fonte, permitindo que o programa tenha acesso às funções, tipos e definições declarados nesses arquivos.

Por exemplo, `#include <stdio.h>` inclui o cabeçalho da biblioteca padrão de entrada e saída, permitindo o uso de funções como `printf` e `scanf`.

### E - `stdio.h`

Não é obrigatório incluir o `stdio.h` em todos os programas em C. Entretanto, esse header é utilizado em muitos programas porque disponibiliza declarações de funções relacionadas à entrada e saída padrão, como `printf()` para exibir informações no terminal e `scanf()` para receber dados do usuário.

### F - Operador `&`

O operador `&` serve para obter o endereço de memória da variável. O `printf` não precisa dele porque, ao passar a variável como argumento, ele recebe o valor armazenado nela para poder lê-lo e exibi-lo.

Já o `scanf` precisa modificar o conteúdo da variável, então precisa receber seu endereço de memória para saber exatamente onde armazenar o novo valor.

### G - Variável

Uma variável é uma região da memória reservada pelo programa para armazenar dados. Essa região é identificada por um nome, que permite ao programa acessar e manipular o valor armazenado nela.

### H - Tipo de dado

O tipo de dado de uma variável informa ao compilador quanto espaço ela precisa ocupar na memória e como os dados armazenados naquela região devem ser interpretados.

### I - Caractere e string

A diferença é que `'A'` representa um único caractere, enquanto `"A"` representa uma string.

As aspas simples são utilizadas para representar constantes de caractere, enquanto as aspas duplas são utilizadas para representar strings, que são sequências de caracteres terminadas pelo caractere nulo `\0`.

### J - Conversão de `double` para `int`

O valor armazenado será `5`, porque a variável foi declarada como `int`, que representa valores inteiros. Ao atribuir o valor `5.6`, ocorre uma conversão de `double` para `int`, realizando o truncamento da parte decimal e armazenando apenas o valor inteiro `5`.

### K - Valor numérico de um caractere

O valor é `97`, porque as aspas simples representam uma constante de caractere. Como os computadores armazenam dados como valores numéricos, durante a compilação o caractere é representado por um valor numérico correspondente à codificação utilizada.

Em sistemas que utilizam a tabela ASCII, como neste exemplo, o caractere `'a'` corresponde ao valor `97`.

---

## 2. Média de 3 números

```c
#include <stdio.h>

void main() {
    float a, b, c;

    printf("Informe o primeiro numero: ");
    scanf("%f", &a);

    printf("Informe o segundo numero: ");
    scanf("%f", &b);

    printf("Informe o terceiro numero: ");
    scanf("%f", &c);

    float media = (a + b + c) / 3;

    printf("Media dos numeros: %.2f", media);
}
```

---

## 3. Área de um triângulo

```c
#include <stdio.h>

void main() {
    float base, altura, area;

    printf("Base: ");
    scanf("%f", &base);

    printf("Altura: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("Area do triangulo: %.2f", area);
}
```

---

## 4. Área e volume de uma esfera

```c
#include <stdio.h>

void main() {
    float r, area, volume, pi = 3.1415;

    printf("Informe o raio da esfera: ");
    scanf("%f", &r);

    area = 4 * pi * (r * r);
    volume = (4.0 / 3.0) * pi * (r * r * r);

    printf("area: %.2f | volume: %.2f", area, volume);
}
```

---

## 5. Conversor de segundos em horas, minutos e segundos

```c
#include <stdio.h>

void main() {
    int h, m, s, segundos;

    printf("Informe os segundos: ");
    scanf("%i", &segundos);

    h = segundos / 3600;
    m = (segundos % 3600) / 60;
    s = segundos % 60;

    printf("%d:%d:%d", h, m, s);
}
```

---

## 6. Soma de todos os números de 1 até um número inteiro informado pelo usuário

```c
#include <stdio.h>

void main() {
    int soma, input;

    printf("Informe um numero: ");
    scanf("%i", &input);

    soma = input * (input + 1) / 2;

    printf("resultado: %i", soma);
}
```

---

## 7. Menor número

```c
#include <stdio.h>

void main() {
    int a, b;

    printf("Informe o primeiro numero: ");
    scanf("%i", &a);

    printf("Informe o segundo numero: ");
    scanf("%i", &b);

    printf("menor numero: %d", a < b ? a : b);
}
```

---

## 8. Par ou ímpar

```c
#include <stdio.h>

void main() {
    int input;

    printf("Informe um numero: ");
    scanf("%i", &input);

    printf("%s", !(input % 2) ? "par" : "impar");
}
```

---

## 9. Verificar idade

```c
#include <stdio.h>

void main() {
    int idade;

    printf("informe sua idade: ");
    scanf("%i", &idade);

    printf("%d", idade > 18 ? 1 : 0);
}
```

---

## 10. Desconto

```c
#include <stdio.h>

void main() {
    float valor, desconto = 0.10;

    printf("Informe o valor: ");
    scanf("%f", &valor);

    printf("Valor a ser pago: %.2f",
           valor >= 100 ? valor - (valor * desconto) : valor);
}
```

---

## 11. Verificar nota mínima para passar

```c
#include <stdio.h>

void main() {
    int nota;

    printf("Informe sua nota: ");
    scanf("%i", &nota);

    printf("passou?: %i", nota >= 60 ? 1 : 0);
}
```

---

## 12. Positivo ou negativo

```c
#include <stdio.h>

void main() {
    int n;

    printf("informe um numero: ");
    scanf("%i", &n);

    printf("===(%i)===", n == 0 ? 0 : n > 0 ? 1 : -1);
}
```
