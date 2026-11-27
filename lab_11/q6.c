#include <stdio.h>

#define TOLL_RATE 50                 // fixed rate, cannot change

void processVehicle(char vehicleType[])
{
    static int totalVehicles = 0;    // remembered between calls
    static int totalFee = 0;         // remembered between calls

    totalVehicles++;                 // one more vehicle
    totalFee = totalFee + TOLL_RATE; // add the fee

    printf("Vehicle: %s | Total vehicles: %d | Total fee: %d PKR\n",
           vehicleType, totalVehicles, totalFee);
}

int main()
{
    processVehicle("Car");
    processVehicle("Bus");
    processVehicle("Truck");
    processVehicle("Bike");

    printf("\n----- Toll Plaza Report -----\n");
    printf("Toll rate per vehicle: %d PKR\n", TOLL_RATE);
    printf("Final report shown by the last call above.\n");

    return 0;
}