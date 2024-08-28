#include <stdio.h>

int main()
{
    int numfunc, ht;
    double vh, res;
    
    scanf("%d", &numfunc);
    
    scanf("%d", &ht);
    
    scanf("%lf", &vh);
    
    res = ht * vh;
    
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", numfunc, res);

    return 0;
}