#include <stdio.h>
 
int main() {
 
    int X, Y;
    float total;
    scanf("%d %d", &X, &Y);
    if(X == 1){
        total = (4 * Y);
        printf("Total: R$ %.2f\n", total);
    }
    else if(X == 2){
        total = (4.5 * Y);
        printf("Total: R$ %.2f\n", total);
    }
    else if(X == 3){
        total = (5 * Y);
        printf("Total: R$ %.2f\n", total);
    }
    else if(X == 4){
        total = (2 * Y);
        printf("Total: R$ %.2f\n", total);
    }
    else if(X == 5){
        total = (1.5 * Y);
        printf("Total: R$ %.2f\n", total);
    }
 
    return 0;
}