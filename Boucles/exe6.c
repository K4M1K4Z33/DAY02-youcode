#include <stdio.h>

int main() {
    int num;
    
    printf("=== Generateur de nombres pairs ===\n");
    printf("Combien de nombres pairs voulez-vous? ");
    scanf("%d", &num);
    
    printf("Les %d premiers nombres pairs sont :\n", num);
    
    for (int i = 1; i <= num; i++) {
        printf("%d", 2*i);
        if (i < num) {
            printf(", ");
        }
    }
    
    printf("\n");
    return 0;
}