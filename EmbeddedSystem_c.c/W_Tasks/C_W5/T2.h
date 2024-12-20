#ifndef T2_H
#define T2_H

// Union to store different battery life values
union un_BatteryLife {
    float fChargePercentage;   // Charge percentage (0-100%)
    float fChargeRatio;        // Charge ratio (0.0 - 1.0)
    float fRemainingCapacity;  // Remaining capacity in Wh
    float fRemainingHours;     // Remaining battery life in hours
};

#endif
