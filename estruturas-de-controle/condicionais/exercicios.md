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

**Conceitos:** condicionais encadeadas e condicionais aninhadas.

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

## 8. Mês do ano

Leia um número de `1` a `12` e informe o mês correspondente.

Caso o número não esteja nesse intervalo, informe que a opção é inválida.

**Conceitos:** `switch`, `case`, `break`, `default`.

---

## 9. Calculadora simples

Leia dois números e um operador (`+`, `-`, `*` ou `/`).

Utilize o operador informado para realizar a operação correspondente.

Caso o usuário tente realizar uma divisão por zero, informe que a operação é inválida.

**Conceitos:** `switch`, `case`, `default`, `if`, operadores aritméticos.

---

## 10. Número dentro de um intervalo

Leia um número inteiro e verifique se ele está entre `10` e `50`.

Informe se o número está ou não dentro do intervalo.

**Conceitos:** operadores relacionais e lógicos, `if`, `else`.

---

## 11. Classificação de triângulo

Leia os três lados de um triângulo e determine se ele é:

* Equilátero;
* Isósceles;
* Escaleno.

Considere também se os três valores realmente podem formar um triângulo.

**Conceitos:** `if`, `else if`, `else`, operadores lógicos e condicionais compostas.

---

## 12. Menu de operações

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

A opção `5` deve encerrar o programa sem realizar nenhuma operação.

Caso seja escolhida a opção de divisão, verifique se o segundo número é diferente de zero antes de realizar a operação.

**Conceitos:** `switch`, `case`, `break`, `default`, `if`, condicionais aninhadas e operadores aritméticos.

---

## 13. Verificação de senha

Defina uma senha numérica no programa.

Solicite a senha ao usuário e informe se ela está correta ou incorreta.

Caso a senha esteja correta, mostre um segundo menu:

```text
1 - Consultar saldo
2 - Fazer depósito
3 - Sair
```

Utilize uma estrutura adequada para tratar as opções do menu.

No caso de depósito, solicite o valor e atualize o saldo.

Não permita depósitos com valor menor ou igual a zero.

**Conceitos:** `if`, `else`, `switch`, `case`, condicionais aninhadas, operadores relacionais e operações aritméticas.

---

## 14. Sistema de acesso

Leia a idade de uma pessoa e se ela possui autorização (`1` para sim e `0` para não).

A pessoa poderá entrar somente se:

* tiver `18` anos ou mais; **e**
* possuir autorização.

Depois de verificar o acesso, informe também o tipo de acesso:

```text
1 - Visitante
2 - Funcionário
3 - Administrador
```

Utilize uma estrutura adequada para tratar o tipo de acesso.

Caso a pessoa não tenha idade ou autorização suficiente, o acesso deve ser negado antes de solicitar o tipo de acesso.

**Conceitos:** `if`, `else`, operador lógico `&&`, `switch`, `case` e condicionais aninhadas.

---

## 15. Temperatura

Leia uma temperatura em graus Celsius e classifique-a:

* abaixo de `10°C`: Frio
* de `10°C` até `25°C`: Agradável
* acima de `25°C`: Quente

Depois, pergunte ao usuário qual escala deseja visualizar:

```text
1 - Celsius
2 - Fahrenheit
```

Mostre a temperatura na escala escolhida.

Utilize a conversão:

```text
F = (C × 9 / 5) + 32
```

Caso o usuário escolha uma opção inexistente, informe que a opção é inválida.

**Conceitos:** `if`, `else if`, `else`, `switch`, `case`, operações aritméticas e validação de entrada.

---

## 16. Salário e faixa salarial

Leia o salário de uma pessoa e classifique-o:

* até R$ 1.500: Faixa 1
* de R$ 1.500,01 até R$ 3.000: Faixa 2
* acima de R$ 3.000: Faixa 3

Depois, pergunte qual informação o usuário deseja visualizar:

```text
1 - Salário original
2 - Faixa salarial
3 - Salário após reajuste
```

No caso do reajuste, aplique:

* Faixa 1: `10%`
* Faixa 2: `7%`
* Faixa 3: `5%`

Caso o usuário escolha uma opção inexistente, informe que a opção é inválida.

**Conceitos:** condicionais encadeadas, `switch`, `case`, `default`, operações aritméticas e reutilização de valores calculados.

---

# Progressão

Os exercícios estão organizados aproximadamente do mais simples para o mais complexo.

## Básico

* [ ] 1. Verificação de número positivo
* [ ] 2. Número par ou ímpar
* [ ] 3. Maior entre dois números
* [ ] 4. Maior entre três números
* [ ] 5. Aprovação do aluno
* [ ] 6. Classificação por idade
* [ ] 7. Verificação de maioridade

## Intermediário

* [ ] 8. Mês do ano
* [ ] 9. Calculadora simples
* [ ] 10. Número dentro de um intervalo
* [ ] 11. Classificação de triângulo
* [ ] 12. Menu de operações

## Avançado

* [ ] 13. Verificação de senha
* [ ] 14. Sistema de acesso
* [ ] 15. Temperatura
* [ ] 16. Salário e faixa salarial
