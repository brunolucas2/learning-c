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

## 11. Maior e menor

Leia três números inteiros e informe:

* o maior número;
* o menor número.

**Conceitos:** condicionais encadeadas e condicionais aninhadas.

---

## 12. Classificação de triângulo

Leia os três lados de um triângulo e determine se ele é:

* Equilátero;
* Isósceles;
* Escaleno.

Considere também se os três valores realmente podem formar um triângulo.

**Conceitos:** `if`, `else if`, `else`, operadores lógicos.

---

## 13. Menu de operações

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

**Conceitos:** `switch`, `case`, `break`, `default`, `if`.

---

## 14. Verificação de senha

Defina uma senha numérica no programa.

Solicite a senha ao usuário e informe se ela está correta ou incorreta.

Caso a senha esteja correta, mostre um segundo menu:

```text
1 - Consultar saldo
2 - Fazer depósito
3 - Sair
```

Utilize uma estrutura adequada para tratar as opções do menu.

**Conceitos:** `if`, `else`, `switch`, `case`, condicionais aninhadas.

---

## 15. Sistema de acesso

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

**Conceitos:** `if`, operadores lógicos, `switch`, `case`.

---

## 16. Temperatura

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

**Conceitos:** `if`, `else if`, `else`, `switch`, operações aritméticas.

---

## 17. Salário e faixa salarial

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

**Conceitos:** condicionais encadeadas, `switch`, operações aritméticas.

---

## 18. Sistema de notas

Leia três notas de um aluno e calcule a média.

Informe:

* média maior ou igual a `7`: Aprovado;
* média entre `5` e `6.9`: Recuperação;
* média menor que `5`: Reprovado.

Além disso, verifique se alguma das notas individuais é igual a `0`. Nesse caso, o aluno deve ser reprovado independentemente da média.

Depois, permita que o usuário escolha uma opção:

```text
1 - Mostrar média
2 - Mostrar situação
3 - Mostrar maior nota
4 - Mostrar menor nota
```

**Conceitos:** condicionais compostas, operadores lógicos, `switch`, `if`.

---

## 19. Verificação de intervalo

Leia um número inteiro e informe em qual intervalo ele está:

* menor que `0`;
* entre `0` e `10`;
* entre `11` e `20`;
* maior que `20`.

Depois, mostre um menu para o usuário escolher uma operação:

```text
1 - Verificar se é par ou ímpar
2 - Verificar se é positivo ou negativo
3 - Mostrar o dobro
4 - Mostrar o triplo
```

**Conceitos:** `if`, `else if`, `switch`, operadores aritméticos e relacionais.

---

## 20. Sistema de operações

Crie um programa que apresente um menu:

```text
1 - Calculadora
2 - Verificação de número
3 - Classificação por idade
4 - Sair
```

Cada opção deve executar uma funcionalidade diferente.

### Calculadora

Leia dois números e permita escolher:

```text
1 - Somar
2 - Subtrair
3 - Multiplicar
4 - Dividir
```

### Verificação de número

Leia um número e informe:

* se é positivo, negativo ou zero;
* se é par ou ímpar.

### Classificação por idade

Leia a idade e informe:

* Criança;
* Adolescente;
* Adulto;
* Idoso.

A opção `4` deve encerrar o programa.

**Conceitos:** `switch`, `case`, `if`, `else if`, `else`, condicionais aninhadas, operadores lógicos e aritméticos.

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

* [ ] 8. Mês do ano
* [ ] 9. Calculadora simples
* [ ] 10. Número dentro de um intervalo
* [ ] 11. Maior e menor
* [ ] 12. Classificação de triângulo
* [ ] 13. Menu de operações
* [ ] 14. Verificação de senha

### Avançado

* [ ] 15. Sistema de acesso
* [ ] 16. Temperatura
* [ ] 17. Salário e faixa salarial
* [ ] 18. Sistema de notas
* [ ] 19. Verificação de intervalo
* [ ] 20. Sistema de operações
