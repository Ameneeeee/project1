
#include <stdio.h>

int main(){
    char str[100];
    int length = 0;

    printf("Entrez une chaîne de caractères : ");
    fgets(str, sizeof(str), stdin);

    // Calcul de la longueur
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    printf("La longueur de la chaîne est : %d/n" );

    return 0;
}
