#include <stdio.h>

int main()
{
    int cache, i=0, j=1;
    int cartas[5];
    
    for(i=0;i<5;i++){
        scanf("%d", &cartas[i]);
    }

    for(i=0;i<5;i++){
        for(j=1;j<5;j++){
            if(cartas[j-1]>cartas[j]){
                cache = cartas[j];
                cartas[j] = cartas[j-1];
                cartas[j-1] = cartas[j];
            }
        }
    }

    for(i=0;i<5;i++) printf("%d ", cartas[i]);

    return 0;
}