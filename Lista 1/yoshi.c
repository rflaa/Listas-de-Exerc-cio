#include <stdio.h>

int main()
{
    int m; //moedas do mario
    // verde, vermelho, roxo e amarelo
    float vd, vm, rx, am; //custo-benefício de cada yoshi
    float vd0, vm0, rx0, am0; //preço de cada yoshi

    scanf("%d", &m);
    scanf("%f %f %f %f", &vd0, &vm0, &rx0, &am0);

    //cálculo do custo-benefício
    vd = 80/vd0;
    vm = 100/vm0;
    rx = 120/rx0;
    am = 80/am0;

//output
    if(vd>=vm && vd>=rx && vd>=am && m>=vd0) printf("Verde");
    else if(vm>=vd && vm>=rx && vm>=am && m>=vm0) printf("Vermelho");
    else if(rx>=vm && rx>=vd && rx>=am && m>=rx0) printf ("Roxo");
    else if(am>=vm && am>=rx && am>=vd && m>=am0) printf("Amarelo");
    else printf("Acho que vou a pe :(");
    return 0;
}