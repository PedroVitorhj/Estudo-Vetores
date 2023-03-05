#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vetor[10];
    float soma = 0;
    int negativos = 0;



    for(int i = 0; i < 10; i++){

        printf("Digite um numero para a posicao %d: ",i+1);
        scanf("%f", &vetor[i]);

        if(vetor[i] > 0){

           soma += vetor[i];

        }
        else {

            negativos += 1;

        }

    }
    printf("\n\n");

    printf("A soma dos valores positivos e: %.2f ",soma);
    printf("\n\n");

    printf("A quantidade de negativos: %d ",negativos);
    printf("\n\n");



    return 0;
}
