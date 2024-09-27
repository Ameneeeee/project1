#include <stdio.h>

// Déclaration de la fonction pour calculer la somme
int somme(int a, int b) {
    return a + b; // Retourne la somme de a et b
}

int main() {
    int num1, num2;

    // Demander à l'utilisateur d'entrer deux entiers
    printf("Entrez le premier entier : ");
    scanf("%d", &num1);
    printf("Entrez le deuxième entier : ");
    scanf("%d", &num2);

    // Appeler la fonction somme et afficher le résultat
    int resultat = somme(num1, num2);
    printf("La somme de %d et %d est : %d\n", num1, num2, resultat);

    return 0;
}
