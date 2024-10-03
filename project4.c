#include <stdio.h>
#include <string.h>

#define MAX_RESERVATIONS 100

typedef struct {
    char name[50], status[20];
    int ref;
} Reservation;

Reservation reservations[MAX_RESERVATIONS];
int count = 0;

void addReservation() {
    Reservation newReservation;
    newReservation.ref = ++count;
    printf("Nom : "); scanf("%s", newReservation.name);
    printf("Statut : "); scanf("%s", newReservation.status);
    reservations[count - 1] = newReservation;
}

void sortReservations() {
    for (int i = 0; i < count - 1; i++)
        for (int j = i + 1; j < count; j++)
            if (strcmp(reservations[i].name, reservations[j].name) > 0) {
                Reservation temp = reservations[i];
                reservations[i] = reservations[j];
                reservations[j] = temp;
            }
}

void displayReservations() {
    for (int i = 0; i < count; i++)
        printf("Réf: %d, Nom: %s, Statut: %s\n", reservations[i].ref, reservations[i].name, reservations[i].status);
}

int main() { 
    addReservation(); sortReservations(); displayReservations(); 
    return 0; 
}
