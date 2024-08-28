#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Lista{
    char produto[20];
    struct Lista* pont_ant;
    struct Lista* pont_prox;
}Lista;

int main()
{
    int qtdd_casos=0, apoio=0;
    Lista *apontador = (Lista *) malloc (sizeof(Lista)), *temp = (Lista *) malloc (sizeof(Lista)), *ponteiro_atual = (Lista *) malloc (sizeof(Lista));
    char prod_atual[20];
    
    scanf("%d", &qtdd_casos);
    
    //Adicionando valores na lista
    for(int i=0; i<qtdd_casos; i++){
        //Alocando espaço para o próximo conteúdo que será digitado e armazenando no ponteiro prox
        apontador->pont_prox = (Lista *) malloc (sizeof(Lista));
        //Passando para o ponteiro que guarda o anterior do próximo o endereço armazenado pelo apontador (atual)
        apontador->pont_prox->pont_ant = apontador;
        //fazendo o apontador apontar para o próximo, que acabou de ser adicionado
        apontador = apontador->pont_prox;
        //armazenando produto digitado no próximo
        scanf("%s", apontador->produto);
    }
    
    //percorrendo de trás pra frente e verificando se há valores iguais
    while(apoio==0){
        if(qtdd_casos > 1){
            ponteiro_atual = apontador;
            while(apoio==0){
                strcpy(prod_atual, apontador->produto);
                apontador = apontador->pont_prox;
                if(apontador != NULL && strcmp(prod_atual,apontador->produto) == 0){
                    temp = apontador;
                    apontador->pont_ant->pont_prox = apontador->pont_prox;
                    apontador->pont_prox->pont_ant = apontador->pont_ant;
                    apontador = apontador->pont_prox;
                    free(temp);
                    if(apontador->pont_prox == NULL){
                        if(strcmp(prod_atual,apontador->produto) == 0){
                            temp = apontador;
                            if(ponteiro_atual->pont_prox != NULL){
                                apontador = ponteiro_atual->pont_prox;
                            } else {
                                apontador = ponteiro_atual;
                            }
                            free(temp);
                            break;
                        }
                    }
                }
            }
        } else {
            printf("%s", apontador->produto);
        }
        if(apontador->pont_prox == NULL)
            break;
    }
    
    printf("TESTE");
    //retornando apontador para o inicio da lista
    while(apontador->pont_ant != NULL){
        apontador = apontador->pont_ant;
    }
    
    while(apontador->produto != NULL){
        printf("%s", apontador->produto);
        apontador = apontador->pont_prox;
    }

    return 0;
}



