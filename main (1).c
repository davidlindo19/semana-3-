#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dado;
    
    srand(time(NULL)); // inicializa gerador randomico 
    
    dado = 1 + rand()%6; // gera valor de 1 a 6 
    
    printf("lancei o dado!tente adivinhar o valor \\n");
    printf("seu palpite: ");
    int palpite;
    scanf("%d" , &palpite);
    if (palpite == dado)
    {
        printf("voce adivinhou\n");
    }
    else
    {
        printf("nao foi dessa vez\n");
    }
    printf("valor do dado lançado%d\n", dado);
    
    
}