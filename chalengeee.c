#include <stdio.h>

int main() {

    int tableau[5];
    int i, max, min;
    
    printf("Veuillez saisir 5 entiers :\n");
    for (i = 0; i < 5; i++) {
        printf("Entrez l'entier %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }
    
    max = tableau[0];
    min = tableau[0];
    
    for (i = 1; i < 5; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
        if (tableau[i] < min) {
            min = tableau[i];
        }
    }

    printf("Le plus grand : %d\n", max);    printf("Le plus petit : %d\n", min);

    return 0;
}
