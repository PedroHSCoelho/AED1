#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 1000

// Função para verificar se a permutação desejada é possível
bool podeReorganizar(int N, int perm[]) {
    int pilha[MAX];
    int topo = -1;
    int proximoVagao = 1;
    
    for (int i = 0; i < N; i++) {
        while (proximoVagao <= N && (topo == -1 || pilha[topo] != perm[i])) {
            pilha[++topo] = proximoVagao++;
        }
        if (pilha[topo] == perm[i]) {
            topo--;
        } else {
            return false;
        }
    }
    
    return true;
}

int main() {
    int N;
    while (scanf("%d", &N) && N != 0) {
        int perm[MAX];
        while (true) {
            scanf("%d", &perm[0]);
            if (perm[0] == 0) break;
            
            for (int i = 1; i < N; i++) {
                scanf("%d", &perm[i]);
            }
            
            if (podeReorganizar(N, perm)) {
                printf("Yes\n");
            } else {
                printf("No\n");
            }
        }
        
        printf("\n");
    }
    
    return 0;
}