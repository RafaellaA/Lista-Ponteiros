Questão 13)

O uso de ponteiros para funções serve principalmente para definir qual função será executada, sem a necessidade de escrever o nome da função e de forma explícita naquele ponto do código, fazendo assim o ponteiro apontar para a função desejada.

Ex: #include <stdio.h>
    
    int sub(int a, int b){
      return a-b;
    }
    
    int main ()
    { 
    int (*pf)(int,int)
    pf = sub;
    printf("sub = %d\n",pf(3,4));
    }
