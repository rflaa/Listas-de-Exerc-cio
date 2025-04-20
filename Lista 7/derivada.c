#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void derivada(int *c, int *e){
    if(*e==1) *e = 0; 
    else if(*e==0){
        *c = 0;
    }
    else{
        *c = (*c)*(*e);
        *e = (*e)-1;
    }
}

int main()
{
    int qtd, i;
    int *coef, *exp;
    char *var;

    if(coef==NULL||exp==NULL||var==NULL){
        printf("NULL\n");
        exit(1);
    }

    while(qtd!=0){
        scanf(" %d", &qtd);

        coef = malloc((qtd+1)*sizeof(int));
        exp = malloc((qtd+1)*sizeof(int));
        var = malloc((qtd+1)*sizeof(char));

        if(qtd!=0){
            for(i=0;i<qtd;i++){
                scanf(" %d %c %d", coef+i, var+i, exp+i);
                printf("%d %c %d\n", *(coef+i), *(var+i), *(exp+i));
                if(*(var+i)!='0' && *(coef+i)!=0){
                    derivada((coef+i), (exp+i));
                }
            }

            printf("f'(x)=");

            for(i=0;i<qtd;i++){
                if(var[i]=='0'||coef[i]==0){
                    continue;
                }
                else if(exp[i]==0&&coef[i]>0) printf("+%d", coef[i]);
                else if(exp[i]==0&&coef[i]<0) printf("%d", coef[i]);
                else if(coef[i]>0) printf("+%d%c^%d", coef[i], var[i], exp[i]);
                else if(coef[i]<0) printf("%d%c^%d", coef[i], var[i], exp[i]);
            }
            printf("\n");
        }
    }

    free(var);
    free(exp);
    free(coef);

    return 0;
}