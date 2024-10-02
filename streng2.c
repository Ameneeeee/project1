
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];  // Déclaration d'un tableau pour la première chaîne
    char str2[100];  // Déclaration d'un tableau pour la deuxième chaîne

    // Lecture des deux chaînes
    printf("Entrez la première chaîne : ");
    fgets(str1, sizeof(str1), stdin);
    printf("Entrez la deuxième chaîne : ");
    fgets(str2, sizeof(str2), stdin);

    // Supprimer le caractère de nouvelle ligne si présent
    str1[strcspn(str1, "\n")] = 0; // Remplace le '\n' par '\0'
    str2[strcspn(str2, "\n")] = 0; // Remplace le '\n' par '\0'

    // Comparaison des chaînes
    if (strcmp(str1, str2) == 0) {
        printf("Les chaînes sont égales.\n");
    } else {
        printf("Les chaînes sont différentes.\n");
    }

    return 0;
}