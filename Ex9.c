#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10];
    int B[10];
    int C[10];

    for(int i = 0; i < 10; i++){

        printf("Digite um numero para a posicao %d no vetor A: ",i+1);
        scanf("%d", &A[i]);

    }

    printf("\n\n");

    for(int i = 0; i < 10; i++){

        printf("Digite um numero para a posicao %d no vetor B   : ",i+1);
        scanf("%d", &B[i]);

    }

    for(int i = 0; i < 10; i++){

        C[i] = A[i] - B[i];

    }

    printf("\n\n");

    printf("Vetor A: ");
    for(int i = 0; i < 10; i++){

        printf("%d ", A[i]);

    }

    printf("\n\n");

    printf("Vetor B: ");
    for(int i = 0; i < 10; i++){

        printf("%d ", B[i]);

    }

    printf("\n\n");

    printf("Vetor C: ");
    for(int i = 0; i < 10; i++){

        printf("%d ", C[i]);

    }

    printf("\n\n");

    return 0;
}
