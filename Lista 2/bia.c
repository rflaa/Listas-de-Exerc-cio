#include <stdio.h>

int main()
{
    int i, x, n, total, fat=2, j=1;

    scanf("%d", &n); //qtd de valores recebidos
    for(i=0;i<n;i++){ //recebendo valores
        scanf("%d", &x);
        total = total + x; // soma
    }
        

    printf("Bia arrecadou %d! dinheiros e pode jogar tenis!", fat);

    return 0;
}