#include <stdio.h>

int main()
{
    int testes, tam=0, array[tam];
    int i, j, k;
    int flag1=1, flag2=1;

    scanf("%d", &testes);

    for(i=0;i<testes;i++){
        scanf("%d", &tam);

        for(j=0;j<tam;j++){
            scanf("%d", &array[j]);
        }

        for(k=1;k<tam;k++){
            if(array[k-1]>array[k]){
                final[k-1] = array[k-1];
                flag1++;
            }
            if else(array[k-1]==array[k]){
                continue;
            }
            else{
                flag1 = 1;
                final[k-1] = array[k];
            }
        }
    }

    return 0;
}