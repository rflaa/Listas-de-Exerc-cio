#include <stdio.h>
#include <stdlib.h>

void calcular_media(int *a, int *b){
    int A=*a, B=*b;

    if(*a<*b){
        A = (*a+*b)/2;
        B = *b % *a;
    }
    else{
        B = (*a+*b)/2;
        A = *a % *b;
    }

    printf("A = %d\nB = %d\n", A, B);
}

int main()
{
    int *a;
    int *b;
    a = malloc(sizeof(int));
    b = malloc(sizeof(int));

    scanf(" %d %d", a, b);

    calcular_media(a, b);

    return 0;
}