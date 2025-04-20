#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int menor(int *vet){
    int final = *vet;
    for(int j=0;j<6;j++){
        if(final>*(vet+j))
            final = *(vet+j);
    }
    return final;
}

int maior(int *vet){
    int final = *vet;
    for(int j=0;j<6;j++){
        if(final<*(vet+j))
            final = *(vet+j);
    }
    return final;
}

int main()
{
    int *v;
    v = (int *) calloc(6, sizeof(int));
    int i;

    for(i=0;i<6;i++){
        scanf(" %d", v + i);
    }

    printf("\n");
    printf("%d\n", menor(v));
    printf("%d\n", maior(v));

    return 0;
}