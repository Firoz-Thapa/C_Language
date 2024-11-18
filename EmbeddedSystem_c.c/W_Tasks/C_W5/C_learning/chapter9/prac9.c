#include <stdio.h>

struct Date {
    int mm;
    int dd;
    int yyyy;
};

// Function to compare two dates
int compare(struct Date d1, struct Date d2) {
    if (d1.yyyy == d2.yyyy && d1.mm == d2.mm && d1.dd == d2.dd) {
        return 0;  // Dates are the same
    }
    if (d1.yyyy > d2.yyyy) {
        return 1;  // d1 is after d2
    } else if (d1.yyyy < d2.yyyy) {
        return -1; // d1 is before d2
    } else if (d1.mm > d2.mm) {
        return 1;  // d1 is after d2
    } else if (d1.mm < d2.mm) {
        return -1; // d1 is before d2
    } else if (d1.dd > d2.dd) {
        return 1;  // d1 is after d2
    } else if (d1.dd < d2.dd) {
        return -1; // d1 is before d2
    }
    // Ideally, we should never reach here because all conditions are covered
    return 0; // Should not reach here, but return 0 as a fallback
}

int main() {
    struct Date d1 = {12, 4, 2004};
    struct Date d2 = {11, 4, 2012};
    printf("%d\n", compare(d1, d2));
    return 0;
}
