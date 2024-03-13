#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_sorteado, palpite;
    int acertou = 0;
    int tentativas = 0;

    srand(time(NULL));
    numero_sorteado = rand() % 100 + 1;

    while (!acertou && tentativas < 5) {
        printf("Tente adivinhar o número sorteado no intervalo de 1 a 100: ");
        scanf("%d", &palpite);

        if (palpite < 1 || palpite > 100) {
            printf("Valor inválido! Digite um número inteiro no intervalo de 1 a 100.\n");
        } else {
            tentativas++;

            if (palpite == numero_sorteado) {
                printf("Parabéns!!! Você acertou!\n");
                printf("O número sorteado era %d.\n", numero_sorteado);
                acertou = 1;
            } else if (palpite < numero_sorteado) {
                printf("Você chutou muito baixo!\n");
            } else {
                printf("Você chutou muito alto!\n");
            }
        }
    }

    if (!acertou) {
        printf("Você excedeu o número máximo de tentativas.\n");
        printf("O número sorteado era %d.\n", numero_sorteado);
    }

    return 0;
}