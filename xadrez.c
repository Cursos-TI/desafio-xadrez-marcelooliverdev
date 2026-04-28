#include <stdio.h>
int main () {
    // mover a torre
    printf("\n Movimentacao da Torre! \n");

        for (int t = 0; t < 5; t++)
        {
            printf("Direita\n");
        }

        printf("\n"); // para espaco!


    // mover o bispo 
     printf("\n Movimentacao do Bispo! \n");

    int b = 0;
    while (b < 5)
    {
        
        printf("Cima, Direita\n");
    b++;
    }

     printf("\n"); // para espaco!
    

    // mover a rainha 
    printf("\n Movimentacao da Rainha! \n");

    int r = 0;
    do
    {
        printf("Esquerda\n");
        r++;
    } while (r < 8);

     printf("\n"); // para espaco!


    // mover o cavalo

    printf("\n Movimentacao do Cavalo!\n");


    int movimento = 1;

    while (movimento--)
    {

        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n");


        }

        printf("Esquerda\n");

         printf("\n"); // para espaco!
}
    


return 0;


}
