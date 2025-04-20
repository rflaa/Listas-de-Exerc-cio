#include <stdio.h>
#include <string.h>

    typedef struct{
        char tipo[10];
        int valor;
        int perf;
    } parte;

int main()
{
    int money, num; //dinheiro e núm de peças disponíveis
    parte pecas[20], cache; 

    scanf("%d %d", &money, &num);

    for(i=0;i<num;i++){
        scanf(" %9[^ ]s", pecas[i].tipo);
        scanf(" %d %d", &pecas[i].valor, &pecas[i].perf);
    }

    for(i=0;i<num;i++){
        for(j=1;j<num;j++){
            if(strcmp(pecas[j-1].tipo, pecas[j].tipo)>0)
                cache = pecas[j-1];
                pecas[j-1] = pecas[j];
                pecas[j] = cache;
        }
    }

    for(i=1;i<num;i++)
        if(pecas[i-1].tipo[0]!=pecas[i].tipo[0]) flag++;

    if(flag<2)
        printf("Nao foi possivel construir uma caranga...\n");
    else
        


    return 0;
}