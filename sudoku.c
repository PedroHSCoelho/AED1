#include <stdio.h>
#include <stdlib.h>

//function that verify lines by sudoku game
int VerifyLines(int mt[9][9]){
    //structure that traverse correspondent sudoku lines
    for(int i=0; i<9; i++){
        //take the inicial position and compare to others. If dont have equals, change to next number, else, return 1.
        for(int j=0; j<8; j++){
            for(int h=j+1; h<9; h++){
                if(mt[i][j] == mt[i][h]){
                    return 1;
                }
            }
        }
    }
    return 0;
}

//function that verify columns by sudoku game
int VerifyColumns(int mt[9][9]){
    //structure that traverse correspondent sudoku lines
    for(int j=0; j<9; j++){
        //take the incial position and compare to others. If dont have equals, change to next number, else, return 1.
        for(int i=0; i<8;i++){
            for(int h=i+1; h<9; h++){
                if(mt[i][j] == mt[h][j]){
                    return 1;
                }
            }
        }
    }
    return 0;
}

//function that traverse the groups checking if have same numbers
int blocos(int mt[9][9], int x, int y){    
    int atual=0, comp=0, res=0, contiguais;
    //take the number that be use for check with others, inicializing with first indice to matriz 3x3
    for(int a=y; a<y+3; a++){
        for(int b=x; b<x+3; b++){
            atual = mt[b][a];
            //variable create to verify if have same numbers
            contiguais=0;
            //take others number for verify with "atual"
            for(int c=y; c<y+3; c++){
                for(int l=x; l<x+3; l++){
                    comp = mt[l][c];
                    //checking
                    if(atual == comp){
                        contiguais++;
                    }
                }
            }
            //if found same numbers, return 1
            if(contiguais>1){
                return 1;
            }
        }
    }
    return 0;
}

//function that verify groups by sudoku game
int VerifyGroups(int mt[9][9]){
    int res;
    //structures that traverse from 0 at 9 taking the inicial number of groups on sudoku
    for(int gplinha=0; gplinha<9; gplinha+=3){
        for(int gpcoluna=0; gpcoluna<9; gpcoluna+=3){
            res = blocos(mt, gplinha, gpcoluna);
        }
    }
    return res;
}

int main(){
    int n, l=0, c=0, matriz[9][9];
    //take a number of games (sudokus)
    scanf("%d", &n);
    //take the game values and add it in the matriz
    for(int i=1; i<=n; i++){
        for(l=0; l<9; l++){
            for(c=0; c<9; c++){
                scanf("%d", &matriz[l][c]);
            }
        }
        printf("Instancia %d\n", i);
        if(VerifyLines(matriz) == 1 || VerifyColumns(matriz) == 1 || VerifyGroups(matriz) == 1){
            printf("NAO\n\n");
        }else{
            printf("SIM\n\n");
        }
    }
    return 0;
}