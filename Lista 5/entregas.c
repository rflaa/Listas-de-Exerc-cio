#include <stdio.h>
#include <string.h>

typedef struct{
    float centrox;
    float centroy;
}centro;

typedef struct{
    char nome[40];
    int peso;
    float preco;
}objetos;

int main()
{
    scanf("%d %d", &qtd, &qtdcentros);

    centro dist[qtdcentros+1];
    objetos objs[qtd+1]; 
    
    for(i=0;i<qtdcentros;i++){
        scanf(" %f %f", &dist[i].centrox, &dist[i].centroy);
    }

    for(i=0;i<qtd;i++){
        scanf(" %39[^ ]s %d %f", objs[i].nome, &objs[i].peso, &objs[i].preco);
    }

    return 0;
}