#include <stdio.h>

int main() {
    // Initialisation du tableau avec les valeurs données
    int tableau[] = {1, 2, 3, 4, 5};
    int taille = sizeof(tableau) / sizeof(tableau[0]); // Calculer la taille du tableau

    // Affichage des valeurs du tableau
    for (int i = 0; i < taille; i++) {
        printf("%d\n", tableau[i]);
    }

    return 0;
}
