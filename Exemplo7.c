#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *p, i;
    p = (int *) malloc(5 * sizeof(int));
    
    if (p == NULL) {
        printf("Error: Memoria Insuficiente!\n");
        system("pause");
        exit(1);
    }
    
    for (i = 0; i < 5; i++) {
        p[i] = i + 1;
    }
    
    for (i = 0; i < 5; i++) {
        printf("%d\n", p[i]);
    }
    
    // Libera a memória alocada
    free(p);

    printf("\n");

    for (i = 0; i < 5; i++) {
        printf("%d\n", p[i]);
    }

    return 0;

}