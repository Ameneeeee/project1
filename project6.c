#include <stdio.h>
#include <string.h>

#define MAX_RESERVATIONS 100

typedef struct { 
    char name[50], status[20]; 
    int age; 
    int ref; 
} Reservation;

Reservation reservations[MAX_RESERVATIONS]; 
int count = 0;

void addReservation() { 
    Reservation r; 
    r.ref = ++count; 
    printf("Nom : "); scanf("%s", r.name); 
    printf("Âge : "); scanf("%d", &r.age); 
    printf("Statut : "); scanf("%s", r.status); 
    reservations[count - 1] = r; 
}

void calculateStatistics() {
    float totalAge = 0;
    int ageGroups[3] = {0}; // 0-18, 19-35, 36+
    int statusCount[3] = {0}; // Validé, Annulé, Reporté
    const char *statuses[3] = {"Validé", "Annulé", "Reporté"};

    for (int i = 0; i < count; i++) {
        totalAge += reservations[i].age;

        if (reservations[i].age <= 18) ageGroups[0]++;
        else if (reservations[i].age <= 35) ageGroups[1]++;
        else ageGroups[2]++;

        for (int j = 0; j < 3; j++)
            if (strcmp(reservations[i].status, statuses[j]) == 0) statusCount[j]++;
    }

    printf("Moyenne d'âge: %.2f\n", totalAge / count);
    printf("Patients par tranche d'âge : 0-18: %d, 19-35: %d, 36+: %d\n", ageGroups[0], ageGroups[1], ageGroups[2]);
    for (int j = 0; j < 3; j++)
        printf("Nombre de réservations %s : %d\n", statuses[j], statusCount[j]);
}

int main() { 
    addReservation(); 
    addReservation(); // Ajoutez plusieurs réservations pour tester
    calculateStatistics(); 
    return 0; 
}
