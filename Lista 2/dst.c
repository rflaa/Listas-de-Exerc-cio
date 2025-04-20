#include <stdio.h>

int main()
{
    int n, i, j, x, dias=0, primo=1;
    
    scanf("%d", &n);

    for(i=0;i<n;i++){ //loop para a quantidade de núm. do input
        
        scanf("%d", &x);
        if(x==0||x==1||x==2) primo = 0;
        else if(x==3) primo = 1;

        else{
            for(j=2;j<=x/2;j++){
                if(x%j!=0){
                    primo = 1;
                    break;
                }
                else{
                    primo = 0;
                    break;
                }
            }
        }

        if(primo==0) dias = dias + x;
        else if(primo==1) dias = dias - x;
    }

    if(dias<0) printf("Foi de base");
    else printf("Ele ainda tem %d dias de vida", dias);

    return 0;
}