#include <stdio.h>
#include <string.h>

#define MAX_RESERVATIONS 100

typedef struct {
    char name[50], date[11];
    int ref;
} Reservation;

Reservation reservations[MAX_RESERVATIONS];
int count = 0;

void addReservation() {
    Reservation newReservation;
    newReservation.ref = ++count;
    printf("Nom : "); scanf("%s", newReservation.name);
    printf("Date : "); scanf("%s", newReservation.date);
    reservations[count - 1] = newReservation;
}

void searchByReference(int ref) {
    if (ref <= count) 
        printf("Réf: %d, Nom: %s, Date: %s\n", reservations[ref - 1].ref, reservations[ref - 1].name, reservations[ref - 1].date);
}

void searchByName(const char *name) {
    for (int i = 0; i < count; i++)
        if (strcmp(reservations[i].name, name) == 0) 
            printf("Réf: %d, Nom: %s, Date: %s\n", reservations[i].ref, reservations[i].name, reservations[i].date);
}

int main() { 
    addReservation(); 
    int ref; 
    printf("Recherche par référence : "); scanf("%d", &ref);
    searchByReference(ref); 
    char name[50]; 
    printf("Recherche par nom : "); scanf("%s", name);
    searchByName(name); 
    return 0; 
}
