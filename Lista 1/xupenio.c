#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, n, s, sa, sb;

    scanf("%d", &n);
    scanf("%d %d", &a, &b);

    sa = (a*(n%a)*(a+1))/2
    s = ((n*(1+n))/2) - sa - sb; //soma final

    printf("%d", s);

    return 0;
}