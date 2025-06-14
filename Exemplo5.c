#include <stdio.h>
#include <stdlib.h>

int main() {
    
    // Alocação com malloc
    int *p;
    p = (int *) malloc(50*sizeof(int));
    if (p == NULL) {
        printf("Erro: Memoria Insuficiente!\n");
    }
    
    // Alocação com calloc
    int *pl;
    pl = (int *) calloc(50, sizeof(int));
    if (pl == NULL) {
        printf("Erro: Memoria Insuficiente!\n");
    }

    return 0;
}