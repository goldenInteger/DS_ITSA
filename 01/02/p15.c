#include <stdio.h>

int main() {
    int mins;
    while (scanf("%d", &mins) != EOF) {
        double bill;
        if (mins <= 800) {
            bill = mins * 0.9;
        } else if (mins < 1500) {
            bill = mins * 0.9 * 0.9;
        } else {
            bill = mins * 0.9 * 0.79;
        }
        printf("%.1f\n", bill);
    }
    return 0;
}