#include <stdio.h>

int main() {
    float kmh, mps;

    // Demander à l'utilisateur d'entrer la vitesse en km/h
    printf("Entrez la vitesse en kilomètres par heure (km/h) : ");
    scanf("%f", &kmh);

    // Conversion en m/s
    mps = kmh * 0.27778;

    // Affichage du résultat
    printf("%.2f km/h équivalent à %.2f m/s.\n", kmh, mps);

    return 0;
}
