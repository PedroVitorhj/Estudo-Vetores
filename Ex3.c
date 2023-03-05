#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5];
    int soma = 0;
    double media;

    for(int i = 0; i < 5; i++){

        printf("Digite um numero para a posicao %d: ",i+1);
        scanf("%d", &vetor[i]);

        soma += vetor[i];

    }

    media = soma/5;


    printf("\n\n");

    for(int i = 0; i < 5; i++){

        printf("Numero para a posicao %d: %d",i, vetor[i]);
        printf("\n");

    }

    printf("\n\n");

    printf("A media dos valores e: %.2f",media);




    return 0;
}
