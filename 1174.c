#include <stdio.h>

int main() {
    
    double array[100];
    int i, j;
    
    for(i = 0; i < 100; i++){
        scanf("%lf", &array[i]);
    }
    
    for(j = 0; j < 100; j++){
        if(array[j] <= 10){
            printf("A[%d] = %.1lf\n", j, array[j]);
        }
    }
    
    
    
    
    
}