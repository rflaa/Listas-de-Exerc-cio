#include <stdio.h>

int main()
{
    int n, i, j;
    
    scanf("%d", &n);

    if(n==1) printf("A");
    else{
        if(n%2==0){
            for(j=0;j<n/2;j++){
                for(i=0;i<n/2;i++){
                    printf("A");
                    printf(".");
                } 
                printf("\n");
                for(i=0;i<n/2;i++){
                    printf(".");
                    printf("A");
                } 
                printf("\n");
            }
        }

        else{
            for(j=0;j<n/2;j++){
                for(i=0;i<n/2;i++){
                    printf("A");
                    printf(".");
                }
                printf("A\n");
                for(i=0;i<n/2;i++){
                    printf(".");
                    printf("A");
                } 
                printf(".\n");
            }
            for(i=0;i<n/2;i++){
                    printf("A");
                    printf(".");
                }
                printf("A\n");
        }
    }

    return 0;
}