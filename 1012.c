#include <stdio.h>

int main()
{
    double A, B, C;
    double areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;
    const double PI = 3.14159;

    // Leitura dos três valores de entrada
    scanf("%lf %lf %lf", &A, &B, &C);

    // a) Área do triângulo retângulo que tem A por base e C por altura
    areaTriangulo = (A * C) / 2.0;

    // b) Área do círculo de raio C
    areaCirculo = PI * C * C;

    // c) Área do trapézio que tem A e B por bases e C por altura
    areaTrapezio = ((A + B) * C) / 2.0;

    // d) Área do quadrado que tem lado B
    areaQuadrado = B * B;

    // e) Área do retângulo que tem lados A e B
    areaRetangulo = A * B;

    // Saída dos resultados com 3 casas decimais
    printf("TRIANGULO: %.3lf\n", areaTriangulo);
    printf("CIRCULO: %.3lf\n", areaCirculo);
    printf("TRAPEZIO: %.3lf\n", areaTrapezio);
    printf("QUADRADO: %.3lf\n", areaQuadrado);
    printf("RETANGULO: %.3lf\n", areaRetangulo);

    return 0;
}