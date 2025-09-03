#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("=== Sommateur de Nombres Naturels === \n");
    printf("Entrez un nombre: ");
    scanf("%d", &num);
    
    for (int i = 1; i <= num; i++) sum += i;
    printf("La somme de Nombres Naturels: %d\n", sum);
    
    return 0;
}