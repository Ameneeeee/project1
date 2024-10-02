

#include <stdio.h>

int main() {
    // Déclaration des variables
    int base, exposant, i;
    long long resultat = 1; // Utiliser long long pour gérer de grandes puissances

    // Demande à l'utilisateur de saisir la base et l'exposant
    printf("Entrez la base : ");
    scanf("%d", &base);
    
    printf("Entrez l'exposant : ");
    scanf("%d", &exposant);

    // Calculer la puissance en utilisant une boucle
    for (i = 0; i < exposant; i++) {
        resultat *= base; // Multiplier le résultat par la base
    }

    // Afficher le résultat
    printf("%d^%d = %lld\n", base, exposant, resultat);

    return 0;
}
