#include <stdio.h>;
#include <stdlib.h>;

void hanoi(int n, char origem, char destino, char auxiliar){
    //Se sobrar apenas o disco 1, fazer o movimento e retornar
    if(n==1){
        printf("\nMova o disco 1 da base %c para a base %c", origem, destino);
        return;
    }
    //Mover o n-1 disco de A para B, usando C de auxiliar
    hanoi(n-1, origem, auxiliar, destino);
    //Mover os discos restantes de A para C
    printf("\nMova o disco %d da base %c para a base %c", n, origem, destino);
    //Mover os discos de B para C usando A como auxiliar
    hanoi(n-1, auxiliar, destino, origem);
}

main(){
    int n;
    printf("Digite o número de discos:\n");
    scanf("%d", &n);
    printf("Para resolver a torre de hanois faça: \n\n");
    hanoi(n, 'A', 'B', 'C');
    printf("\n");
    return 0;
}