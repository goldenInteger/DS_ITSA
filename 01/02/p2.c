#include <stdio.h>

int main() {
    int t, b, h;
    if (scanf("%d %d %d", &t, &b, &h) != EOF) {
        printf("Trapezoid area:%.1f\n", (double)(t + b) * h / 2.0);
    }
    return 0;
}