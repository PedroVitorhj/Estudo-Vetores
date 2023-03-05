#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A[20];
    float B[20];

    for(int i = 0; i < 20; i++){

        printf("Digite um numero para a posicao %d no vetor A: ",i+1);
        scanf("%f", &A[i]);

        B[i] = A[i] * A[i];
    }

    printf("\n\n");

    printf("Vetor A: ");
    for(int i = 0; i < 20; i++){

        printf("%.2f ", A[i]);

    }

    printf("\n\n");

    printf("Vetor B: ");
    for(int i = 0; i < 20; i++){

        printf("%.2f ", B[i]);

    }

    printf("\n\n");

    return 0;
}
