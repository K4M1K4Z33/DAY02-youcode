#include <stdio.h>
#include <string.h>

int main() {
    char nom[50];
    int notes[5];
    int total = 0;
    int max, min;
    float moyenne;
    
    
    printf("==============================\n");
    printf("   Gestion des notes\n");
    printf("==============================\n\n");
    
   
    printf("Nom de letudiant : ");
    scanf("")
    for (int i = 0; i < 5; i++) {
        do {
            printf("Saisissez la note %d : ", i + 1);
            scanf("%d", &notes[i]);
            
            if (notes[i] < 0 || notes[i] > 100) {
                printf("Erreur : La note doit être comprise entre 0 et 100.\n");
            }
        } while (notes[i] < 0 || notes[i] > 100);
    }
} 