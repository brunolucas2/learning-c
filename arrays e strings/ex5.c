#include <stdio.h>

// Esse código tá muito interessante.
// Quebrei a cabeça com ele.

// Enunciado do Desafio: Criar um algoritmo que verifique e imprima todos os números repetidos (apenas uma impressão por número!).
int main()
{
    // Inicio uma matriz 4x10, contendo 4 arrays que vou utilizar como entrada para testar o algoritmo.
    int testes[][10] = {
        {2, 5, 7, 8, 5, 9, 2, 1, 7, 0},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
        {1, 2, 1, 2, 1, 2, 1, 2, 1, 2},
    };

    // Como vou acessar uma matriz relativamente grande,
    // crio 2 variáveis que armazenam a quantidade de linhas (rows) e colunas (cols).
    // É semelhante a obter o "length" de um array em linguagens de alto nível.
    int rows = sizeof(testes) / sizeof(testes[0]);
    int cols = sizeof(testes[0]) / sizeof(testes[0][0]);

    // Inicio meu algoritmo definindo um loop que percorre linha por linha da matriz.
    for (int i = 0; i < rows; i++)
    {
        // Defino também um loop que percorre coluna por coluna da linha atual.
        for (int j = 0; j < cols; j++)
        {
            // Dentro do loop que percorre as colunas, preciso fazer duas verificações:
            // 1. Verificar se o número da coluna atual já apareceu anteriormente.

            // Uso "ja_apareceu" como uma variável de controle:
            // 0 significa que ainda não apareceu e 1 significa que já apareceu.
            int ja_apareceu = 0;

            // Percorro somente as colunas anteriores a j.
            // O contador "x" começa em 0 e continua enquanto x for menor que j.
            // Assim verifico se o valor atual testes[i][j] já apareceu antes na mesma linha.
            for (int x = 0; x < j; x++)
            {
                if (testes[i][j] == testes[i][x])
                {
                    // Se encontrar o mesmo valor em uma posição anterior,
                    // marco que esse número já apareceu.
                    ja_apareceu = 1;

                    // Como já encontrei uma ocorrência anterior desse número,
                    // não preciso continuar procurando nas outras posições anteriores.
                    break;
                }
            }

            // Se "ja_apareceu" for diferente de 0,
            // significa que esse número já foi analisado anteriormente.
            if (ja_apareceu)
            {
                // Pulo o restante desta iteração e avanço para o próximo valor de j.
                // Assim evito imprimir novamente o mesmo número.
                continue;
            }

            // 2. Como o número ainda não apareceu anteriormente,
            // procuro nas colunas seguintes se existe outro valor igual a ele.
            for (int k = j + 1; k < cols; k++)
            {
                if (testes[i][j] == testes[i][k])
                {
                    printf("%d", testes[i][j]);
                    break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}