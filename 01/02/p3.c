#include <stdio.h>

int main() {
    int n;
    double w;
    scanf("%d", &n);
    while (n--) {
        scanf("%lf", &w);
        printf("%.1f\n", w * w);
    }
    return 0;
}