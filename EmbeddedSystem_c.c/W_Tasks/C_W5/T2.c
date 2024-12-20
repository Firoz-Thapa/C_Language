#include <stdio.h>
#include "T2.h"

#define TOTAL_BATTERY_CAPACITY 4000.0  // Battery capacity in mAh
#define POWER_CONSUMPTION 150.0        // Power consumption in mW

// Function to calculate remaining battery life
void calculateBatteryLife(union un_BatteryLife *battery) {
    float totalCapacityWh = TOTAL_BATTERY_CAPACITY / 1000.0;  // Convert mAh to Wh

    battery->fChargeRatio = battery->fChargePercentage / 100.0;
    battery->fRemainingCapacity = battery->fChargeRatio * totalCapacityWh;
    battery->fRemainingHours = battery->fRemainingCapacity / (POWER_CONSUMPTION / 1000.0);
}

int main(void) {
    union un_BatteryLife battery;

    printf("Program starting.\n");
    printf("Battery info:\n");
    printf(" - Capacity - %.0f mAh\n", TOTAL_BATTERY_CAPACITY);
    printf(" - Average power consumption - %.3f Wh\n", POWER_CONSUMPTION / 1000.0);

    // Get remaining battery charge percentage
    printf("Insert remaining battery charge in percentage: ");
    scanf("%f", &battery.fChargePercentage);

    // Calculate remaining battery life
    calculateBatteryLife(&battery);

    // Display remaining battery life in hours
    printf("%.2f hours of battery remaining.\n", battery.fRemainingHours);

    printf("Program ending.\n");
    return 0;
}
