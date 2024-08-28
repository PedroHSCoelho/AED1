#include <stdio.h>
 
int main() {
 
    double nota, media, cont = 0, soma = 0;
    while(cont != 2){
        scanf("%lf", &nota);
        if(nota >= 0 && nota <= 10){
            soma += nota;
            cont++;
        }
        else{
            printf("nota invalida\n");
        }
    }
    media = soma / 2;
    printf("media = %.2lf\n", media);
 
    return 0;
}