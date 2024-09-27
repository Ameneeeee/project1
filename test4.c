#include <stdio.h>
#include <math.h>

int main() {
    // Déclaration des coordonnées des points
    float x1, y1, z1;
    float x2, y2, z2;

    // Demander les coordonnées du premier point
    printf("Entrez les coordonnées du premier point (x1, y1, z1) : ");
    scanf("%f %f %f", &x1, &y1, &z1);

    // Demander les coordonnées du deuxième point
    printf("Entrez les coordonnées du deuxième point (x2, y2, z2) : ");
    scanf("%f %f %f", &x2, &y2, &z2);

    // Calculer la distance
    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));

    // Afficher le résultat
    printf("La distance entre les deux points est : %.2f\n", distance);

    return 0;
}
