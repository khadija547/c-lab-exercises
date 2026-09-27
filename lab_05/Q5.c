#include <stdio.h>

int main() {
    int capA = 20, capB = 40, capC = 15;
    int occA = 0, occB = 0, occC = 0;
    int cars = 0, bikes = 0, vans = 0;
    int accepted = 0, rejected = 0;
    int totalVehicles;

    printf("Enter number of vehicles to process: ");
    scanf("%d", &totalVehicles);

    for (int i = 1; i <= totalVehicles; i++) {
        char type, cat, permit, emergency;
        int valid = 0;

        printf("\n--- Vehicle %d ---\n", i);
        while (!valid) {
            printf("Enter Vehicle Type (C for Car, B for Bike, V for Van): ");
            scanf(" %c", &type);
            printf("Enter Category (F for Faculty, S for Student, G for Guest): ");
            scanf(" %c", &cat);
            printf("Enter Permit Status (Y for Yes, N for No): ");
            scanf(" %c", &permit);

            if ((type == 'C' || type == 'B' || type == 'V') &&
                (cat == 'F' || cat == 'S' || cat == 'G') &&
                (permit == 'Y' || permit == 'N')) {
                valid = 1;
            } else {
                printf("Invalid input detected! Please re-enter vehicle details.\n");
            }
        }

        if (permit == 'N') {
            printf("Does vehicle have Emergency Status? (Y/N): ");
            scanf(" %c", &emergency);
        } else {
            emergency = 'N';
        }

        if (permit == 'N' && emergency == 'N') {
            printf("Rejection Reason: Invalid/Missing permit.\n");
            rejected++;
            continue;
        }

        int assignedZone = 0;

        if (cat == 'F') {
            if (occA + 1 <= capA) assignedZone = 1;
            else printf("Rejection Reason: Zone A is full.\n");
        } else if (cat == 'S') {
            if (type == 'V') {
                if (occC + 2 <= capC) assignedZone = 3;
                else printf("Rejection Reason: Zone C full for Student Van.\n");
            } else {
                if (occB + 1 <= capB) assignedZone = 2;
                else printf("Rejection Reason: Zone B is full.\n");
            }
        } else if (cat == 'G') {
            if (type == 'V') {
                if (capC - occC >= 2) assignedZone = 3;
                else printf("Rejection Reason: Insufficient space (requires 2 slots) in Zone C.\n");
            } else {
                if (occC + 1 <= capC) assignedZone = 3;
                else printf("Rejection Reason: Zone C is full.\n");
            }
        }

        if (assignedZone == 1) {
            occA++;
            accepted++;
            printf("Assigned Zone A | Remaining Capacity: %d\n", capA - occA);
        } else if (assignedZone == 2) {
            occB++;
            accepted++;
            printf("Assigned Zone B | Remaining Capacity: %d\n", capB - occB);
        } else if (assignedZone == 3) {
            int cost = (type == 'V') ? 2 : 1;
            occC += cost;
            accepted++;
            printf("Assigned Zone C | Remaining Capacity: %d\n", capC - occC);
        } else {
            rejected++;
            continue;
        }

        if (type == 'C') cars++;
        else if (type == 'B') bikes++;
        else if (type == 'V') vans++;
    }

    printf("\n====================================\n");
    printf("          PARKING SUMMARY           \n");
    printf("====================================\n");
    printf("Total Vehicles Processed : %d\n", totalVehicles);
    printf("Total Accepted           : %d\n", accepted);
    printf("Total Rejected           : %d\n", rejected);
    printf("Parked Cars              : %d\n", cars);
    printf("Parked Bikes             : %d\n", bikes);
    printf("Parked Vans              : %d\n", vans);
    printf("------------------------------------\n");
    printf("Zone A Occupancy: %d/%d (Remaining: %d)\n", occA, capA, capA - occA);
    printf("Zone B Occupancy: %d/%d (Remaining: %d)\n", occB, capB, capB - occB);
    printf("Zone C Occupancy: %d/%d (Remaining: %d)\n", occC, capC, capC - occC);

    if (occA >= occB && occA >= occC) printf("Zone with highest occupancy: Zone A\n");
    else if (occB >= occA && occB >= occC) printf("Zone with highest occupancy: Zone B\n");
    else printf("Zone with highest occupancy: Zone C\n");

    if (occA == capA && occB == capB && occC == capC) {
        printf("Campus Parking Facility Status: FULL\n");
    } else {
        printf("Campus Parking Facility Status: AVAILABLE\n");
    }

    return 0;
}