#include <stdio.h>
#include <string.h>

int main() {
    char nomes[3][20] = {"Bruno", "Carlos", "Joao"};

    for (int i = 0; i < 3; i++) {
        if (strcmp(nomes[i], "Bruno") == 0) {
            printf("Nome encontrado!\n");
        }
    }

    return 0;
}