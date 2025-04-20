#include <stdio.h>
#include <string.h>

int main()
{
    int qtd, i, j;
    char palavra[12], metade[6];
    char dir;
    char senha[12];

    scanf("%d", &qtd);
    char final[qtd*6];
    char final1[(qtd*6)/2], final2[(qtd*6)/2]; 

    for(i=0;i<qtd;i++){

        scanf(" %c", &dir);
        scanf(" %12[^\n]", palavra);

        if(dir=='d'){
            for(j=0;j<6;j++)
                metade[j] = palavra[j];
        }
        else if(dir=='e'){
            for(j=11;j>5;j--)
                metade[11-j] = palavra[j];
        }

        if(i==0){
            for(j=0;j<6;j++)
                final[j] = metade[j];
        }
        else{
            strcat(final, metade);
        }

    }
    
    scanf("%s[^\n]", senha);
    
    

    return 0;
}