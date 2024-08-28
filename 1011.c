#include <stdio.h>

int main()
{
    double R, res;
    
    // Corrige o scanf para passar o endereço de 'R'
    scanf("%lf", &R);
        
    // Calcula o volume da esfera
    res = (4.0/3) * 3.14159 * R * R * R;
    
    // Imprime o resultado com 3 casas decimais
    printf("VOLUME = %.3lf\n", res);

    return 0;
}