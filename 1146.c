#include <stdio.h>
 
int main() {
    int x = 1, i;
    while(x != 0){
        scanf("%d", &x);
        for(i = 1; i < x; i++){
            printf("%d ", i);
        }
        if(x != 0){
            printf("%d\n", x);
        }
    }
 
    return 0;
}