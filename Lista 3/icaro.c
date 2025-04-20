#include <stdio.h>

int main()
{
    int j, k, temp;
    int i=0, ii=0, iii=0;
    int lista1[100], lista2[100], lista3[100];
    int input1, input2, input3;

//lista 1
    while(input1!=420){
        scanf("%d", &input1);
        lista1[i] = input1;
        i++;
    }

//lista 2
    while(input2!=420){
        scanf("%d", &input2);
        lista2[ii] = input2;
        ii++;
    }

//lista 3
    while(input3!=420){
        scanf("%d", &input3);
        lista3[iii] = input3;
        iii++;
    }

//ordem 1
    for(j=0;j<i;j++){
        for(k=1;k<i;k++){
            if(lista1[k-1]>lista1[k]){
                temp = lista1[k];
                lista1[k] = lista1[k-1];
                lista1[k-1] = temp;
            }
        }
    }

//ordem 2
    for(j=0;j<ii;j++){
        for(k=1;k<ii;k++){
            if(lista2[k-1]>lista2[k]){
                temp = lista2[k];
                lista2[k] = lista2[k-1];
                lista2[k-1] = temp;
            }
        }
    }

//ordem 3
    for(j=0;j<iii;j++){
        for(k=1;k<iii;k++){
            if(lista3[k-1]>lista3[k]){
                temp = lista3[k];
                lista3[k] = lista3[k-1];
                lista3[k-1] = temp;
            }
        }
    }

//output
    printf("%d\n", i);
    for(j=0;j<i;j++){
        printf("%d ", lista1[j]);
    }printf("\n");

    printf("%d\n", ii);
    for(j=0;j<ii;j++){
        printf("%d ", lista2[j]);
    }printf("\n");

    printf("%d\n", iii);
    for(j=0;j<iii;j++){
        printf("%d ", lista3[j]);
    }

    return 0;
}