#include <stdio.h>

int main()
{
    int n, i=0, j=1, cache=0;
    int altos=0, med=0, peq=0;
    int Adif=1, dif=0;

    scanf("%d", &n);
    int A[n];

    for(i=0;i<n;i++){
        scanf("%d", &A[i]);
    }

    for(i=1;i<n;i++){
        if(A[i]!=A[i-1])
            Adif++;
    }

    for(i=0;i<n;i++){
        if(A[i]>=100) altos++;
        else if(A[i]>=50) med++;
        else peq++;
    }

    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            if(A[j-1]<A[j]){
                cache = A[j];
                A[j] = A[j-1];
                A[j-1] = cache;
            }
        }
    }

    dif = A[0] - A[n-1];

    printf("%d\n", Adif);
    printf("%d\n", altos);
    printf("%d\n", med);
    printf("%d\n", peq);
    printf("%d\n", dif);

    return 0;

}