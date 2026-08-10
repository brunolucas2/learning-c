# Exercícios de Prática — Estruturas Condicionais

Exercícios destinados à prática de estruturas condicionais em C.

As soluções devem ser implementadas individualmente na pasta `tasks`.

---

## 1. Verificação de número positivo

Leia um número inteiro e informe se ele é **positivo**, **negativo** ou **zero**.

**Conceitos:** `if`, `else if`, `else`.

---

## 2. Número par ou ímpar

Leia um número inteiro e informe se ele é **par** ou **ímpar**.

**Conceitos:** `if`, `else`, operador `%`.

---

## 3. Maior entre dois números

Leia dois números inteiros e informe qual deles é o maior.

Caso os dois sejam iguais, informe que são iguais.

**Conceitos:** `if`, `else if`, `else`.

---

## 4. Maior entre três números

Leia três números inteiros e determine qual é o maior entre eles.

**Conceitos:** condicionais encadeadas.

---

## 5. Aprovação do aluno

Leia a nota de um aluno.

* Nota maior ou igual a `7`: **Aprovado**
* Nota entre `5` e `6.9`: **Recuperação**
* Nota menor que `5`: **Reprovado**

**Conceitos:** `if`, `else if`, `else`.

---

## 6. Classificação por idade

Leia a idade de uma pessoa e classifique-a como:

* `0–12`: Criança
* `13–17`: Adolescente
* `18–59`: Adulto
* `60+`: Idoso

**Conceitos:** condicionais encadeadas.

---

## 7. Verificação de maioridade

Leia a idade de uma pessoa e informe se ela pode ou não ser considerada maior de idade.

**Conceitos:** `if`, `else`.

---

## 8. Calculadora simples

Leia dois números e um operador (`+`, `-`, `*` ou `/`).

Realize a operação correspondente e mostre o resultado.

Caso o usuário tente realizar uma divisão por zero, informe que a operação é inválida.

**Conceitos:** `if`, `else if`, `else`, operadores relacionais.

---

## 9. Ano bissexto

Leia um ano e determine se ele é bissexto.

Um ano é bissexto quando:

* é divisível por `4` e não é divisível por `100`; ou
* é divisível por `400`.

**Conceitos:** condicionais e operadores lógicos.

---

## 10. Número dentro de um intervalo

Leia um número inteiro e verifique se ele está entre `10` e `50`.

Informe se o número está ou não dentro do intervalo.

**Conceitos:** operadores relacionais e lógicos.

---

## 11. Maior e menor

Leia três números inteiros e informe:

* o maior número;
* o menor número.

**Conceitos:** condicionais encadeadas.

---

## 12. Classificação de triângulo

Leia os três lados de um triângulo e determine se ele é:

* Equilátero;
* Isósceles;
* Escaleno.

Considere também se os três valores realmente podem formar um triângulo.

**Conceitos:** `if`, `else if`, operadores lógicos.

---

## 13. Desconto de compra

Leia o valor de uma compra.

* Até R$ 100: sem desconto.
* De R$ 100,01 até R$ 500: 10% de desconto.
* Acima de R$ 500: 15% de desconto.

Mostre o valor original, o desconto e o valor final.

**Conceitos:** condicionais e operações aritméticas.

---

## 14. Verificação de senha

Defina uma senha no programa.

Solicite uma senha ao usuário e informe se ela está correta ou incorreta.

**Conceitos:** `if`, `else`, comparação de valores.

---

## 15. Sistema de acesso

Leia a idade de uma pessoa e se ela possui autorização (`1` para sim e `0` para não).

A pessoa poderá entrar somente se:

* tiver 18 anos ou mais; **e**
* possuir autorização.

Caso contrário, o acesso deve ser negado.

**Conceitos:** `if`, operador lógico `&&`.

---

## 16. Temperatura

Leia uma temperatura em graus Celsius e classifique-a:

* abaixo de `10°C`: Frio
* de `10°C` até `25°C`: Agradável
* acima de `25°C`: Quente

**Conceitos:** `if`, `else if`, `else`.

---

## 17. Salário e faixa salarial

Leia o salário de uma pessoa e classifique-o:

* até R$ 1.500: Faixa 1
* de R$ 1.500,01 até R$ 3.000: Faixa 2
* acima de R$ 3.000: Faixa 3

**Conceitos:** condicionais encadeadas.

---

## 18. Sistema de notas

Leia três notas de um aluno, calcule a média e informe:

* média maior ou igual a `7`: Aprovado;
* média entre `5` e `6.9`: Recuperação;
* média menor que `5`: Reprovado.

Além disso, verifique se alguma das notas individuais é igual a `0`. Nesse caso, o aluno deve ser reprovado independentemente da média.

**Conceitos:** condicionais compostas e operadores lógicos.

---

## 19. Verificação de intervalo

Leia um número inteiro e informe em qual intervalo ele está:

* menor que `0`;
* entre `0` e `10`;
* entre `11` e `20`;
* maior que `20`.

**Conceitos:** múltiplas condições.

---

## 20. Menu de operações

Crie um menu:

```text
1 - Somar
2 - Subtrair
3 - Multiplicar
4 - Dividir
5 - Sair
```

Leia a opção escolhida pelo usuário e execute a operação correspondente.

Caso seja escolhida uma opção inexistente, informe que a opção é inválida.

**Conceitos:** condicionais, operadores e entrada de dados.

---

## Progressão

Os exercícios estão organizados aproximadamente do mais simples para o mais complexo.

### Básico

* [ ] 1. Verificação de número positivo
* [ ] 2. Número par ou ímpar
* [ ] 3. Maior entre dois números
* [ ] 4. Maior entre três números
* [ ] 5. Aprovação do aluno
* [ ] 6. Classificação por idade
* [ ] 7. Verificação de maioridade

### Intermediário

* [ ] 8. Calculadora simples
* [ ] 9. Ano bissexto
* [ ] 10. Número dentro de um intervalo
* [ ] 11. Maior e menor
* [ ] 12. Classificação de triângulo
* [ ] 13. Desconto de compra
* [ ] 14. Verificação de senha

### Avançado

* [ ] 15. Sistema de acesso
* [ ] 16. Temperatura
* [ ] 17. Salário e faixa salarial
* [ ] 18. Sistema de notas
* [ ] 19. Verificação de intervalo
* [ ] 20. Menu de operações
