#include <stdio.h>
#include <stdlib.h>

int main()
{
    int final;
    int possiveis=0;
    int i=0, j=0, l;
    int v[6] = {1, 2, 3, 4, 5, 6};
    int *dados = v;
    int **jogadas = &dados;
    
    printf("Qtd de jogadas e Casas p/ o final: ");
    scanf(" %d%d", &l, &final);
    printf("Qtd: %d, Final: %d\n", l, final);

    for(i=0;i<l;i++){
        for(j=0;j<6;j++){
            
        }
    }
    

    printf("%d\n", possiveis);

    return 0;
}