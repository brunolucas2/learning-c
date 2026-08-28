# 20 Exercícios de Arrays e Strings em C

> Resolva os exercícios usando C. Evite copiar soluções prontas.
> Nos exercícios de strings, use `<string.h>` quando solicitado.

---

## 1. Soma dos valores positivos

Crie um programa que leia 10 números inteiros para um array.

Depois, calcule e mostre somente a soma dos números positivos.

Exemplo:

Entrada:
-5 10 3 -2 8 -7 4 0 -1 6

Saída:
Soma dos positivos: 31

---

## 2. Posição do maior elemento

Leia 10 números inteiros e descubra:

- qual é o maior valor;
- em qual posição do array ele está.

Exemplo:

Array:
4 8 2 15 7 3

Saída:
Maior valor: 15
Posição: 3

Considere que a primeira posição é 0.

---

## 3. Rotação do array

Leia 6 números e faça uma rotação dos elementos uma posição para a direita.

Exemplo:

Antes:
1 2 3 4 5 6

Depois:
6 1 2 3 4 5

---

## 4. Remover um elemento

Leia 8 números e depois peça ao usuário uma posição do array.

Remova o elemento daquela posição deslocando os elementos seguintes uma posição para a esquerda.

Exemplo:

Array:
10 20 30 40 50

Posição para remover: 2

Resultado:
10 20 40 50

---

## 5. Elementos repetidos

Leia 10 números inteiros e mostre quais valores aparecem mais de uma vez.

Cada valor deve ser mostrado apenas uma vez.

Exemplo:

Entrada:
2 5 2 7 8 5 9 2 1 7

Saída:
2
5
7

---

## 6. Média e valores acima da média

Leia 10 números reais.

Calcule a média e depois mostre todos os valores que são maiores que essa média.

Exemplo:

Valores:
5 8 2 10 7

Média: 6.4

Acima da média:
8
10
7

---

## 7. Ler uma palavra e acessar seus caracteres

Peça uma palavra ao usuário e mostre cada caractere separadamente, junto com sua posição.

Exemplo:

Palavra: casa

Posição 0: c
Posição 1: a
Posição 2: s
Posição 3: a

Não use `strlen()` para controlar o loop. Descubra a posição do `'\0'` manualmente.

---

## 8. Contagem de cada vogal

Leia uma frase e informe quantas vezes aparecem:

- a
- e
- i
- o
- u

Exemplo:

Frase:
eu gosto de programar

Saída:
a: 2
e: 3
i: 0
o: 4
u: 1

Considere letras minúsculas.

---

## 9. Primeira ocorrência de uma palavra

Leia uma frase e depois leia uma palavra.

Verifique se a palavra aparece dentro da frase e informe a posição onde começa a primeira ocorrência.

Exemplo:

Frase:
eu gosto de programar

Palavra:
gosto

Posição: 3

Não use `strstr()`. Faça a busca manualmente.

---

## 10. Substituir uma palavra por outra

Leia uma frase, uma palavra que deverá ser procurada e outra palavra para substituí-la.

Crie uma nova string contendo o resultado.

Exemplo:

Frase:
eu gosto de Java

Procurar:
Java

Substituir por:
C

Resultado:
eu gosto de C

Considere apenas uma ocorrência.

---

## 11. Verificar se duas palavras possuem os mesmos caracteres

Leia duas palavras e determine se elas possuem exatamente os mesmos caracteres e na mesma quantidade, independentemente da ordem.

Exemplo:

amor
roma

Resultado:
Possuem os mesmos caracteres.

Outro exemplo:

casa
carro

Resultado:
Não possuem os mesmos caracteres.

Não use uma função pronta para resolver isso.

---

## 12. Frequência das letras

Leia uma palavra e mostre a quantidade de vezes que cada letra aparece.

Exemplo:

Palavra:
banana

Resultado:
b: 1
a: 3
n: 2

Não mostre letras que não aparecem.

---

## 13. Compactar números iguais consecutivos

Leia um array de números inteiros e elimine valores repetidos que estejam lado a lado.

Exemplo:

Entrada:
1 1 1 2 2 3 4 4 5 5

Saída:
1 2 3 4 5

Não elimine números repetidos que estejam separados.

Exemplo:

1 2 1

Deve continuar:

1 2 1

---

## 14. Separar números pares e ímpares

Leia 10 números inteiros e crie dois novos arrays:

- um contendo apenas os números pares;
- outro contendo apenas os números ímpares.

Depois mostre os dois arrays.

Exemplo:

Entrada:
4 7 2 9 10 3

Pares:
4 2 10

Ímpares:
7 9 3

---

## 15. Intercalar dois arrays

Leia dois arrays com 5 números cada e crie um terceiro array intercalando os elementos.

Exemplo:

Array A:
1 2 3 4 5

Array B:
10 20 30 40 50

Resultado:
1 10 2 20 3 30 4 40 5 50

---

## 16. Contar palavras de uma frase

Leia uma frase e descubra quantas palavras existem nela.

Considere que as palavras são separadas por espaços.

Exemplo:

Frase:
eu estou estudando C

Quantidade de palavras:
4

Tenha cuidado com frases que possuem mais de um espaço entre as palavras.

---

## 17. Maior e menor palavra

Leia uma frase e descubra:

- qual é a palavra com mais caracteres;
- qual é a palavra com menos caracteres.

Exemplo:

Frase:
eu gosto muito de programação

Maior palavra:
programação

Menor palavra:
eu

Não use uma função pronta para separar palavras da frase.

---

## 18. Inverter a ordem das palavras

Leia uma frase e mostre as palavras na ordem inversa.

Exemplo:

Entrada:
eu gosto de programar

Saída:
programar de gosto eu

As palavras devem continuar escritas normalmente; apenas a ordem delas deve mudar.

---

## 19. Comparar dois arrays

Leia dois arrays com 10 números inteiros e determine se eles são exatamente iguais.

Exemplo:

Array A:
1 2 3 4 5

Array B:
1 2 3 4 5

Resultado:
Arrays iguais.

Outro exemplo:

Array A:
1 2 3 4 5

Array B:
1 2 3 5 4

Resultado:
Arrays diferentes.

Não use `strcmp()` para este exercício.

---

## 20. Sistema de cadastro e busca

Crie um pequeno sistema para cadastrar 10 pessoas.

Para cada pessoa, armazene:

- nome;
- idade.

Depois mostre um menu:

===== MENU =====

1 - Cadastrar pessoas
2 - Mostrar pessoas
3 - Buscar pessoa pelo nome
4 - Mostrar pessoa mais velha
5 - Mostrar média das idades
6 - Sair

Regras:

- Use um array para armazenar os nomes.
- Use outro array para armazenar as idades.
- Na busca pelo nome, utilize `strcmp()`.
- Ao mostrar a pessoa mais velha, informe nome e idade.
- Ao calcular a média, use todas as idades cadastradas.
- O programa deve continuar funcionando até o usuário escolher 6.

Exemplo:

===== MENU =====

1 - Cadastrar pessoas
2 - Mostrar pessoas
3 - Buscar pessoa pelo nome
4 - Mostrar pessoa mais velha
5 - Mostrar média das idades
6 - Sair

Escolha: 3

Digite o nome: Bruno

Pessoa encontrada!
Nome: Bruno
Idade: 17

---

# Funções que podem ser úteis

#include <stdio.h>
#include <string.h>

Funções da biblioteca:

strlen()
strcmp()
strcpy()
strcat()

Nos exercícios em que for solicitado fazer a lógica manualmente, não utilize a função pronta.

---
