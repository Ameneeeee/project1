#include <stdio.h>
#include <string.h>

#define MAX_RESERVATIONS 100

typedef struct {
    char firstName[50];
    char lastName[50];
    char phone[15];
    int age;
    char status[20];
    int ref; // Référence unique
    char date[11]; // Date de réservation
} Reservation;

Reservation reservations[MAX_RESERVATIONS];
int count = 0;

// Fonction pour ajouter une réservation
void addReservation() {
    if (count >= MAX_RESERVATIONS) {
        printf("Nombre maximum de réservations atteint.\n");
        return;
    }
    Reservation r;
    r.ref = count + 1; // Génération automatique de la référence

    printf("Entrez le nom: ");
    scanf("%s", r.lastName);
    printf("Entrez le prénom: ");
    scanf("%s", r.firstName);
    printf("Entrez le téléphone: ");
    scanf("%s", r.phone);
    printf("Entrez l'âge: ");
    scanf("%d", &r.age);
    printf("Entrez le statut (validé, reporté, annulé, traité): ");
    scanf("%s", r.status);
    printf("Entrez la date de réservation (YYYY-MM-DD): ");
    scanf("%s", r.date);

    reservations[count++] = r; // Ajouter la réservation
    printf("Réservation ajoutée avec succès! Réf: %d\n", r.ref);
}

// Fonction pour afficher toutes les réservations
void displayReservations() {
    printf("\nListe des réservations:\n");
    for (int i = 0; i < count; i++) {
        printf("Réf: %d, Nom: %s, Prénom: %s, Téléphone: %s, Âge: %d, Date: %s, Statut: %s\n",
               reservations[i].ref, reservations[i].lastName, reservations[i].firstName,
               reservations[i].phone, reservations[i].age, reservations[i].date,
               reservations[i].status);
    }
}

// Fonction pour rechercher par référence
void searchByReference(int ref) {
    if (ref > 0 && ref <= count) {
        Reservation r = reservations[ref - 1];
        printf("Détails de la réservation: Réf: %d, Nom: %s, Prénom: %s, Téléphone: %s, Âge: %d, Date: %s, Statut: %s\n",
               r.ref, r.lastName, r.firstName, r.phone, r.age, r.date, r.status);
    } else {
        printf("Référence invalide.\n");
    }
}

// Fonction pour rechercher par nom
void searchByName(char *name) {
    printf("\nRecherche par nom:\n");
    for (int i = 0; i < count; i++) {
        if (strcmp(reservations[i].lastName, name) == 0 || strcmp(reservations[i].firstName, name) == 0) {
            printf("Réf: %d, Nom: %s, Prénom: %s, Téléphone: %s, Âge: %d, Date: %s, Statut: %s\n",
                   reservations[i].ref, reservations[i].lastName, reservations[i].firstName,
                   reservations[i].phone, reservations[i].age, reservations[i].date,
                   reservations[i].status);
        }
    }
}

// Fonction pour modifier une réservation
void modifyReservation(int ref) {
    if (ref > 0 && ref <= count) {
        Reservation *r = &reservations[ref - 1];
        printf("Modifier la réservation pour %s %s:\n", r->firstName, r->lastName);
        printf("Nouveau téléphone: ");
        scanf("%s", r->phone);
        printf("Nouvel âge: ");
        scanf("%d", &r->age);
        printf("Nouveau statut: ");
        scanf("%s", r->status);
        printf("Nouvelle date: ");
        scanf("%s", r->date);
        printf("Réservation modifiée avec succès!\n");
    } else {
        printf("Référence invalide.\n");
    }
}

// Fonction pour supprimer une réservation
void deleteReservation(int ref) {
    if (ref > 0 && ref <= count) {
        for (int i = ref - 1; i < count - 1; i++) {
            reservations[i] = reservations[i + 1]; // Déplacer les réservations
        }
        count--;
        printf("Réservation supprimée avec succès!\n");
    } else {
        printf("Référence invalide.\n");
    }
}

// Fonction pour trier les réservations par nom
void sortByName() {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (strcmp(reservations[j].lastName, reservations[j + 1].lastName) > 0) {
                Reservation temp = reservations[j];
                reservations[j] = reservations[j + 1];
                reservations[j + 1] = temp;
            }
        }
    }
    printf("Réservations triées par nom.\n");
}

// Fonction principale
int main() {
    int choice, ref;
    char name[50];

    do {
        printf("\nMenu Principal:\n");
        printf("1. Ajouter une réservation\n");
        printf("2. Afficher les réservations\n");
        printf("3. Rechercher une réservation par référence\n");
        printf("4. Rechercher une réservation par nom\n");
        printf("5. Modifier une réservation\n");
        printf("6. Supprimer une réservation\n");
        printf("7. Trier les réservations par nom\n");
        printf("8. Quitter\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addReservation();
                break;
            case 2:
                displayReservations();
                break;
            case 3:
                printf("Entrez la référence: ");
                scanf("%d", &ref);
                searchByReference(ref);
                break;
            case 4:
                printf("Entrez le nom à rechercher: ");
                scanf("%s", name);
                searchByName(name);
                break;
            case 5:
                printf("Entrez la référence à modifier: ");
                scanf("%d", &ref);
                modifyReservation(ref);
                break;
            case 6:
                printf("Entrez la référence à supprimer: ");
                scanf("%d", &ref);
                deleteReservation(ref);
                break;
            case 7:
                sortByName();
                break;
            case 8:
                printf("Sortie du programme.\n");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (choice != 8);

    return 0;
}
