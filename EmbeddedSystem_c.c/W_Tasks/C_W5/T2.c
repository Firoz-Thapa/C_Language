#include <stdio.h>
#include "T2.h"

#define TOTAL_BATTERY_CAPACITY 4000.0
#define POWER_CONSUMPTION 150.0

int main(void) {
    union un_BatteryLife battery;
    float totalCapacityWh = TOTAL_BATTERY_CAPACITY / 1000.0;

    printf("Program starting.\n");
    printf("Total Battery Capacity: %.2f Wh\n", totalCapacityWh);
    printf("Average Power Consumption: %.2f W\n", POWER_CONSUMPTION / 1000.0);

    printf("Enter battery charge percentage (0-100): ");
    scanf("%f", &battery.fChargePercentage);

    battery.fChargeRatio = battery.fChargePercentage / 100.0;

    battery.fRemainingCapacity = battery.fChargeRatio * totalCapacityWh;
    battery.fRemainingHours = battery.fRemainingCapacity / (POWER_CONSUMPTION / 1000.0);

    printf("Charge ratio: %.2f\n", battery.fChargeRatio);
    printf("Remaining capacity: %.2f Wh\n", battery.fRemainingCapacity);
    printf("Remaining battery life: %.2f hours\n", battery.fRemainingHours);

    printf("Program ending.\n");
    return 0;
}
