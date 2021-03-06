Questão 18)

#include <stdio.h>
#include <stdlib.h>

void SomaVetores(int *v1, int *v2, int *v3, int n){

    int i;
    for(i=0; i<n; i++){
        v3[i] = v1[i] + v2[i];
    }
}


int main()
{
    srand(time(NULL));
    int *v1,*v2,*v3,n,i;

    printf("Digite o tamanho dos vetores: \n");
    scanf("%d",&n);

    v1 = (int*)malloc(n*sizeof(int));
    v2 = (int*)malloc(n*sizeof(int));
    v3 = (int*)malloc(n*sizeof(int));

    for(i=0; i<n; i++){
        v1[i] = rand()%10-5;
    }
    for(i=0; i<n; i++){
        v2[i] = rand()%10-5;
    }

    printf("v1 = \n");
    for(i=0; i<n; i++){
        printf("%d ",v1[i]);
    }
    printf("\n");

    printf("v2 = \n");
    for(i=0; i<n; i++){
        printf("%d ",v2[i]);
    }
    printf("\n");

    SomaVetores(v1,v2,v3,n);

    printf("v3 = \n");
    for(i=0; i<n; i++){
        printf("%d ",v3[i]);
    }
    printf("\n");
	
    free(v1);
    free(v2);
    free(v3);


    return 0;
}




