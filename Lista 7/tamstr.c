#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int tamstr(char *str){
    int i=0;

    while(*(str+i)!='\0'){
        i++;
    }

    return i;
}


int main()
{
    char *string;
    string = calloc(10, sizeof(char));
    char fim[4] = "FIM";
    if(string==NULL){
        exit(1);
    }

    while(strcmp(string, fim)!=0){
        scanf(" %s", string);
        strcmp(string, fim)==0 ?  : printf("%d\n", tamstr(string));
    }

    free(string);

    return 0;
}