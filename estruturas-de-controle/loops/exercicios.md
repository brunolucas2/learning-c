# Exercícios de Prática — Estruturas de Repetição

Exercícios destinados à prática das estruturas de repetição na linguagem C.

As soluções devem ser implementadas individualmente na pasta `tasks`.

---

## 1. Contagem de 1 até 10

Faça um programa que mostre os números de `1` até `10`.

**Conceitos:** `for`.

---

## 2. Contagem regressiva

Mostre os números de `10` até `1`.

**Conceitos:** `for`.

---

## 3. Números pares

Mostre todos os números pares entre `1` e `100`.

**Conceitos:** `for` e operador `%`.

---

## 4. Tabuada

Leia um número inteiro e mostre sua tabuada de `1` até `10`.

Exemplo:

```text
5 x 1 = 5
5 x 2 = 10
...
5 x 10 = 50
```

**Conceitos:** `for`.

---

## 5. Soma de números

Leia `10` números inteiros e calcule a soma de todos eles.

**Conceitos:** repetição e acumuladores.

---

## 6. Média de números

Leia `5` números e calcule a média deles.

**Conceitos:** repetição, acumuladores e divisão.

---

## 7. Contagem de positivos e negativos

Leia `10` números inteiros e informe quantos são positivos, negativos e iguais a zero.

**Conceitos:** `for`, `if` e contadores.

---

## 8. Maior número

Leia `10` números inteiros e encontre o maior valor digitado.

**Conceitos:** repetição e comparação.

---

## 9. Fatorial

Leia um número inteiro positivo e calcule seu fatorial.

Exemplo:

```text
5! = 5 × 4 × 3 × 2 × 1
5! = 120
```

**Conceitos:** `for` e acumuladores.

---

## 10. Potência

Leia uma base e um expoente inteiro positivo.

Calcule a potência utilizando repetição, sem utilizar uma função pronta para potência.

Exemplo:

```text
Base: 2
Expoente: 3

Resultado: 8
```

**Conceitos:** repetição e acumuladores.

---

## 11. Soma dos números pares

Leia um número inteiro `N` e calcule a soma de todos os números pares entre `1` e `N`.

**Conceitos:** `for`, `if`, operador `%` e acumuladores.

---

## 12. Divisores de um número

Leia um número inteiro e mostre todos os seus divisores.

Exemplo:

```text
Número: 12

Divisores:
1
2
3
4
6
12
```

**Conceitos:** repetição e operador `%`.

---

## 13. Quantidade de divisores

Leia um número inteiro e informe quantos divisores ele possui.

Exemplo:

```text
Número: 12
Quantidade de divisores: 6
```

**Conceitos:** repetição, operador `%` e contadores.

---

## 14. Número primo

Leia um número inteiro e determine se ele é primo.

Um número primo possui exatamente dois divisores positivos: `1` e ele mesmo.

Exemplo:

```text
Número: 7
7 é um número primo.
```

**Conceitos:** repetição, operador `%`, contadores e condicionais.

---

## 15. Sequência de Fibonacci

Leia um número inteiro `N` e mostre os primeiros `N` termos da sequência de Fibonacci.

Exemplo:

```text
Quantidade de termos: 9

0 1 1 2 3 5 8 13 21
```

**Conceitos:** repetição e atualização de variáveis.

---

## 16. Média até número negativo

Leia números continuamente e calcule a média dos números positivos digitados.

A leitura deve parar quando o usuário informar um número negativo. O número negativo não deve fazer parte da média.

Exemplo:

```text
Números: 10 5 15 -1

Média: 10
```

**Conceitos:** `while`, condição de parada e acumuladores.

---

## 17. Menu interativo

Crie um menu que continue sendo exibido até que o usuário escolha a opção de sair:

```text
1 - Somar
2 - Subtrair
3 - Multiplicar
4 - Dividir
5 - Sair
```

O programa deve solicitar dois números, executar a operação escolhida e depois retornar ao menu.

Na operação de divisão, verifique se o segundo número é diferente de zero.

**Conceitos:** `while`, condicionais e operações aritméticas.

---

## 18. Número secreto

Defina um número secreto no programa.

Peça ao usuário para tentar adivinhar o número. Enquanto ele não acertar, informe se o palpite foi maior ou menor que o número secreto.

