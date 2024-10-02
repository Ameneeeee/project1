# include <stdio.h>

int main() {
    
    int age;

    
    printf("Veuillez saisir votre âge : ");
    scanf("%d", &age);

    
    if (age >= 18) {
        printf("Vous êtes éligible pour voter.\n");
    } else {
        printf("Vous n'êtes pas éligible pour voter.\n");
    }

    return 0;
}
