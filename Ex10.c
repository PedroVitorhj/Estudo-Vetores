#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[100];
    int j = 7;

    for(int i = 0; i < 100; i++){

        A[i] = j;
        j += 7;

    }

    printf("Vetor: ");
    for(int i = 0; i < 100; i++){

        printf("%d ", A[i]);

    }

    return 0;
}
