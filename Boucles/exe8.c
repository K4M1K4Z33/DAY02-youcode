#include <stdio.h>

int main() {
    int num;
    
    printf("=== Suite de fibonacci ===\n");
    printf("Combien de termes voulez-vous? ");
    scanf("%d", &num);
    
    if (num <= 0) {
        printf("Veuillez entrer un nombre positif.\n");
        return 0;
    }
    
    printf("Les %d premiers termes : ", num);
    
    int a = 0, b = 1;
    
    for (int i = 1; i <= num; i++) {
        printf("%d", a);
        if (i < num) {
            printf(", ");
        }
        
        int suivant = a + b;
        a = b;
        b = suivant;
    }
    
    return 0;
}