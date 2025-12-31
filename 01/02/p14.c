#include <stdio.h>
#include <math.h>

int main() {
    int m;
    while (scanf("%d", &m) != EOF) {
        double relative_speed = 1.0 - (30 * 2.54 / 100.0);
        double ans = m / relative_speed;
        printf("%d\n", (int)ceil(ans));
    }
    return 0;
}