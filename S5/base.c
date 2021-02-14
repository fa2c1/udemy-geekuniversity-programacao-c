#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n, contador = 0;

    printf("\nLendo e imprimindo os numeros inteiros positivos\n");
    printf("\n");

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n >= 0)
    {
        for (int i = 0; i < n; i++)
        {
                printf(contador);
                contador = contador + 1;
        }
        
    }
    else
    {
        printf("Digite um numero Positivo\n");
    }

    printf("\n");
    return (0);

}
