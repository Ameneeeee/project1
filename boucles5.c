#include <stdio.h>

int main() {
    int n;
    int somme = 0; // Variable pour stocker la somme

    // Demander à l'utilisateur d'entrer un nombre entier positif
    printf("Entrez un nombre entier n : ");
    scanf("%d", &n);

    // Vérifier que n est positif
    if (n < 1) {
        printf("Veuillez entrer un nombre entier positif.\n");
        return 1; // Sortie avec une erreur
    }

    // Calculer la somme des n premiers entiers naturels
    for (int i = 1; i <= n; i++) {
        somme += i; // Ajouter i à la somme
    }

    // Afficher le résultat
    printf("La somme des %d premiers entiers naturels est : %d\n", n, somme);

    return 0;
}
