#include <stdio.h>

int main() {
    int h1, m1, h2, m2;
    scanf("%d %d", &h1, &m1);
    scanf("%d %d", &h2, &m2);
    
    int total_min = (h2 * 60 + m2) - (h1 * 60 + m1);
    int units = total_min / 30;
    int fee = 0;

    if (units <= 4) {
        fee = units * 30;
    } else if (units <= 8) {
        fee = 4 * 30 + (units - 4) * 40;
    } else {
        fee = 4 * 30 + 4 * 40 + (units - 8) * 60;
    }
    
    printf("%d\n", fee);
    return 0;
}