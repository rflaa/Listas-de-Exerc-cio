#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[30];
    char tipo[20];
    float atk;
    float def;
    float vantagem;
} pokedex;

int main()
{
    int n, i, j;
    pokedex cache;
    pokedex pokemon[21];
    char xnome[30], xtipo[10];
    float xatk, xdef;

    scanf("%29[^ ]s", xnome);
    scanf(" %9[^ ]s", xtipo);
    scanf(" %f %f", &xatk, &xdef);
    scanf(" %d", &n);

    for(i=0;i<n;i++){
        scanf(" %29[^ ]s", pokemon[i].nome);
        scanf(" %19[^ ]s", pokemon[i].tipo);
        scanf(" %f %f", &pokemon[i].atk, &pokemon[i].def);
        pokemon[i].vantagem = 0;
    }

    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            if(strcmp(pokemon[j].nome, pokemon[j-1].nome)<0){
                cache = pokemon[j];
                pokemon[j] = pokemon[j-1];
                pokemon[j-1] = cache;
            }
        }
    }

    for(i=0;i<n;i++){
        if(pokemon[i].tipo[0]=='a'){
            if(xtipo[0]=='f') pokemon[i].vantagem = 1.5*(pokemon[i].atk)-xdef;
            else pokemon[i].vantagem = pokemon[i].atk-xdef;
        }
        else if(pokemon[i].tipo[0]=='f'){
            if(xtipo[0]=='g') pokemon[i].vantagem = 1.5*(pokemon[i].atk)-xdef;
            else pokemon[i].vantagem = pokemon[i].atk-xdef;
        }
        else if(pokemon[i].tipo[0]=='g'){
            if(xtipo[0]=='a') pokemon[i].vantagem = 1.5*(pokemon[i].atk)-xdef;
            else pokemon[i].vantagem = pokemon[i].atk-xdef;
        }
    }

    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            if(pokemon[j].vantagem>pokemon[j-1].vantagem){
                cache = pokemon[j];
                pokemon[j] = pokemon[j-1];
                pokemon[j-1] = cache;
            }
        }
    }

    for(i=0;i<n;i++)
        printf("%d. %s\n", i+1, pokemon[i].nome);

    return 0;
}