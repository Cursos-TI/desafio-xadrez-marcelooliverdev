#include <stdio.h>


     
    void MoverTorre(int casas) // mover torre void
    {

        if (casas == 0)
    
            return;
         

            printf("Direita\n");
            MoverTorre(casas - 1);
        
    }


    void MoverBispo(int casas){ //mover bispo void
        
            if (casas == 0)
            
                return;

                    for (int b = 0; b < 1 ; b++) // vertical
                    {
                        printf("Cima\n");

                    for (int j = 0; j < 1; j++) // horizontal
                    {
                        printf("Direita\n");
                    }
                    

                    }
                    
            MoverBispo(casas - 1);
        
    }



        void MoverRainha (int casas){

             
            if(casas == 0)

        return;

                printf("Esquerda\n");
                MoverRainha(casas - 1);


        }



int main () {

    // mover a torre
    printf("\n Movimentacao da Torre! \n");
         
            MoverTorre(5);
              

        printf("\n"); // para espaco!


    // mover o bispo 
     printf("\n Movimentacao do Bispo! \n");

     MoverBispo(5);
     

   

     printf("\n"); // para espaco!
    

    // mover a rainha 
    printf("\n Movimentacao da Rainha! \n");
    MoverRainha(8);
    

   
     printf("\n"); // para espaco!


    // mover o cavalo

    printf("\n Movimentacao do Cavalo!\n");

    for (int movimento = 0; movimento < 1; movimento++)
{
    for (int cima = 0; cima < 2; cima++)
    {
        printf("Cima\n");
    }

    printf("Direita\n");
}
            

    
    


   
    


return 0;


}
