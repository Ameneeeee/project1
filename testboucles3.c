#include <stdio.h>

int main() {
    // Déclaration des variables pour la base et l'exposant
    int base, exposant;
    long long resultat = 1; // Utiliser long long pour éviter les débordements

    // Demander à l'utilisateur d'entrer la base et l'exposant
    printf("Entrez la base : ");
    scanf("%d", &base);
    printf("Entrez l'exposant : ");
    scanf("%d", &exposant);

    // Calculer la puissance en utilisant une boucle
    for (int i = 0; i < exposant; i++) {
        resultat *= base;
    }

    // Afficher le résultat
    printf("%d^%d = %lld\n", base, exposant, resultat);

    return 0;
}
