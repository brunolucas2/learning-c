# Exercícios de Prática — Estruturas de Repetição

Exercícios destinados à prática das estruturas de repetição em C.

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

**Conceitos:** `for`, operador `%`.

---

## 4. Números ímpares

Mostre todos os números ímpares entre `1` e `100`.

**Conceitos:** `for`, operador `%`.

---

## 5. Tabuada

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

## 6. Soma de números

Leia `10` números inteiros e calcule a soma de todos eles.

**Conceitos:** repetição e acumuladores.

---

## 7. Média de números

Leia `5` números e calcule a média deles.

**Conceitos:** repetição, acumuladores e divisão.

---

## 8. Contagem de positivos e negativos

Leia `10` números inteiros e informe quantos são positivos e quantos são negativos.

Considere o `0` separadamente.

**Conceitos:** `for`, `if`, contadores.

---

## 9. Maior número

Leia `10` números inteiros e encontre o maior valor digitado.

**Conceitos:** repetição e comparação.

---

## 10. Menor número

Leia `10` números inteiros e encontre o menor valor digitado.

**Conceitos:** repetição e comparação.

---

## 11. Fatorial

Leia um número inteiro positivo e calcule seu fatorial.

Exemplo:

```text
5! = 5 × 4 × 3 × 2 × 1
5! = 120
```

**Conceitos:** `for`, acumuladores.

---

## 12. Potência

Leia uma base e um expoente inteiro positivo.

Calcule a potência utilizando repetição, sem utilizar uma função pronta para potência.

**Conceitos:** repetição e acumuladores.

---

## 13. Soma dos números pares

Leia um número `N` e calcule a soma de todos os números pares entre `1` e `N`.

**Conceitos:** `for`, `if`, acumuladores.

---

## 14. Soma dos números ímpares

Leia um número `N` e calcule a soma de todos os números ímpares entre `1` e `N`.

**Conceitos:** `for`, `if`, acumuladores.

---

## 15. Divisores de um número

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

## 16. Quantidade de divisores

Leia um número inteiro e informe quantos divisores ele possui.

**Conceitos:** repetição, `%` e contadores.

---

## 17. Número primo

Leia um número inteiro e determine se ele é primo.

**Conceitos:** repetição, `%`, contadores e condicionais.

---

## 18. Sequência de Fibonacci

Leia um número `N` e mostre os primeiros `N` termos da sequência de Fibonacci.

Exemplo:

```text
0 1 1 2 3 5 8 13 21...
```

**Conceitos:** repetição e atualização de variáveis.

---

## 19. Média até número negativo

Leia números continuamente e calcule a média dos números positivos digitados.

A leitura deve parar quando o usuário informar um número negativo.

O número negativo não deve fazer parte da média.

**Conceitos:** `while`, condição de parada e acumuladores.

---

## 20. Senha

Crie uma senha definida no programa.

Peça a senha ao usuário repetidamente até que ele informe a senha correta.

Quando acertar, mostre uma mensagem de acesso permitido.

**Conceitos:** `while`, condição de parada e condicionais.

---

## 21. Menu interativo

Crie um menu que continue sendo exibido até que o usuário escolha a opção de sair:

```text
1 - Somar
2 - Subtrair
3 - Multiplicar
4 - Dividir
5 - Sair
```

O programa deve executar a operação escolhida e depois retornar ao menu.

**Conceitos:** `while`, condicionais e operações aritméticas.

---

## 22. Validação de entrada

Peça ao usuário um número entre `1` e `10`.

Enquanto o usuário informar um valor inválido, continue solicitando um novo número.

Quando o valor for válido, mostre-o na tela.

**Conceitos:** `while` e validação de entrada.

---

## 23. Número secreto

Defina um número secreto no programa.

Peça ao usuário para tentar adivinhar o número.

Enquanto ele não acertar, informe se o palpite foi maior ou menor que o número secreto.

Ao acertar, mostre uma mensagem de sucesso.

**Conceitos:** `while`, condicionais e comparação.

---

## 24. Soma até zero

Leia números inteiros continuamente e some todos eles.

A execução deve terminar quando o usuário digitar `0`.

O `0` não deve ser adicionado à soma.

**Conceitos:** `while`, condição de parada e acumuladores.

---

## 25. Repetição com `do while`

Faça um programa que peça ao usuário um número entre `1` e `100`.

Enquanto o valor estiver fora desse intervalo, solicite novamente.

Utilize obrigatoriamente `do while`.

**Conceitos:** `do while` e validação de entrada.

---

## 26. Contagem de tentativas

Crie um programa que permita ao usuário realizar no máximo `5` tentativas para acertar uma senha.

Informe quantas tentativas ainda estão disponíveis.

Se acertar antes das `5` tentativas, encerre o programa.

**Conceitos:** `for` ou `while`, contador e condição de parada.

---

## 27. Números primos em um intervalo

Leia dois números inteiros e mostre todos os números primos existentes entre eles.

**Conceitos:** loops aninhados, `%` e condicionais.

---

## 28. Tabuadas

Mostre as tabuadas de `1` até `10`.

Exemplo:

```text
1 x 1 = 1
1 x 2 = 2
...

2 x 1 = 2
2 x 2 = 4
...
```

**Conceitos:** loops aninhados.

---

## 29. Triângulo de asteriscos

Leia um número `N` e desenhe um triângulo utilizando `*`.

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

## 30. Pirâmide de asteriscos

Leia um número `N` e desenhe uma pirâmide utilizando `*`.

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

### Básico

* [ ] 1. Contagem de 1 até 10
* [ ] 2. Contagem regressiva
* [ ] 3. Números pares
* [ ] 4. Números ímpares
* [ ] 5. Tabuada
* [ ] 6. Soma de números
* [ ] 7. Média de números
* [ ] 8. Contagem de positivos e negativos
* [ ] 9. Maior número
* [ ] 10. Menor número

### Intermediário

* [ ] 11. Fatorial
* [ ] 12. Potência
* [ ] 13. Soma dos números pares
* [ ] 14. Soma dos números ímpares
* [ ] 15. Divisores de um número
* [ ] 16. Quantidade de divisores
* [ ] 17. Número primo
* [ ] 18. Sequência de Fibonacci
* [ ] 19. Média até número negativo
* [ ] 20. Senha

### Avançado

* [ ] 21. Menu interativo
* [ ] 22. Validação de entrada
* [ ] 23. Número secreto
* [ ] 24. Soma até zero
* [ ] 25. Repetição com `do while`
* [ ] 26. Contagem de tentativas
* [ ] 27. Números primos em um intervalo
* [ ] 28. Tabuadas
* [ ] 29. Triângulo de asteriscos
* [ ] 30. Pirâmide de asteriscos
