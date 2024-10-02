#include <stdio.h>

int main() {
    int n;

    // Demander la taille du tableau
    printf("Entrez la taille du tableau: ");
    scanf("%d", &n);

    int tableau[n];

    // Saisir les éléments du tableau
    printf("Entrez les éléments du tableau:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    // Inverser et afficher le tableau
    printf("Tableau inversé:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
