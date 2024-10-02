
#include <stdio.h>

int main() {
    float temperature;

    // Demande la température en Celsius à l'utilisateur
    printf("Entrez la température en Celsius : ");
    scanf("%f", &temperature);

    // Détermine l'état de l'eau en fonction de la température
    if (temperature < 0) {
        printf("À %.2f°C, l'état de l'eau est : Solide\n", temperature);
    } else if (temperature >= 0 && temperature < 100) {
        printf("À %.2f°C, l'état de l'eau est : Liquide\n", temperature);
    } else {
        printf("À %.2f°C, l'état de l'eau est : Gaz\n", temperature);
    }

    return 0;
}