Ao acertar, mostre uma mensagem de sucesso.

Exemplo:

```text
Digite seu palpite: 30
O número secreto é maior.

Digite seu palpite: 70
O número secreto é menor.

Digite seu palpite: 50
Você acertou!
```

**Conceitos:** `while`, condicionais e comparação.

---

## 19. Soma até zero

Leia números inteiros continuamente e some todos eles.

A execução deve terminar quando o usuário digitar `0`. O número `0` não deve ser adicionado à soma.

Exemplo:

```text
Números: 5 10 8 0

Soma: 23
```

**Conceitos:** `while`, condição de parada e acumuladores.

---

## 20. Validação de entrada com `do while`

Peça ao usuário um número entre `1` e `100`.

Enquanto o valor estiver fora desse intervalo, solicite um novo número.

Utilize obrigatoriamente a estrutura `do while`.

Exemplo:

```text
Digite um número entre 1 e 100: 150
Valor inválido.

Digite um número entre 1 e 100: -4
Valor inválido.

Digite um número entre 1 e 100: 50
Valor válido: 50
```

**Conceitos:** `do while` e validação de entrada.

---

## 21. Contagem de tentativas para acertar a senha

Crie uma senha dentro do programa.

O usuário terá no máximo `5` tentativas para acertá-la. Após cada erro, informe quantas tentativas ainda estão disponíveis.

Se o usuário acertar antes de utilizar todas as tentativas, encerre o programa e mostre uma mensagem de acesso permitido.

Caso todas as tentativas sejam utilizadas, informe que o acesso foi bloqueado.

Exemplo:

```text
Digite a senha: 1234
Senha incorreta. Restam 4 tentativas.

Digite a senha: 5678
Acesso permitido.
```

**Conceitos:** `for` ou `while`, contadores, condicionais e condição de parada.

---

## 22. Números primos em um intervalo

Leia dois números inteiros e mostre todos os números primos existentes entre eles.

Exemplo:

```text
Início: 1
Fim: 20

Números primos:
2 3 5 7 11 13 17 19
```

**Conceitos:** loops aninhados, operador `%` e condicionais.

---

## 23. Tabuadas de 1 até 10

Mostre todas as tabuadas de `1` até `10`.

Exemplo:

```text
Tabuada do 1:

1 x 1 = 1
1 x 2 = 2
...
1 x 10 = 10

Tabuada do 2:

2 x 1 = 2
2 x 2 = 4
...
2 x 10 = 20
```

Continue até a tabuada do número `10`.

**Conceitos:** loops aninhados.

---

## 24. Triângulo de asteriscos

Leia um número inteiro positivo `N` e desenhe um triângulo utilizando o caractere `*`.

Para `N = 5`:

```text
*
**
***
****
*****
```

**Conceitos:** loops aninhados.

---

## 25. Pirâmide de asteriscos

Leia um número inteiro positivo `N` e desenhe uma pirâmide utilizando o caractere `*`.

Para `N = 5`:

```text
    *
   ***
  *****
 *******
*********
```

**Conceitos:** loops aninhados.

---

# Progressão

## Básico

* [ ] 1. Contagem de 1 até 10
* [ ] 2. Contagem regressiva
* [ ] 3. Números pares
* [ ] 4. Tabuada
* [ ] 5. Soma de números
* [ ] 6. Média de números
* [ ] 7. Contagem de positivos e negativos
* [ ] 8. Maior número

## Intermediário

* [ ] 9. Fatorial
* [ ] 10. Potência
* [ ] 11. Soma dos números pares
* [ ] 12. Divisores de um número
* [ ] 13. Quantidade de divisores
* [ ] 14. Número primo
* [ ] 15. Sequência de Fibonacci
* [ ] 16. Média até número negativo

## Avançado

* [ ] 17. Menu interativo
* [ ] 18. Número secreto
* [ ] 19. Soma até zero
* [ ] 20. Validação de entrada com `do while`
* [ ] 21. Contagem de tentativas para acertar a senha
* [ ] 22. Números primos em um intervalo
* [ ] 23. Tabuadas de 1 até 10
* [ ] 24. Triângulo de asteriscos
* [ ] 25. Pirâmide de asteriscos
