#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k, l=0;
    int qtd, flag=0, final=0;
    char cache;
    char string[30], palavra[30], temp[30];

    scanf("%30[^\n]", string);
    scanf("%d", &qtd);
//string em ordem alfabética (maíusculas antes)
    for(i=0;i<strlen(string);i++){
        for(j=1;j<strlen(string);j++){
            if(string[j-1]<string[j]){
                cache = string[j];
                string[j] = string[j-1];
                string[j-1] = cache;
            }
        }
    }
    strcpy(temp, string);

//scan da palavra
    for(i=0;i<qtd;i++){
        scanf("%s[^\n]", palavra);
//palavra em ordem alfabética
        for(k=0;k<strlen(palavra);k++){
            for(j=1;j<strlen(palavra);j++){
                if(palavra[j-1]<palavra[j]){
                    cache = palavra[j];
                    palavra[j] = palavra[j-1];
                    palavra[j-1] = cache;
                }
            }
        }
//acha as letras
    k=0,j=0;
        while(k<strlen(palavra)){
            while(j<strlen(string)){
                if(palavra[k]==string[j]){
                    temp[j] = '?';
                    k++;
                    j=-1;
                    flag++;
                }
                j++;
            }
            k++;
        }
//conferindo
    if(flag==strlen(palavra)){
        final++;
        strcpy(string, temp);
    }
    else{
        strcpy(temp, string);
    } 
    flag = 0;
    }
    printf("E possivel formar %d palavras com esse conjunto\n", final);

    return 0;
}