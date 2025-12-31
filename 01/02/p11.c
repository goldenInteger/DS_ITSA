#include <stdio.h>

int main() {
    double c, f;
    while (scanf("%lf", &c) != EOF) {
        f = c * 9 / 5 + 32;
        printf("%.1f\n", f);
    }
    return 0;
}