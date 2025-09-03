#include <stdio.h>

int main() {
    int num;
    
    printf("=== Generateur de nombres impairs ===\n");
    printf("Combien de nombres impairs voulez-vous? ");
    scanf("%d", &num);
    
    printf("Les %d premiers nombres impairs sont :\n", num);
    
    for (int i = 1; i <= num; i++) {
        printf("%d", 2*i - 1);
        if (i < num) {
            printf(", ");
        }
    }
    
    printf("\n");
    return 0;
}