#include <stdio.h>
#include <string.h>

#define TOLL_RATE 50

void processVehicle(char vehicleType[])
{
    static int totalVehicles = 0;
    static int totalFee = 0;

    if (strcmp(vehicleType, "REPORT") == 0)      // special word = print report
    {
        printf("\n----- Toll Plaza Report -----\n");
        printf("Total vehicles: %d\n", totalVehicles);
        printf("Total toll collected: %d PKR\n", totalFee);
        return;
    }

    totalVehicles++;
    totalFee = totalFee + TOLL_RATE;
    printf("%s passed. Fee: %d PKR\n", vehicleType, TOLL_RATE);
}

int main()
{
    processVehicle("Car");
    processVehicle("Bus");
    processVehicle("Truck");
    processVehicle("Bike");

    processVehicle("REPORT");    // prints the final report
    return 0;
}