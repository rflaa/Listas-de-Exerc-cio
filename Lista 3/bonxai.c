#include <stdio.h>

int main()
{
    int tam, i, d;

    scanf("%d ", &tam);
    char msg[tam];

    for(i=0;i<tam;i++){
        scanf("%c", &msg[i]);
    }
    
    scanf(" %d", &d);
    if(d>26){
        d = d%26;
    } 


    for(i=0;i<tam;i++){
        if(msg[i]+d>122){ //deslocamento pra direita
            msg[i] = 96 + (msg[i]+d) - 122;
        }
        else if(msg[i]+d<97){ //deslocamento pra esquerda
            msg[i] = 123 + (msg[i]+d) - 97;
        }
        else msg[i] = msg[i] + d; //padrão
    }

    for(i=0;i<tam;i++) printf("%c", msg[i]);

    return 0;
}