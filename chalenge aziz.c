#include <stdio.h>

int main() {
    
    float longueur, largeur, aire, perimetre;

    
    printf("Entrez la longueur du rectangle : ");
    scanf("%f", &longueur);
    
    printf("Entrez la largeur du rectangle : ");
    scanf("%f", &largeur);

    
    aire = longueur * largeur; 
    perimetre = 2 * (longueur + largeur); 

    
    printf("L'aire du rectangle est : %.2f\n", aire);
    printf("Le périmètre du rectangle est : %.2f\n", perimetre);

    return 0;
}
