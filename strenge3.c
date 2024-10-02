
#include <stdio.h>

int main() {
    char str[100];

    printf("Entrez une chaîne de caractères : ");
    fgets(str, sizeof(str), stdin);

    printf("Vous avez entré : %s", str);

    return 0;
}
