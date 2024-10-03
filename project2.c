#include <stdio.h>

#define MAX_RESERVATIONS 100

typedef struct {
    char name[50], phone[15], date[11];
    int age, ref;
} Reservation;

Reservation reservations[MAX_RESERVATIONS];
int count = 0;

void modifyReservation(int ref) {
    if (ref < 1 || ref > count) return;
    printf("Prénom : "); scanf("%s", reservations[ref - 1].name);
    printf("Téléphone : "); scanf("%s", reservations[ref - 1].phone);
    printf("Âge : "); scanf("%d", &reservations[ref - 1].age);
    printf("Date : "); scanf("%s", reservations[ref - 1].date);
}

void deleteReservation(int ref) {
    if (ref < 1 || ref > count) return;
    for (int i = ref - 1; i < count - 1; i++)
        reservations[i] = reservations[i + 1];
    count--;
}

int main() {
    // Ajouter des instructions pour gérer les réservations
    return 0;
}
