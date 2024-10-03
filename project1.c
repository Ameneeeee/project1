
            
#include <stdio.h>
#include <string.h>

#define MAX_RESERVATIONS 100

typedef struct {
    char name[45], phone[15], date[11];
    int age, ref;
} Reservation;

Reservation reservations[MAX_RESERVATIONS];
int count = 0;

void addReservation() {
    if (count < MAX_RESERVATIONS) {
        printf("Nom : "); scanf("%s", reservations[count].name);
        printf("Téléphone : "); scanf("%s", reservations[count].phone);
        printf("Âge : "); scanf("%d", &reservations[count].age);
        printf("Date : "); scanf("%s", reservations[count].date);
        reservations[count].ref = ++count;
        printf("Réservation ajoutée ! Numéro : %d\n", reservations[count - 1].ref);
    }
}

void displayReservations() {
    for (int i = 0; i < count; i++)
        printf("Numéro : %d, Nom : %s, Téléphone : %s, Âge : %d, Date : %s\n", 
               reservations[i].ref, reservations[i].name, reservations[i].phone, reservations[i].age, reservations[i].date);
}

int main() {
    addReservation(); displayReservations();
    return 0;
}
