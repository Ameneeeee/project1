#include <stdio.h>

int main() {
    int n;

    // Demander le nombre d'éléments
    printf("Entrez le nombre d'éléments du tableau: ");
    scanf("%d", &n);

    int tableau[n];
    int somme = 0;

    // Saisir les éléments du tableau
    printf("Entrez les éléments du tableau:\n");
    for (int i = 0; i < n; i++) {
        printf("Élément %d: ", i + 1);
        scanf("%d", &tableau[i]);
        somme += tableau[i]; // Ajouter l'élément à la somme
    }

    // Calculer et afficher la moyenne
    double moyenne = (double)somme / n;
    printf("La moyenne des éléments est: %.2f\n", moyenne);

    return 0;
}
