#include <stdio.h>

int main() {
    // Déclaration de la variable pour le nombre
    int nombre;

    // Demander à l'utilisateur d'entrer un nombre
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    // Afficher la table de multiplication
    printf("Table de multiplication de %d :\n", nombre);
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", nombre, i, nombre * i);
    }

    return 0;
}
