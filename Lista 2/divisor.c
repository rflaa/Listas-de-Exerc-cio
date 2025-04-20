#include <stdio.h>

int main()
{
    int x, d, f1, i, f, n;
    f1 = 0;
    f = 0;
    d = 0;

    scanf("%d", &x);

    for(i=2; i<=x; i++){  //checando os divisores do número
        if(x%i==0){    //caso ele seja divisível
            n = x;
            for(;n%i==0;f1++){ //testar quantas vezes é divisível, e marcar em f1
                n = n/i;
            }
            if(f1>f){
                f = f1;
                d = i;
                f1 = 0;
            }
        }
    }
    
    printf("mostFrequent: %d, frequency: %d", d, f);

    return 0;
}