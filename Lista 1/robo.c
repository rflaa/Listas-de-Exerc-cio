#include <stdio.h>
#include <math.h>

int main()
{
    float x0, y0; //posição inicial do robô
    float xa, ya; //posição do ponto a
    float xb, yb; // ponto b
    float xc, yc; // ponto c
    float da, db, dc; //distância do robô aos pontos
    char  p1, p2, p3; //pontos na ordem

    scanf("%f %f", &x0, &y0);
    scanf("%f %f", &xa, &ya);
    scanf("%f %f", &xb, &yb);
    scanf("%f %f", &xc, &yc);

//cálculo das distâncias
    da = sqrt((xa-x0)*(xa-x0) + (ya-y0)*(ya-y0));
    db = sqrt((xb-x0)*(xb-x0) + (yb-y0)*(yb-y0));
    dc = sqrt((xc-x0)*(xc-x0) + (yc-y0)*(yc-y0));

//primeiro ponto
    if(da<db && da<dc){
        x0 = xa;
        y0 = ya;
        p1 = 'A';
    }
    else if(db<da && db<dc){
        x0 = xb;
        y0 = yb;
        p1 = 'B';
    }
    else if(dc<da && dc<db){
        x0 = xc;
        y0 = yc;
        p1 = 'C';
    }
    else{
        x0 = xa;
        y0 = ya;
        p1 = 'A';
    }

//cálculo das distâncias
    da = sqrt((xa-x0)*(xa-x0) + (ya-y0)*(ya-y0));
    db = sqrt((xb-x0)*(xb-x0) + (yb-y0)*(yb-y0));
    dc = sqrt((xc-x0)*(xc-x0) + (yc-y0)*(yc-y0));
    
// segundo ponto
    if(p1=='A'){
        p2 = (db<=dc) ? 'B' : 'C';
    }
    else if(p1=='B'){
        p2 = (da<=dc) ? 'A' : 'C';
    }
    else if(p1=='C'){
        p2 = (da<=db) ? 'A' : 'B';
    }

//terceiro ponto
    if(p1!='A' && p2!='A') p3 = 'A';
    else if(p1!='B' && p2!='B') p3 = 'B';
    else if(p1!='C' && p2!='C') p3 = 'C';

//output
    printf("%c %c %c", p1, p2, p3);
return 0;
}