#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10];
    int par = 0;
    int impar = 0;
    int pares[10], k = 0;
    int impares[10], j = 0;


    for(int i = 0; i < 10; i++){

        printf("Digite um numero para a posicao %d: ",i+1);
        scanf("%d", &vetor[i]);

        if((vetor[i] % 2) == 0){

           par += 1;
           pares[k] = vetor[i];
           k++;


        }
        else{

            impar += 1;
            impares[j] = vetor[i];
            j++;
        }



    }

    printf("\n\n");


    printf("Quantidade de par: %d\n\n", par);
    printf("\n");
    printf("Numeros pares: ");

    for(int i = 0; i < k; i++){

        printf(" %d ", pares[i]);

    }

    printf("\n\n");

    printf("Quantidade de impar: %d\n\n", impar);
    printf("\n");
    printf("Numeros impares: ");

    for(int i = 0; i < j; i++){

        printf(" %d ", impares[i]);
    }
    printf("\n\n");


    return 0;

}
