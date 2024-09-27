#include <stdio.h>

int main() {
    int n, i;
    int somme = 0;

    // Demande à l'utilisateur de saisir un nombre entier
    printf("Veuillez entrer un nombre entier n : ");
    scanf("%d", &n);

    // Vérifie que n est positif
    if (n < 1) {
        printf("Veuillez entrer un nombre entier positif.\n");
        return 1; // Termine le programme si n n'est pas positif
    }

    // Calcule la somme des n premiers entiers naturels
    for (i = 1; i <= n; i++) {
        somme += i; // Ajoute i à la somme
    }

    // Affiche le résultat
    printf("La somme des %d premiers entiers naturels est : %d\n", n, somme);

    return 0;
