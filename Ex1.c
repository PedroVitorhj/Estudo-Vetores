#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[6];

    for(int i = 0; i < 6; i++){

        printf("Digite um numero para a posicao %d: ",i+1);
        scanf("%d", &vetor[i]);

    }

    printf("\n\n");

    for(int i = 0; i < 6; i++){

        printf("Numero para a posicao %d: %d",i, vetor[i]);
        printf("\n");

    }


    return 0;
}
