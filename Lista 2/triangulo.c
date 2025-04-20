#include <stdio.h>

int main()
{
    char letra, c;
    int i, colunasP, colunasL, colunas;

    scanf("%c", &letra);
    colunas = 2*(letra-65)+1;
    colunasP = colunas/2;
    colunasL = 1;
    printf("qtd de colunas: %d", colunas);

    while(){
        for(;colunasP>1;colunasP-2){
            printf(".");
        }
        for(;colunasL>colunas;letra++)
    }
}