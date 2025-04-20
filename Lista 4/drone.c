#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k;
    int n, tam;
    int flag=0, achei=0;
    int x=-1, y=-1;
    
    scanf("%d", &n);
    scanf("%d", &tam);
    char matriz[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf(" %c", &matriz[i][j]);
        }
    }

    for(i=0;i<n&&!achei;i++){
        for(j=0;j<n&&!achei;j++){
            for(k=0;matriz[i][j+k]==matriz[i][j+tam-k-1]&&!achei;k++){
                flag++;
            }
            if(flag==tam){
                achei = 1;
                x = i;
                y = j;
            }
            else flag = 0;
        }
    }

    for(j=0;j<n&&!achei;j++){
        for(i=0;i<n&&!achei;i++){
            for(k=0;matriz[i+k][j]==matriz[i+tam-k-1][j]&&!achei;k++){
                flag++;
            }
            if(flag==tam){
                achei = 1;
                x = i;
                y = j;
            }
            else flag = 0;
        }
    }

    printf("(%d, %d)\n", x, y);

    return 0;
}