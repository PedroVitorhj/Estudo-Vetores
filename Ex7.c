#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10];
    int maior = 0;
    int menor = 100;



    for(int i = 0; i < 10; i++){

        printf("Digite um numero para a posicao %d: ",i+1);
        scanf("%d", &vetor[i]);

        if(vetor[i] > maior){

           maior = vetor[i];

        }
        else if(vetor[i] < menor){

            menor = vetor[i];

        }

    }

    printf("\n\n");

    printf("O maior valor e: %d", maior);
    printf("\n\n");
    printf("O menor valor e: %d", menor);
    printf("\n\n");


    return 0;
}
