#include <stdio.h>
 
int main() {
 
    int n, i;
    double x, y, divisao;
    scanf("%d", &n);
    for(i = 0; i < n; i ++){
        scanf("%lf %lf", &x, &y);
        if(y == 0){
            printf("divisao impossivel\n");
        }
        else{
            divisao = x / y;
            printf("%.1lf\n", divisao);
        }
    }
    
    return 0;
}