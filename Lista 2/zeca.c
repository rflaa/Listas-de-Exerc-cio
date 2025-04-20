#include <stdio.h>

int main()
{
    int a, b, i, n, zeca;

    scanf("%d %d", &a, &b);
    
    for(n=a;n<b;n++){
        for(i=2;i<=n/2;i++){    
            if(n%i==0){    
                break; 
            }
            else zeca++;
        }
    }

    printf("%d", zeca);
    return 0;

}