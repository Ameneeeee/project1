#include <stdio.h>
#include <string.h>

int main() {
    char principale[100];
    char sousChaine[100];

    // Lire la chaîne principale
    printf("Entrez la chaîne principale : ");
    fgets(principale, sizeof(principale), stdin);
    // Enlever le saut de ligne à la fin si présent
    principale[strcspn(principale, "\n")] = 0;

    // Lire la sous-chaîne
    printf("Entrez la sous-chaîne : ");
    fgets(sousChaine, sizeof(sousChaine), stdin);
    // Enlever le saut de ligne à la fin si présent
    sousChaine[strcspn(sousChaine, "\n")] = 0;

    // Vérifier si la sous-chaîne est présente dans la chaîne principale
    if (strstr(principale, sousChaine) != NULL) {
        printf("La sous-chaîne '%s' est trouvée dans la chaîne principale.\n", sousChaine);
    } else {
        printf("La sous-chaîne '%s' n'est pas trouvée dans la chaîne principale.\n", sousChaine);
    }

    return 0;
}
