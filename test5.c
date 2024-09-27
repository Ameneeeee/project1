

#include <stdio.h>

int main() {
    float temp_celsius;

    // Demander la température en Celsius
    printf("Entrez la température en Celsius : ");
    scanf("%f", &temp_celsius);

    // Déterminer l'état de l'eau
    if (temp_celsius < 0) {
        printf("L'état de l'eau à %.2f °C est : Solide\n", temp_celsius);
    } else if (temp_celsius >= 0 && temp_celsius < 100) {
        printf("L'état de l'eau à %.2f °C est : Liquide\n", temp_celsius);
    } else {
        printf("L'état de l'eau à %.2f °C est : Gaz\n", temp_celsius);
    }

    return 0;
}
