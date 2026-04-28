#include <stdio.h>
int main () {
    // mover a torre
    printf("\n Movimentacao da Torre!\n");

        for (int t = 0; t < 5; t++)
        {
            printf("Direita\n");
        }
    // mover o bispo 
     printf("\n Movimentacao do Bispo!\n");

    int b = 0;
    while (b < 5)
    {
        
        printf("Cima, Direita\n");
    b++;
    }
    

    // mover a rainha 
    printf("\n Movimentacao da Rainha!\n");

    int r = 0;
    do
    {
        printf("Esquerda\n");
        r++;
    } while (r < 8);
