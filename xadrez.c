#include <stdio.h>

/*Esse programa simula a movimentação das peçãs de xadrez: torre, bispo e rainha.*/
//OBS: CamelCase

//Processos que realizam os movimentos das peçãs de forma recursiva, se auto chamando no final
//até chegar em 0.


//Recebe o número de casas a ser percorrido na variável casas ou feito e forma interna na variável movimento,
//mantém uma condição até as casas serem todas percorridas (= 0), o que sustenta um loop, realiza o processo e faz a recursão.
void moverTorre(int casas){

    if (casas > 0){
        printf("Direita\n");

        //faz a recursividade
        moverTorre(casas-1);
    }
}

void moverBispo(int casas){
    
        //Um loop para o movimento vertical
        for(int movimentov = 0; movimentov < 1; movimentov++){
            printf("Cima, ");

            //outro para a horizontal.
            for(int movimentoh = 0; movimentoh < 1; movimentoh++){
                printf("Direita\n");
            }
        }

        //faz a recursividade
        if (casas > 0){
            moverBispo(casas-1);
        }
           
}


void moverRainha(int casas){
    

    if (casas > 0)
    {
        printf("Esquerda\n");

        //faz a recursividade
        moverRainha(casas-1);
    }
    
}

int main(){

    /*Parâmetros:
        int casas ou movimento: conta o movimento das peçãs.

    Retornos;
        Printar as direções por contidade de casas andadas pelo contador movimento.
        Ex.: Direita
             Direita
             Direita
    */

    //Chama o processo moverTorre com a quantidade de casas a serem percorridas.
    printf("\nTorre:\n");
    moverTorre(5);

    //Chama o processo moverBispo com a quantidade de casas a serem percorridas.
    printf("\nBispo:\n");
    moverBispo(5);

    //Chama o processo moverRainha com a quantidade de casas a serem percorridas.
    printf("\nRainha:\n");
    moverRainha(8);

    printf("\nCavalo:\n");
    //Loop aliado para movimentar o cavalo, duas casas para cima e uma para a Direita.
    for(int movimentov = 0; movimentov < 1; movimentov++){

        //Primeiro as duas casas para cima
        for(int movimentoh = 0; movimentoh < 2; movimentoh++){
            printf("Cima, ");
            
        }
        //Por último para a direita
        printf("Direita\n");
    }

    

    printf("\n");

    return 0;
}