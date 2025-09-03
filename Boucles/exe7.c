#include <stdio.h>

int main() {
    int nombre, inverse = 0;
    
    printf("=== Inverseur de nombre ===\n");
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);
    
    printf("Nombre original : %d\n", nombre);
    
    int temp = nombre;
    while (temp > 0) {
        int chiffre = temp % 10;
        inverse = inverse * 10 + chiffre;
        temp = temp / 10;
    }
    
    printf("Nombre inverse : %d\n", inverse);
    
    return 0;
}
