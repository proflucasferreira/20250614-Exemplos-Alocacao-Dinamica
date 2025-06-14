#include <stdio.h>
#include <stdlib.h>

int main() {
    while (1) {
        
        int *p = malloc(1024 * 1024 * 100); // Aloca 100 MB de cada vez
        
        if (p == NULL) {
            printf("Falha na alocacao (memoria esgotada)\n");
            exit(1);
        }

        printf("Alocou 100 MB...\n");
    }
    return 0;
}