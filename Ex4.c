#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[6] = {1,0,5,-2,-5,7};

    int soma;

    soma = a[0] + a[1] + a[5];

    printf("Soma : %d", soma);
    printf("\n\n");

    a[3] = 100;

    for(int i = 0; i < 6; i++){

        printf("Numero para a posicao %d: %d",i+1, a[i]);
        printf("\n");

    }




    return 0;
}
