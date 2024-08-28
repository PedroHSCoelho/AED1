#include <stdio.h>
int main() {
    int n, i, num1, num2, t;
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
        if(i == 1){
            num1 = 0;
            printf("%d",num1);
        }
        else if(i == 2){
            num2 = 1;
            printf("%d",num2);
        }
        else{
            t = num1 + num2;
            printf("%d",t);
            num1 = num2;
            num2 = t;
        }
        if(i == n){
            printf("\n");
        }
        else{
            printf(" ");
        }
    }
    return 0;
}