Questão 11)

#include <stdio.h>
int main()
{
    char a[4] = "1234";

    printf("Endereco x1[0] = %d\n",a);
    printf("x+1 = %d\n",a+1);
    printf("x+2 = %d\n",a+2);
    printf("x+3 = %d\n",a+3);

    int b[4] = {1,2,3,4};

    printf("Endereco x1[0] = %d\n",b);
    printf("x+1 = %d\n",b+1);
    printf("x+2 = %d\n",b+2);
    printf("x+3 = %d\n",b+3);

    float c[4] = {1,2,3,4};

    printf("Endereco x1[0] = %d\n",c);
    printf("x+1 = %d\n",c+1);
    printf("x+2 = %d\n",c+2);
    printf("x+3 = %d\n",c+3);

    double d[4] = {1,2,3,4};

    printf("Endereco x1[0] = %d\n",d);
    printf("x+1 = %d\n",d+1);
    printf("x+2 = %d\n",d+2);
    printf("x+3 = %d\n",d+3);



    return 0;
}
