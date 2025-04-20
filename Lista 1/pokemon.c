#include <stdio.h>

int main()
{
    int doces, x, y, z;
    int flag = 0;
    int fx=0, fy=0, fz=0;

    scanf("%d", &doces);
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    while((doces>=x||doces>=y||doces>=z) && (fx==0||fy==0||fz==0)){
        if(x<y && x<z && doces>=x && fx==0){
            doces = doces - x;
            fx++;
            flag++;
        }
        if(y<x && y<z && doces>=y && fy==0){
            doces = doces - y;
            fy++;
            flag++;
        }
        if(z<x && z<y && doces>=z && fz==0){
            doces = doces - z;
            fz++;
            flag++;
        }
    }

    printf("%d", flag);
    return 0;
}