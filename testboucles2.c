#include <stdio.h>

int main() {
    // Déclaration de la variable pour le nombre
    int n;

    // Demander à l'utilisateur d'entrer un nombre entier
    printf("Entrez un nombre entier n : ");
    scanf("%d", &n);

    // Afficher les n premiers nombres pairs
    printf("Les %d premiers nombres pairs sont : ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d", 2 * i);
        if (i < n) {
            printf(", "); // Affiche une virgule après chaque nombre sauf le dernier
        }
    }
    printf("\n"); // Saut de ligne après l'affichage

    return 0;
}
