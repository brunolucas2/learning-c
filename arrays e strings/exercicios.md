# 20 Exercícios de Arrays e Strings em C — Estilo LeetCode

> - Resolva os exercícios usando C.
> - Não utilize soluções prontas.
> - Nos exercícios que indicarem uma função de `<string.h>`, utilize a função solicitada.
> - Nos exercícios que proibirem uma função, implemente a lógica manualmente.

Cada questão traz o formato exato de entrada e saída para um programa que lê do `stdin` e escreve no `stdout`, além de casos de teste (`Entrada` / `Saída esperada`) para você validar sua implementação.

---

## Sumário

**Arrays**
1. [Soma dos valores positivos](#1-soma-dos-valores-positivos)
2. [Maior elemento e sua posição](#2-maior-elemento-e-sua-posição)
3. [Rotacionar array para a direita](#3-rotacionar-array-para-a-direita)
4. [Remover elemento de uma posição](#4-remover-elemento-de-uma-posição)
5. [Encontrar elementos repetidos](#5-encontrar-elementos-repetidos)
6. [Valores acima da média](#6-valores-acima-da-média)

**Strings**
7. [Comprimento da string sem strlen](#7-comprimento-da-string-sem-strlen)
8. [Contar vogais](#8-contar-vogais)
9. [Primeira ocorrência](#9-primeira-ocorrência)
10. [Substituir a primeira ocorrência](#10-substituir-a-primeira-ocorrência)
11. [Verificar se duas palavras possuem os mesmos caracteres](#11-verificar-se-duas-palavras-possuem-os-mesmos-caracteres)
12. [Frequência das letras](#12-frequência-das-letras)

**Arrays e Strings**
13. [Compactar elementos consecutivos](#13-compactar-elementos-consecutivos)
14. [Separar pares e ímpares](#14-separar-pares-e-ímpares)
15. [Intercalar dois arrays](#15-intercalar-dois-arrays)
16. [Contar palavras](#16-contar-palavras)
17. [Maior e menor palavra](#17-maior-e-menor-palavra)
18. [Inverter a ordem das palavras](#18-inverter-a-ordem-das-palavras)
19. [Comparar dois arrays](#19-comparar-dois-arrays)

**Desafio Final**
20. [Sistema de cadastro e busca](#20-sistema-de-cadastro-e-busca)

---

# Arrays

## 1. Soma dos valores positivos

**Descrição**

Dado um array contendo exatamente `10` números inteiros, calcule a soma de todos os valores maiores que `0`. O valor `0` não deve ser considerado positivo.

**Entrada:** uma linha com `10` inteiros separados por espaço.

**Saída:** um inteiro — a soma dos valores positivos.

**Restrições**
- `nums.length == 10`
- `-1000 <= nums[i] <= 1000`

**Casos de teste**

```text
Teste 1
Entrada: -5 10 3 -2 8 -7 4 0 -1 6
Saída:   31

Teste 2
Entrada: -8 -4 0 -2 -10 -1 -7 -3 -6 -9
Saída:   0

Teste 3
Entrada: 1 2 3 4 5 6 7 8 9 10
Saída:   55

Teste 4
Entrada: 0 0 0 0 0 0 0 0 0 0
Saída:   0
```

---

## 2. Maior elemento e sua posição

**Descrição**

Dado um array contendo exatamente `10` números inteiros, encontre o maior valor e a posição em que ele aparece pela primeira vez (índice inicial `0`).

**Entrada:** uma linha com `10` inteiros separados por espaço.

**Saída:** o maior valor e o índice da primeira ocorrência, separados por espaço.

**Restrições**
- `nums.length == 10`
- `-1000 <= nums[i] <= 1000`

**Casos de teste**

```text
Teste 1
Entrada: 4 8 2 15 7 3 11 6 1 9
Saída:   15 3

Teste 2
Entrada: 20 5 20 8 3 7 12 1 9 4
Saída:   20 0

Teste 3
Entrada: -1 -2 -3 -4 -5 -6 -7 -8 -9 -10
Saída:   -1 0

Teste 4
Entrada: 5 5 5 5 5 5 5 5 5 5
Saída:   5 0
```

> No teste 2, `20` aparece nos índices `0` e `2`; como é pedida a primeira ocorrência, o índice retornado é `0`. O mesmo vale para o teste 4, em que todos os valores são iguais.

---

## 3. Rotacionar array para a direita

**Descrição**

Dado um array contendo exatamente `6` números inteiros, mova todos os elementos uma posição para a direita. O último elemento deve ocupar a primeira posição.

**Entrada:** uma linha com `6` inteiros separados por espaço.

**Saída:** uma linha com os `6` inteiros já rotacionados.

**Restrições**
- `nums.length == 6`

**Casos de teste**

```text
Teste 1
Entrada: 1 2 3 4 5 6
Saída:   6 1 2 3 4 5

Teste 2
Entrada: 10 20 30 40 50 60
Saída:   60 10 20 30 40 50

Teste 3
Entrada: 7 7 7 7 7 7
Saída:   7 7 7 7 7 7

Teste 4
Entrada: -1 -2 -3 -4 -5 -6
Saída:   -6 -1 -2 -3 -4 -5
```

---

## 4. Remover elemento de uma posição

**Descrição**

Dado um array contendo exatamente `8` elementos e um índice `p`, remova o elemento localizado nessa posição e desloque os elementos seguintes uma posição para a esquerda.

**Entrada:** uma linha com `8` inteiros separados por espaço, seguida de uma linha com o inteiro `p`.

**Saída:** uma linha com os `7` inteiros restantes.

**Restrições**
- `nums.length == 8`
- `0 <= p < 8`

**Casos de teste**

```text
Teste 1
Entrada: 10 20 30 40 50 60 70 80
         2
Saída:   10 20 40 50 60 70 80

Teste 2
Entrada: 5 15 25 35 45 55 65 75
         0
Saída:   15 25 35 45 55 65 75

Teste 3
Entrada: 1 2 3 4 5 6 7 8
         7
Saída:   1 2 3 4 5 6 7

Teste 4
Entrada: 9 8 7 6 5 4 3 2
         4
Saída:   9 8 7 6 3 2
```

> No teste 1, o elemento no índice `2` é `30`; ao removê-lo, os elementos seguintes deslocam uma posição para a esquerda.

---

## 5. Encontrar elementos repetidos

**Descrição**

Dado um array contendo exatamente `10` números inteiros, encontre todos os valores que aparecem mais de uma vez. Cada valor deve aparecer apenas uma vez no resultado, na ordem da primeira ocorrência no array original.

**Entrada:** uma linha com `10` inteiros separados por espaço.

**Saída:** uma linha com os valores repetidos, separados por espaço (linha vazia se nenhum se repetir).

**Restrições**
- `nums.length == 10`
- `-100 <= nums[i] <= 100`

**Casos de teste**

```text
Teste 1
Entrada: 2 5 2 7 8 5 9 2 1 7
Saída:   2 5 7

Teste 2
Entrada: 1 2 3 4 5 6 7 8 9 10
Saída:   (linha vazia)

Teste 3
Entrada: 3 3 3 3 3 3 3 3 3 3
Saída:   3

Teste 4
Entrada: 1 2 1 2 1 2 1 2 1 2
Saída:   1 2
```

---

## 6. Valores acima da média

**Descrição**

Dado um array contendo exatamente `10` números reais, calcule a média de todos os valores e encontre os valores estritamente maiores que essa média.

**Entrada:** uma linha com `10` números reais separados por espaço.

**Saída:** duas linhas — a primeira com a média (com `2` casas decimais), a segunda com os valores acima da média, separados por espaço (linha vazia se nenhum valor for maior que a média).

**Restrições**
- `nums.length == 10`
- `0 <= nums[i] <= 1000`

**Casos de teste**

```text
Teste 1
Entrada: 2 4 6 8 10 12 14 16 18 20
Saída:   11.00
         12 14 16 18 20

Teste 2
Entrada: 5 5 5 5 5 5 5 5 5 5
Saída:   5.00
         (linha vazia)

Teste 3
Entrada: 1.5 2.5 3.5 4.5 5.5 6.5 7.5 8.5 9.5 10.5
Saída:   6.00
         6.5 7.5 8.5 9.5 10.5

Teste 4
Entrada: 100 200 300 400 500 600 700 800 900 1000
Saída:   550.00
         600 700 800 900 1000
```

---

# Strings

## 7. Comprimento da string sem strlen

**Descrição**

Dada uma string, determine sua quantidade de caracteres percorrendo-a manualmente até encontrar `'\0'`.

Não utilize `strlen()`.

**Entrada:** uma linha contendo apenas letras minúsculas, sem espaços.

**Saída:** um inteiro — a quantidade de caracteres da string.

**Restrições**
- `1 <= tamanho da string <= 100`
- A string não contém espaços.

**Casos de teste**

```text
Teste 1
Entrada: casa
Saída:   4

Teste 2
Entrada: programacao
Saída:   11

Teste 3
Entrada: c
Saída:   1

Teste 4
Entrada: computacaoehincrivel
Saída:   20
```

---

## 8. Contar vogais

**Descrição**

Dada uma string contendo letras minúsculas e espaços, conte quantas vezes cada vogal aparece. As vogais consideradas são `a`, `e`, `i`, `o`, `u`.

**Entrada:** uma linha com a frase.

**Saída:** uma linha com `5` inteiros separados por espaço, na ordem `a e i o u`.

**Restrições**
- `1 <= s.length <= 1000`
- `s` contém apenas letras minúsculas e espaços.

**Casos de teste**

```text
Teste 1
Entrada: eu gosto de programar
Saída:   2 3 0 4 1

Teste 2
Entrada: banana
Saída:   3 0 0 0 0

Teste 3
Entrada: aeiou
Saída:   1 1 1 1 1

Teste 4
Entrada: programacao em linguagem c
Saída:   4 2 1 2 1
```

---

## 9. Primeira ocorrência

**Descrição**

Dadas duas strings `texto` e `palavra`, encontre o índice em que ocorre a primeira aparição de `palavra` dentro de `texto`. Caso `palavra` não apareça, retorne `-1`.

Não utilize `strstr()`.

**Entrada:** uma linha com `texto`, seguida de uma linha com `palavra`.

**Saída:** um inteiro — o índice da primeira ocorrência, ou `-1`.

**Restrições**
- `1 <= texto.length <= 1000`
- `1 <= palavra.length <= 100`
- `texto` e `palavra` contêm apenas letras minúsculas e espaços.

**Casos de teste**

```text
Teste 1
Entrada: eu gosto de programar
         gosto
Saída:   3

Teste 2
Entrada: eu gosto de programar
         python
Saída:   -1

Teste 3
Entrada: aaaaa
         aa
Saída:   0

Teste 4
Entrada: programar em c e muito bom
         c
Saída:   13
```

---

## 10. Substituir a primeira ocorrência

**Descrição**

Dadas três strings — `texto`, `alvo` e `substituto` —, substitua somente a primeira ocorrência de `alvo` dentro de `texto`, criando uma nova string com o resultado. Caso `alvo` não apareça, `texto` permanece inalterado.

**Entrada:** três linhas, na ordem `texto`, `alvo`, `substituto`.

**Saída:** uma linha com a string resultante.

**Restrições**
- `1 <= texto.length <= 500`
- `1 <= alvo.length <= 100`
- `1 <= substituto.length <= 100`

**Casos de teste**

```text
Teste 1
Entrada: eu gosto de Java
         Java
         C
Saída:   eu gosto de C

Teste 2
Entrada: eu estudo C e gosto de C
         C
         C++
Saída:   eu estudo C++ e gosto de C

Teste 3
Entrada: o gato e o cachorro
         gato
         cachorro
Saída:   o cachorro e o cachorro

Teste 4
Entrada: testando testando 123
         testando
         ok
Saída:   ok testando 123
```

> No teste 2, apenas a primeira ocorrência de `C` é substituída — a segunda permanece igual.

---

## 11. Verificar se duas palavras possuem os mesmos caracteres

**Descrição**

Dadas duas strings, determine se elas possuem exatamente os mesmos caracteres, com as mesmas quantidades, independentemente da ordem.

**Entrada:** duas linhas, `s1` e `s2`, contendo apenas letras minúsculas.

**Saída:** `true` ou `false`.

**Restrições**
- `1 <= s1.length <= 100`
- `1 <= s2.length <= 100`

**Casos de teste**

```text
Teste 1
Entrada: amor
         roma
Saída:   true

Teste 2
Entrada: casa
         carro
Saída:   false

Teste 3
Entrada: abc
         abcc
Saída:   false

Teste 4
Entrada: ovo
         voo
Saída:   true
```

---

## 12. Frequência das letras

**Descrição**

Dada uma palavra contendo apenas letras minúsculas, descubra quantas vezes cada letra aparece. Cada letra deve aparecer apenas uma vez no resultado, na ordem da primeira ocorrência na palavra.

**Entrada:** uma linha com a palavra.

**Saída:** uma linha por letra encontrada, no formato `letra: quantidade`.

**Restrições**
- `1 <= s.length <= 100`
- `s` contém apenas letras minúsculas.

**Casos de teste**

```text
Teste 1
Entrada: banana
Saída:   b: 1
         a: 3
         n: 2

Teste 2
Entrada: abacaxi
Saída:   a: 3
         b: 1
         c: 1
         x: 1
         i: 1

Teste 3
Entrada: mississippi
Saída:   m: 1
         i: 4
         s: 4
         p: 2

Teste 4
Entrada: aaaa
Saída:   a: 4
```

---

# Arrays e Strings

## 13. Compactar elementos consecutivos

**Descrição**

Dado um array contendo exatamente `10` números inteiros, remova os elementos que sejam iguais ao elemento imediatamente anterior. Valores iguais separados por outros valores não devem ser removidos.

**Entrada:** uma linha com `10` inteiros separados por espaço.

**Saída:** uma linha com o array compactado.

**Restrições**
- `nums.length == 10`

**Casos de teste**

```text
Teste 1
Entrada: 1 1 1 2 2 3 4 4 5 5
Saída:   1 2 3 4 5

Teste 2
Entrada: 1 2 1 2 1 2 1 2 1 2
Saída:   1 2 1 2 1 2 1 2 1 2

Teste 3
Entrada: 7 7 7 7 7 7 7 7 7 7
Saída:   7

Teste 4
Entrada: 1 2 2 2 3 3 1 1 4 4
Saída:   1 2 3 1 4
```

> No teste 2, nenhum elemento está repetido de forma consecutiva, então nada é removido.

---

## 14. Separar pares e ímpares

**Descrição**

Dado um array contendo exatamente `10` números inteiros, separe os elementos em dois novos arrays — um só com números pares e outro só com números ímpares — mantendo a ordem original.

**Entrada:** uma linha com `10` inteiros separados por espaço.

**Saída:** duas linhas — a primeira com os pares, a segunda com os ímpares (linha vazia se não houver nenhum).

**Restrições**
- `nums.length == 10`
- `-1000 <= nums[i] <= 1000`

**Casos de teste**

```text
Teste 1
Entrada: 4 7 2 9 10 3 8 11 6 5
Saída:   4 2 10 8 6
         7 9 3 11 5

Teste 2
Entrada: 2 4 6 8 10 12 14 16 18 20
Saída:   2 4 6 8 10 12 14 16 18 20
         (linha vazia)

Teste 3
Entrada: 1 3 5 7 9 11 13 15 17 19
Saída:   (linha vazia)
         1 3 5 7 9 11 13 15 17 19

Teste 4
Entrada: -2 -4 5 7 -6 8 -9 10 3 1
Saída:   -2 -4 -6 8 10
         5 7 -9 3 1
```

---

## 15. Intercalar dois arrays

**Descrição**

Dados dois arrays contendo exatamente `5` elementos cada, crie um terceiro array intercalando os valores: `nums1[0], nums2[0], nums1[1], nums2[1], ...`.

**Entrada:** uma linha com `5` inteiros (`nums1`), seguida de uma linha com `5` inteiros (`nums2`).

**Saída:** uma linha com os `10` inteiros intercalados.

**Casos de teste**

```text
Teste 1
Entrada: 1 2 3 4 5
         10 20 30 40 50
Saída:   1 10 2 20 3 30 4 40 5 50

Teste 2
Entrada: 5 4 3 2 1
         50 40 30 20 10
Saída:   5 50 4 40 3 30 2 20 1 10

Teste 3
Entrada: 0 0 0 0 0
         1 2 3 4 5
Saída:   0 1 0 2 0 3 0 4 0 5

Teste 4
Entrada: -1 -2 -3 -4 -5
         1 2 3 4 5
Saída:   -1 1 -2 2 -3 3 -4 4 -5 5
```

---

## 16. Contar palavras

**Descrição**

Dada uma frase, determine quantas palavras existem nela. Uma palavra é uma sequência de caracteres sem espaços. Podem existir vários espaços consecutivos, além de espaços no início ou no final da frase.

**Entrada:** uma linha com a frase (pode conter espaços extras).

**Saída:** um inteiro — a quantidade de palavras.

**Restrições**
- `1 <= s.length <= 1000`
- A string contém apenas letras e espaços.

**Casos de teste**

```text
Teste 1
Entrada: eu estou estudando C
Saída:   4

Teste 2
Entrada:   eu   gosto   de   programar  
Saída:   4

Teste 3
Entrada: programacao
Saída:   1

Teste 4
Entrada:      
Saída:   0
```

---

## 17. Maior e menor palavra

**Descrição**

Dada uma frase, encontre a palavra com maior e a de menor quantidade de caracteres. Em caso de empate, escolha a que aparece primeiro na frase.

**Entrada:** uma linha com a frase.

**Saída:** a maior e a menor palavra, separadas por espaço.

**Restrições**
- `1 <= s.length <= 1000`
- A frase contém letras minúsculas e espaços.
- Deve existir pelo menos uma palavra.

**Casos de teste**

```text
Teste 1
Entrada: eu gosto muito de programacao
Saída:   programacao eu

Teste 2
Entrada: casa azul carro
Saída:   carro casa

Teste 3
Entrada: um dois tres quatro
Saída:   quatro um

Teste 4
Entrada: ana bia cid
Saída:   ana ana
```

> No teste 2, `casa` e `azul` têm o mesmo tamanho (`4`); como `casa` aparece primeiro, ela é a escolhida como menor palavra. No teste 4, todas as palavras têm tamanho `3`, então `ana` é escolhida como maior e como menor.

---

## 18. Inverter a ordem das palavras

**Descrição**

Dada uma frase, inverta a ordem das palavras, mantendo os caracteres de cada palavra na mesma ordem interna. Espaços extras no início, no final ou entre palavras devem ser ignorados no resultado.

**Entrada:** uma linha com a frase.

**Saída:** a frase com as palavras em ordem inversa, separadas por um único espaço.

**Restrições**
- `1 <= s.length <= 1000`
- A string contém letras e espaços.

**Casos de teste**

```text
Teste 1
Entrada: eu gosto de programar
Saída:   programar de gosto eu

Teste 2
Entrada:   eu   gosto   de   programar  
Saída:   programar de gosto eu

Teste 3
Entrada: C e muito legal
Saída:   legal muito e C

Teste 4
Entrada: um
Saída:   um
```

---

## 19. Comparar dois arrays

**Descrição**

Dados dois arrays contendo exatamente `10` números inteiros, determine se eles são idênticos — mesmo valor em cada posição, na mesma ordem.

**Entrada:** uma linha com `10` inteiros (`nums1`), seguida de uma linha com `10` inteiros (`nums2`).

**Saída:** `true` ou `false`.

**Restrições**
- `nums1.length == 10`
- `nums2.length == 10`
- `-1000 <= nums1[i], nums2[i] <= 1000`

**Casos de teste**

```text
Teste 1
Entrada: 1 2 3 4 5 6 7 8 9 10
         1 2 3 4 5 6 7 8 9 10
Saída:   true

Teste 2
Entrada: 1 2 3 4 5 6 7 8 9 10
         1 2 3 4 5 6 7 8 10 9
Saída:   false

Teste 3
Entrada: 0 0 0 0 0 0 0 0 0 0
         0 0 0 0 0 0 0 0 0 0
Saída:   true

Teste 4
Entrada: -1 -2 -3 -4 -5 -6 -7 -8 -9 -10
         -1 -2 -3 -4 -5 -6 -7 -8 -9 -11
Saída:   false
```

---

# Desafio Final

## 20. Sistema de cadastro e busca

**Descrição**

Crie um sistema capaz de armazenar informações de até `10` pessoas, cada uma com `nome` e `idade`. O sistema deve ler comandos, um de cada vez, e executar a operação correspondente.

**Comandos**

| Comando | Operação                    |
|:-------:|------------------------------|
| `1`     | Cadastrar pessoa (lê `nome` e `idade` nas linhas seguintes) |
| `2`     | Mostrar pessoas |
| `3`     | Buscar pessoa pelo nome (lê `nome` na linha seguinte) |
| `4`     | Encontrar pessoa mais velha |
| `5`     | Calcular média das idades |
| `6`     | Sair |

- **Cadastrar:** adiciona a pessoa ao cadastro. Não permita mais de `10` pessoas.
- **Mostrar:** exibe todas as pessoas cadastradas, na ordem em que foram adicionadas, no formato `nome - idade` (uma por linha).
- **Buscar pelo nome:** compare os nomes usando `strcmp()`. Se encontrar, exiba `nome - idade`; senão, informe que a pessoa não foi encontrada.
- **Pessoa mais velha:** encontre a maior idade cadastrada. Em caso de empate, retorne a primeira pessoa cadastrada com essa idade.
- **Média das idades:** calcule a média de todas as idades cadastradas.
- **Sair:** encerra o programa.

**Entrada:** uma sequência de comandos, cada um seguido pelos dados que ele exige.

**Saída:** o resultado de cada comando, na ordem em que foram executados.

**Restrições**
- No máximo `10` pessoas podem ser cadastradas.
- `1 <= idade <= 120`
- Cada nome tem no máximo `50` caracteres.
- A busca por nome deve usar `strcmp()`.
- A média deve considerar todas as pessoas cadastradas.
- Em empate na maior idade, escolha a primeira pessoa cadastrada.
- O programa roda até o comando `6` ser executado.

**Casos de teste**

```text
Teste 1
Entrada:
1
Bruno
18
1
Ana
17
1
Carlos
20
2
3
Bruno
4
5
6

Saída:
Bruno - 18
Ana - 17
Carlos - 20
Bruno - 18
Carlos - 20
18.33

Teste 2
Entrada:
1
Lucas
20
1
Maria
20
4
6

Saída:
Lucas - 20

Teste 3
Entrada:
1
Joao
25
1
Maria
30
3
Pedro
6

Saída:
Pedro nao encontrado
```

> No teste 2, Lucas e Maria têm a mesma idade (`20`); como Lucas foi cadastrado primeiro, ele é o retornado pelo comando `4`.
> No teste 3, a mensagem exata para "não encontrado" não está definida no enunciado — use a que preferir, mas mantenha o padrão em todo o programa.

---

# Biblioteca

Nos exercícios de strings, você pode utilizar:

```c
#include <stdio.h>
#include <string.h>
```

Funções estudadas:

```c
strlen()
strcmp()
strcpy()
strcat()
```

Utilize as funções somente quando o exercício permitir. Quando um exercício disser para implementar determinada lógica manualmente, não utilize uma função pronta que resolva diretamente o problema.

---

# Regra geral sobre arrays

Os arrays em C começam no índice `0`. Por exemplo:

```c
int array[4];
```

possui exatamente `4` posições — `array[0]`, `array[1]`, `array[2]`, `array[3]` — e o índice `4` já está fora dos limites do array.

```text
Valor:   10   20   30   40
Índice:   0    1    2    3
```

Regra geral:

```text
quantidade de elementos = tamanho declarado
maior índice válido     = tamanho - 1
```

Por exemplo, `int numeros[10];` possui `10` posições, com índices de `0` até `9`.

---

# Ordem recomendada

1. Soma dos valores positivos
2. Maior elemento e sua posição
3. Rotacionar array para a direita
4. Remover elemento de uma posição
5. Encontrar elementos repetidos
6. Valores acima da média
7. Comprimento da string sem strlen
8. Contar vogais
9. Primeira ocorrência
10. Substituir a primeira ocorrência
11. Verificar se duas palavras possuem os mesmos caracteres
12. Frequência das letras
13. Compactar elementos consecutivos
14. Separar pares e ímpares
15. Intercalar dois arrays
16. Contar palavras
17. Maior e menor palavra
18. Inverter a ordem das palavras
19. Comparar dois arrays
20. Sistema de cadastro e busca