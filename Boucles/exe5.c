#include <stdio.h>

int main() {
    int base, exposant;
    int resultat = 1;
    
    printf("=== Calculatrice de puissance ===\n");
    printf("Entrez la base : ");
    scanf("%d", &base);
    printf("Entrez l exposant : ");
    scanf("%d", &exposant);
    
    if (exposant == 0) {
        printf("%d^%d = 1\n", base, exposant);
        return 0;
    }

    if (exposant < 0) {
        printf("Les exposants negatifs ne sont pas supportes.\n");
        return 0;
    }

    printf("Calcul : ");
    for (int i = 1; i <= exposant; i++) {
        resultat *= base;
        printf("%d", base);
        if (i < exposant) {
            printf(" * ");
        }
    }
    
    printf(" = %ld\n", resultat);
    printf("%d^%d = %ld\n", base, exposant, resultat);
    
    return 0;
}