#include <stdio.h>
#include "T2.h"

#define TOTAL_BATTERY_CAPACITY 4000.0 
#define POWER_CONSUMPTION 150.0

int main(void) {
    union un_BatteryLife battery;
    float totalCapacityWh = TOTAL_BATTERY_CAPACITY / 1000.0;

    printf("Program starting.\n");
    printf("Battery info:\n");
    printf(" - Capacity - %.0f mAh\n", TOTAL_BATTERY_CAPACITY);
    printf(" - Average power consumption - %.3f Wh\n", POWER_CONSUMPTION / 1000.0);

    printf("Insert remaining battery charge in percentage: ");
    scanf("%f", &battery.fChargePercentage);

    battery.fChargeRatio = battery.fChargePercentage / 100.0;
    battery.fRemainingCapacity = battery.fChargeRatio * totalCapacityWh;
    battery.fRemainingHours = battery.fRemainingCapacity / (POWER_CONSUMPTION / 1000.0);

    printf("%.2f hours of battery remaining.\n", battery.fRemainingHours);

    printf("Program ending.\n");
    return 0;
}
