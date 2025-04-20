#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct{
        char nome[10];
        int cpf[11];
        char senha[12];
    }aluno;

    int i, j, qtd;
    aluno cache;

//scan quantidade de alunos (n)
    scanf("%d", &qtd);
    aluno turma[qtd];
//scan do nome e cpf
    for(i=0;i<qtd;i++){
        scanf("%10s", turma[i].nome);
        
        for(j=0;j<11;j++){
            scanf(" %1d", &turma[i].cpf[j]);
        }
    }
//ordenação alfabética
    for(j=0;j<qtd;j++){
        for(i=1;i<qtd;i++){
            if(strcmp(turma[i].nome, turma[i-1].nome)<0){
                cache = turma[i];
                turma[i] = turma[i-1];
                turma[i-1] = cache;
            }
        }
    }
//criação da senha
    for(i=0;i<qtd;i++){
        for(j=0;j<strlen(turma[i].nome);j++){
            if((turma[i].nome[j]+turma[i].cpf[j])>122){
                turma[i].senha[j] = (turma[i].nome[j]+turma[i].cpf[j])-26;
            }
            else turma[i].senha[j] = turma[i].nome[j]+turma[i].cpf[j];
        }
        turma[i].senha[strlen(turma[i].nome)] = turma[i].cpf[9]+'0';
        turma[i].senha[strlen(turma[i].nome)+1] = turma[i].cpf[10]+'0';
        turma[i].senha[strlen(turma[i].nome)+2] = '\0';
        
    }


    for(i=0;i<qtd;i++){
        printf("%s ", turma[i].nome);
        printf("%s\n", turma[i].senha);
    }

    return 0;
}