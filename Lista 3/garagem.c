#include <stdio.h>

int main()
{
    int vagas; //número máx de vagas (array-1)
    int k, v, m, i=0, j; //num do carro, num da vaga, num da vaga alternativa, contador
    char c; //caractere da ação
    
    scanf("%d", &vagas); //criação do vetor garagem
    int garagem[vagas];

    for(i=0;i<vagas;i++){ //'limpa' todas as vagas
            garagem[i] = -1;
    }

    do{
        scanf("%c %d %d", &c, &k, &v);

        if(c=='i'){ //inserindo carros
            if(garagem[v]==-1) garagem[v] = k;
            else{
                for(i=v+1;i<vagas;i++){
                    if(garagem[i]==-1){
                        garagem[i] = k;
                        break;
                    }
                }
                if(garagem[i]!=k){
                    for(i=0;i<v;i++){
                        if(garagem[i]==-1){
                            garagem[i] = k;
                            break;
                        }
                    }
                }
                if(garagem[i]!=k) printf("Not Empty\nFULL\n");
                else printf("Not empty\n");
            }
        }

        else if(c=='r'){ //removendo carros
            if(garagem[v]==k) garagem[v] = -1;
            else printf("Not Found\n");
        }

        else if(c=='m'){ //movendo carros
            scanf("%d", &m);
            if(garagem[v]==k&&garagem[m]==-1){
                garagem[v] = -1;
                garagem[m] = k;
            }
            else if(garagem[v]==k&&garagem[m]!=-1){
                for(i=v+1;i<vagas;i++){
                    if(garagem[i]==-1){
                        garagem[i] = k;
                        garagem[v] = -1;
                        break;
                    }
                }
                if(garagem[i]!=k){
                    for(i=0;i<v;i++){
                        if(garagem[i]==-1){
                            garagem[i] = k;
                            garagem[v] = -1;
                            break;
                        }
                    }
                }
                if(garagem[i]!=k) printf("FULL\n");
                else printf("Not empty\n");
            }
            else printf("Not Found\n");
        }
    }while(c!='o'&&k!=-1&&v!=-1);

    //síntese final
    for(i=0;i<vagas;i++){
        if(garagem[i]>=0) printf("Vaga %d -> %d\n", i, garagem[i]);
        else continue;
    }

    return 0;
}