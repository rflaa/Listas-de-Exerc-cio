#include <stdio.h>

int main()
{
    int d, m, a, an, n=0;
    an = 1904 + (n-1)*4;

    scanf("%d %d %d", &d, &m, &a);

//condição inicial
if(d>=1 && d<=31 && m>=1 && m<=12 && a>=1900 && a<=2100){
    
    while(an<a){
        n++;
        an = 1904 + (n-1)*4;
    }
    if(an==a){ //ano bissexto por definição
        if(a%100==0 && a%400!=0){ //ano não bissexto por exceção
            if(m==2){
                if(d>28) printf("invalida");
                else printf("valida");
            }
            else if(m==4||m==6||m==9||m==11){
                if(d>30) printf("invalida");
                else printf("valida");
            }
            else{
                if(d>31) printf("invalida");
                else printf("valida");
            }
        }
        else{ //ano bissexto
            if(m==2){
                if(d>29) printf("invalida");
                else printf("valida");
            }
            else if(m==4||m==6||m==9||m==11){
                if(d>30) printf("invalida");
                else printf("valida");
            }
            else{
                if(d>31) printf("invalida");
                else printf("valida");
            }
        }
    }
    else if(an>a){ //ano não bissexto por definição
        if(m==2){
                if(d>28) printf("invalida");
                else printf("valida");
            }
            else if(m==4||m==6||m==9||m==11){
                if(d>30) printf("invalida");
                else printf("valida");
            }
            else{
                if(d>31) printf("invalida");
                else printf("valida");
            }
    }

}
    
//datas invalidas
else printf("invalida");

return 0;
}