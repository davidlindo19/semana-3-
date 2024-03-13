#include <stdio.h>

int main() {
    int numero, i;

    printf("Escreva um número inteiro: ");
    scanf("%d", &numero);

    printf("Os divisores de %d são: ", numero);

    for (i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}