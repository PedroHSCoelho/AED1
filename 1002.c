#include <stdio.h>
#include <math.h>

int main()
{
    double R, A;
    
    scanf("%lf", &R);
    
    A = R*R*3.14159;
    
    printf("A=%.4lf\n", A);

    return 0;
}