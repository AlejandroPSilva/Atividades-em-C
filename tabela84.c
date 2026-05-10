#include <stdio.h>

int main() {
    int numero;
    
    printf("=== TABELA ASCII 50-75 ===\n");
    
    do {
        printf("\nDigite numero (50-75, 0 para sair): ");
        scanf("%d", &numero);
        
        if (numero >= 50 && numero <= 75) {
            printf("ASCII %d = '%c'\n", numero, (char)numero);
        } else if (numero != 0) {
            printf("Fora do intervalo! Use 50-75.\n");
        }
        
    } while (numero != 0);
    
    return 0;
}