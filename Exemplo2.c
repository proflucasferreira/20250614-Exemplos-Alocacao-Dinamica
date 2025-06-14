#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;
    
    // Aloca memória para 5 inteiros
    p = (int *) malloc(5 * sizeof(int));
    
    int i;
    for (i = 0; i < 5; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &p[i]);  // Lê valores para o array alocado
    }
    
    return 0;
}