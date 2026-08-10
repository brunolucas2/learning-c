#include <stdio.h>
// incluindo o header stdio (standard input-output header).
// fornecendo a interface tradicional de entrada e saída do C.

void main() {

    // Variáveis do tipo inteiro podem possuir especificadores de sinal
    // "signed" e "unsigned", e especificadores de tamanho "short" e "long".

    // "signed" permite representar valores negativos e positivos.
    // "int" já é signed por padrão.
    signed int inteiro_negativo = -1;

    // "unsigned" permite apenas valores não negativos
    unsigned int inteiro_positivo = +2; // ou 2, números positivos também podem ser representados por ausencia do - ou +.

    // O tipo "int" possui pelo menos 2 bytes de tamanho.
    // Em muitas implementações modernas, possui 4 bytes.
    int inteiro;

    // O tipo "short int" possui pelo menos 2 bytes.
    // Em implementações comuns, possui 2 bytes.
    short int inteiro_curto;

    // O tipo "long int" possui pelo menos 4 bytes.
    // Seu tamanho depende da implementação e da plataforma.
    long int inteiro_longo;

    // O tipo "long long int" possui pelomenos 8 bytes.
    long long int inteiro_extraLongo;

    // É possível verificar o tamanho de uma variável utilizando sizeof().
    // Como sizeof() retorna um valor do tipo size_t, o especificador de formato
    // recomendado para printf() é "%zu".
    printf(
        "int - %zuB\nshort int - %zuB\nlong int - %zuB\nlong long int - %zuB\n",
        sizeof(inteiro),
        sizeof(inteiro_curto),
        sizeof(inteiro_longo),
        sizeof(inteiro_extraLongo));

    // tipo númericos: reais.
    // são os tipos: float e double.

    // float possui pelo menos 4 bytes de tamanho.
    // float possui menor precisão comparado ao double, hoje ele e mais utilizado quando se quer economia na memória
    // possuindo aproximadamente 6–7 dígitos decimais de precisão.
    float a = 4.0;

    // double possui pelo menos 8 bytes de tamanho.
    // double possui maior precisão em uma quantidade maior de casas decimais, e oferece aproximadamente 15-16 dígitos decimais de precisão.
    double b = 5.0;

    // Nos tipos reais "float" e "double", é possível utilizar o especificador
    // de tamanho "long" com o tipo double, formando "long double".

    // não e possivel utiliza os especificadores de sinal "signed" e "unsigned"
    // nos tipos float, double e long double, pois esses tipos já trabalham
    // com valores negativos e positivos por padrão.

    // long double possui pelomenos 10 bytes de tamanho.
    // Seu tamanho depende da implementação e da plataforma.
    long double c = 6.0;

    printf(
        "float - %zuB\ndouble - %zuB\nlong double - %zuB\n",
        sizeof(a),
        sizeof(b),
        sizeof(c));

    // O tipo char é utilizado para representar caracteres.
    // Ele também é um tipo inteiro e pode possuir os especificadores de sinal
    // "signed" e "unsigned".

    // "char" sozinho pode representar valores de caracteres.
    // O comportamento de sinal de "char" depende da implementação.
    char caractere = 'A';

    // "signed char" pode representar valores negativos e positivos.
    signed char caractere_com_sinal = -1;

    // "unsigned char" permite apenas valores não negativos.
    unsigned char caractere_sem_sinal = 255;

    // Não é possível utilizar os especificadores de tamanho
    // "short", "long" e "long long" com o tipo char.

    // O tipo char possui 1 byte de tamanho.
    // O tamanho de 1 byte em C é definido como CHAR_BIT bits,
    // sendo 8 bits na maioria das implementações.
    printf(
        "char - %zuB\nsigned char - %zuB\nunsigned char - %zuB",
        sizeof(caractere),
        sizeof(caractere_com_sinal),
        sizeof(caractere_sem_sinal));
}