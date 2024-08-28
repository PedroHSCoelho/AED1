#include <stdio.h>

int main()
{
    char nome[50];
    double sf, tv, res;
    
    // Para ler uma string, use %s e não %c
    scanf("%s", nome);
    
    // Para ler números decimais, use %lf, mas sem o .2 antes
    scanf("%lf", &sf);
    
    scanf("%lf", &tv);
    
    // Calcula o resultado
    res = (tv * 0.15) + sf;
    
    // Imprime o resultado formatado com duas casas decimais
    printf("TOTAL = R$ %.2lf\n", res);

    return 0;
}