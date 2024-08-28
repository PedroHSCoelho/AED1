#include <stdio.h>

int main()
{
    int cod, qtd;
    double valor, res = 0.0;  // Inicializa 'res' com 0.0
    
    for(int i = 0; i < 2; i++){
        // Corrige o formato de scanf e adiciona os & para passar os endereços das variáveis
        scanf("%d %d %lf", &cod, &qtd, &valor);
        
        res += qtd * valor;  // Corrige a falta de ponto e vírgula
    }
    
    printf("VALOR A PAGAR: R$ %.2lf\n", res);

    return 0;
}