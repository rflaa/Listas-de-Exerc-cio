#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float x1, x2, delta;
    
    printf("Insira as variaveis (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    delta = (b*b) - (4*a*c);

    x1 = (-b + sqrt(delta))/2*a;
    x2 = (-b - sqrt(delta))/2*a;

    if(delta>0){
        printf("As raizes sao: %.2f e %.2f\n", x1, x2);
    }
    else if(delta==0){
        printf("A raiz eh: %.2f\n", x1);
    }
    else{
        printf("Nao existe raiz real.\n");
    }
    return 0;
}