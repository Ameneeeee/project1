#include <stdio.h>

int main() {
    // Déclaration de la variable pour l'âge
    int age;

    // Demander à l'utilisateur de saisir son âge
    printf("Veuillez saisir votre âge : ");
    scanf("%d", &age);

    // Vérification de l'éligibilité
    if (age >= 18) {
        printf("Vous êtes éligible pour voter.\n");
    } else {
        printf("Vous n'êtes pas éligible pour voter.\n");
    }

    return 0;
}
