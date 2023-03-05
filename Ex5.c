#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[8];
    int x, y,soma;


    for(int i = 0; i < 8; i++){

        printf("Digite um numero para a posicao %d: ",i+1);
        scanf("%d", &vetor[i]);

    }

    printf("\n\n");


    printf("Escolha um numero de 1 a 8 para a posicao X: ");
    scanf("%d", &x);

     printf("\n\n");

    printf("Escolha um numero de 1 a 8 para a posicao Y: ");
    scanf("%d", &y);

     printf("\n\n");

    soma = vetor[x-1] + vetor[y-1];

    printf("A soma dos valores na posicao X e Y: %d", soma);

     printf("\n\n");





    return 0;
}
