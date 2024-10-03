#include <stdio.h>

#define MAX_RESERVATIONS 100

typedef struct {
    char name[50], phone[15], date[11], status[20];
    int age, ref;
} Reservation;

Reservation reservations[MAX_RESERVATIONS];
int count = 0;

void addReservation() {
    Reservation newReservation;
    newReservation.ref = ++count;
    printf("Nom : "); scanf("%s", newReservation.name);
    printf("Téléphone : "); scanf("%s", newReservation.phone);
    printf("Âge : "); scanf("%d", &newReservation.age);
    printf("Date : "); scanf("%s", newReservation.date);
    printf("Statut : "); scanf("%s", newReservation.status);
    reservations[count - 1] = newReservation;
}

void consultReservation() {
    int ref; 
    printf("Référence : "); scanf("%d", &ref);
    if (ref <= count) 
        printf("Nom : %s, Téléphone : %s, Âge : %d, Date : %s, Statut : %s\n",
               reservations[ref - 1].name, reservations[ref - 1].phone, 
               reservations[ref - 1].age, reservations[ref - 1].date, 
               reservations[ref - 1].status);
}

int main() { 
    addReservation(); consultReservation(); 
    return 0; 
}
