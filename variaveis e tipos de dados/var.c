#include <stdio.h>

void main() {
    int n;

    printf("informe um numero: ");
    scanf("%i", &n);

    printf("===(%i)===", n == 0 ? 0 : n > 0 ? 1 : -1);
}