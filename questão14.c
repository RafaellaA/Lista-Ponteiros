Questão 14)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void trocaValores (float *vetor1, float *vetor2){

    float aux;

    aux = *vetor1;
    *vetor1 = *vetor2;
    *vetor2 = aux;
}


void ordenaValores (float *vetor, int n){

    int i,j;

    for(j=0; j<n; j++){
        for (i=0; i<n; i++){
            if (vetor[i]>vetor[i+1]){
                trocaValores(&vetor[i],&vetor[i+1]);
            }
        }
    }
}

int main()
{
    srand(time(NULL));
    float *vetor;
    int n,i;

    printf("Digite o tamanho de vetor: ");
    scanf("%d",&n);

    vetor = (float*) malloc(n*sizeof(float));

    for (i=0; i<n; i++){
        vetor[i] = rand() % 11;
    }

    for (i=0; i<n; i++){
        printf("Vetor: %f\n", vetor[i]);
    }

    ordenaValores (vetor,n);

    for(i=0; i<n; i++){
        printf(" %f",vetor[i]);
    }
    printf("\n");



    return 0;
}

