#include <stdio.h>

typedef struct{
    int nmr;
    int dia, mes, ano;
    char origem[50];
    char destino[50];
    int hora, minuto;
    int poltrona;
    int idade;
    char nome[30];
} psgr;

int main()
{
    int i=0, j=0;;
    psgr bus[45];
    int media=0;

    while(bus[i].nmr!=-1){
        scanf(" %d", &bus[i].nmr);
        if(bus[i].nmr!=-1){
            scanf(" %d/%d/%d", &bus[i].dia, &bus[i].mes, &bus[i].ano);
            scanf(" %49[^\n]", bus[i].origem);
            scanf(" %49[^\n]", bus[i].destino);
            scanf(" %d:%d", &bus[i].hora, &bus[i].minuto);
            scanf(" %d", &bus[i].poltrona);
            scanf(" %d", &bus[i].idade);
            scanf(" %29[^\n]", bus[i].nome);

            media = media + bus[i].idade;
            i++;
        }
        else continue;
    }

    media = media/i;

    for(j=0; j<i; j++){
        if((bus[j].idade)>media&&(bus[j].poltrona)%2==0){
            printf("%s\n", bus[j].nome);
        }
    }

    return 0;
}