#include <stdio.h>
#include <stdlib.h>

//function that verify lines by sudoku game
int VerifyLines(int tamanho, int mt[tamanho][tamanho]){
    //structure that traverse correspondent sudoku lines
    for(int i=0; i<tamanho; i++){
        //take the inicial position and compare to others. If dont have equals, change to next number, else, return 1.
        for(int j=0; j<tamanho-1; j++){
            for(int h=j+1; h<tamanho; h++){
                if(mt[i][j] == mt[i][h]){
                    printf("chupeta");
                    return 1;
                }
            }
        }
    }
    return 0;
}

//function that verify columns by sudoku game
int VerifyColumns(int tamanho, int mt[tamanho][tamanho]){
    //structure that traverse correspondent sudoku lines
    for(int j=0; j<tamanho; j++){
        //take the incial position and compare to others. If dont have equals, change to next number, else, return 1.
        for(int i=0; i<tamanho-1;i++){
            for(int h=i+1; h<tamanho; h++){
                if(mt[i][j] == mt[i][h]){
                    printf("alegriia");
                    return 1;
                }
            }
        }
    }
    return 0;
}

//function that verify groups by sudoku game
int VerifyGroups(int mt[9][9]){
    int inicio, ma[3][3], l, c, countlinha, countcoluna, temigual;
    //structures that traverse from 0 at 9 taking the inicial number of groups on sudoku
    for(int gplinha=0; gplinha<9; gplinha+=3){
        for(int gpcoluna=0; gpcoluna<9; gpcoluna+=3){
            //traverse sudoku game taking the inicial number of groups
            for(int i=gplinha; i<gplinha+3; i++){
                countlinha=0;
                for(int j=gpcoluna; j<gpcoluna+3; j++){
                    countcoluna=0;
                    //taking the numbers of groups and add in separate matriz (ma)
                    for(l=0; l<3; l++){
                        for(c=0; c<3; c++){
                            ma[l][c] = mt[gplinha+countlinha][gpcoluna+countcoluna];      
                        }
                    }
                    //verify the separate matriz
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            for (int k = 0; k < 3; k++) {
                                for (int l = 0; l < 3; l++) {
                                    if (i != k || j != l) { //don´t verify equals positions
                                        //if have equal numbers in the same group, return 1
                                        if (ma[i][j] == ma[k][l]) {
                                            printf("pipipipippopopopp");
                                            return 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }    
    }
    return 0;
}

int main(){
    int n, l, c, cont=0, lmat=0;
    //take a number of games (sudokus)
    scanf("%d", &n);
    int matriz[n][9][9];
    //take the game values and add they in the matriz
    for(l=0; l<n*9; l++){
        if(9%l==0){
            printf("eitaaa");
            lmat = 0;
            cont+=1;
        }
        for(c=0; c<9; c++){
            scanf("%d", &matriz[cont][lmat][c]);
        }
        lmat++;
    }
    for(int x=0; x<n; x++){
        printf("Instancia %d\n", x);
        printf("%d\n", matriz[x]);
        if(VerifyLines(9, matriz[x]) == 1 || VerifyColumns(9,matriz[x]) == 1 || VerifyGroups(matriz[x]) == 1){
            if(x!=n){
                printf("NAO\n\n");
            }else{
                printf("NAO");
            }
        }else{
            if(x!=n){
                printf("SIM\n\n");
            }else{
                printf("SIM");
            }
        }
    }
    return 0;
}