#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5];


    for(int i = 0; i < 5; i++){

        printf("Digite um numero para a posicao %d: ",i+1);
        scanf("%d", &vetor[i]);

    }

    printf("\n\n");

    for(int i = 4; i >= 0; i--){

        printf("Numero para a posicao %d: %d",i+1, vetor[i]);
        printf("\n");

    }



    return 0;
}
