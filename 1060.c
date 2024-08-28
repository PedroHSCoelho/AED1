#include <stdio.h>
 
int main() {
 
    int x;
    float n1, n2, n3, n4, n5, n6;
    scanf("%f %f %f %f %f %f", &n1, &n2, &n3, &n4, &n5, &n6);
    x = 0;
    if(n1 > 0){
        x = x + 1;
    }
    if(n2 > 0){
        x = x + 1;
    }
    if(n3 > 0){
        x = x + 1;
    }
    if(n4 > 0){
        x = x + 1;
    }
    if(n5 > 0){
        x = x + 1;
    }
    if(n6 > 0){
        x = x + 1;
    }
    printf("%d valores positivos\n", x);
 
    return 0;
}