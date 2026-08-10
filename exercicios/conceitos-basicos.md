# Lista de questões
## Assunto: variáveis e operadores

## 1. Conceitos básicos

### A - O que é um arquivo de Código-fonte

É um conjunto de instruções escritas em uma linguagem de progamação que compõe um software.


### B - O que é um compilador e porque ele é necessário?

É um software responsavel por traduzir códigos-fonte escritos em linguagens de progamação em um código que possa ser executado pela máquina.

Ele e necessário porque, sem ele os softwares teriam que ser escritos diretamente em linguagem de maquina, o que seria muito complexo e difícil para o ser humano.


### C - Para que serve a Função `main`

A função `main` e a principal função do código escrito na linguagem `C`, ela e responsavel por iniciar o progama, é ela também contêm as instruções a serem executadas, além de poder chamar outras funções durante a execução do progama.


### D - O que faz a diretiva `#include`

A diretiva `#include` e utilizada para incluir arquivos de cabeçalho (headers) no código-fonte, o conteúdo do `header` incluído é inserido no código-fonte, permitindo que o progama possa utilizar às funções, tipos e declarações do `header` incluído no topo do progama.

### E - Por que precisamos incluir o arquivo `stdio.h` nos nossos progamas?

Não é obrigatório incluir o `stdio.h` em todos os programas em C. Entretanto, esse header é utilizado em muitos programas porque disponibiliza declarações de funções relacionadas à entrada e saída padrão, como `printf()` para exibir informações no terminal e `scanf()` para receber dados do usuário.

### F - Por que o scanf precisa do `&` nas variáveis? E por que o printf não precisa?

O operador `&` serve para obter o endereço de memória da variável. O `printf` não precisa dele porque, ao passar a variável como argumento, ele recebe o valor armazenado nela para poder lê-lo e exibi-lo.

Já o `scanf` precisa modificar o conteúdo da variável, então precisa receber seu endereço de memória para saber exatamente onde armazenar o novo valor.

### G - Oque é uma variável?

Uma variável é uma região da memória reservada pelo programa para armazenar dados. Essa região é identificada por um nome, que permite ao programa acessar e manipular o valor armazenado nela.

### H - O que é um tipo de dado de uma variável?

O tipo de dado de uma variável informa ao compilador quanto espaço ela precisa ocupar na memória e como os dados armazenados naquela região devem ser interpretados.

### I - Qual é a diferença entre 'A' e "A"?

A diferença é que `'A'` representa um único caractere, enquanto `"A"` representa uma string.

As aspas simples são utilizadas para representar constantes de caractere, enquanto as aspas duplas são utilizadas para representar strings, que são sequências de caracteres terminadas pelo caractere nulo `\0`.

### J - Qual o valor de x na expressão: int x = 5.6; e por que isso acontece?

O valor armazenado será `5`, porque a variável foi declarada como `int`, que representa valores inteiros. Ao atribuir o valor `5.6`, ocorre uma conversão de `double` para `int`, realizando o truncamento da parte decimal e armazenando apenas o valor inteiro `5`.

### K - Qual o valor de x na expressão: int x = 'a'; e por que isso acontece?

O valor é `97`, porque as aspas simples representam uma constante de caractere. Como os computadores armazenam dados como valores numéricos, durante a compilação o caractere é representado por um valor numérico correspondente à codificação utilizada.

Em sistemas que utilizam a tabela ASCII, como neste exemplo, o caractere `'a'` corresponde ao valor `97`.

---

## 2. Faça um progama que leia três npumeros e calcule a média.

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

## 3. Faça um progama que calcule a área de um triângulo.

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

## 4. Faça um progama que calcule a área e o volume de uma esfera.

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

## 5. Faça um progama que calcule a área e o volume de uma esfera.

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

## 6. Escreva um progama para calcular a soma de todos os números de 1 até um número inteiro positivo informado pelo usuário.

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

## 7. Faça um progama onde o usuário insiere dois números. utilize o operador ternário para verificar se o número é par ou ímpar. Imprima 1 se o núm,ero for par e 0 se o número for ímpar.

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

## 8. Faça um progama que recebe um número digitado pelo usuário e utiliza o operador ternário para verificar se ele pode botar (idade maior ou igual a 16 anos). Imprima 1 se o usuário pode votar e 0 se não puder.

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

## 9. Faça um progama que recebe a idade de um usuário e tuiliza o operador ternário para verificar se ele pode votar (idade maior ou igual a 16 anos). Imprima 1 se o usuário pode votar e 0 se não puder.

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

## 10. Faça um progama que recebe o valor de um produto e utiliza o operador ternário para aplicar um desconto de 10% caso o valor seja maior que 100. Imprima o valor final do produto após o desconto ser aplicado, se aplicável.

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

## 11. Faça um progama que recebe a nota final de um estudante e utiliza o operador ternário para determinar se ele passou ou não. Considere que a nota mínima para a paorvação é 60. Imprima 1 se o estudante passou e 0 se não passou.

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

## 12.Faça um progama que recebe um número e utiliza o operador ternário para classificá-lo como positivo, negativo ou zero. Imprima 1 para positivo, -1 para negativo e 0 para zero.

```c
#include <stdio.h>

void main() {
    int n;

    printf("informe um numero: ");
    scanf("%i", &n);

    printf("===(%i)===", n == 0 ? 0 : n > 0 ? 1 : -1);
}
```
