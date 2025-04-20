#include <stdio.h>

int main()
{
    int h, l;
    int i, j, k=0;
    int flag = 0;
    
    scanf("%d %d", &h, &l);
    char parede[h][l];

    for(i=0;i<h;i++){
        for(j=0;j<l;j++){
            scanf(" %c", &parede[i][j]);
        }
    }

    for(i=0;i<h;i++){
        for(j=0;j<l;j++){
            if(parede[i][j]=='o'&&parede[i+1][j]=='.')
                parede[i+1][j] = 'o';
            else if(parede[i][j]=='o'&&parede[i+1][j]=='#'){
                for(k=1;(j+k)<l&&parede[i+1][j+k-1]=='#';k++){
                    parede[i][j+k] = 'o';
                }
                if(parede[i+1][j+k-1]=='.')
                    parede[i+1][j+k-1] = 'o';
                for(k=1;(j-k)>-1&&parede[i+1][j-k+1]=='#';k++){
                    parede[i][j-k] = 'o';
                }
                if(parede[i+1][j-k+1]=='.')
                    parede[i+1][j-k+1] = 'o';
            }
            else continue;
        }
    }

    for(i=0;i<h;i++){
        for(j=0;j<l;j++){
            printf("%c", parede[i][j]);
        }
        printf("\n");
    }


    return 0;    
}