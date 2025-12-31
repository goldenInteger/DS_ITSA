#include <stdio.h>

int main() {
    double w, h;
    scanf("%lf %lf", &w, &h);
    h = h / 100.0;
    double bmi = w / (h * h);
    printf("%.2f\n", bmi);
    return 0;
}