#include <stdio.h>

int main() {
    int b, h;
    if (scanf("%d %d", &b, &h) != EOF) {
        printf("Triangle area:%.1f\n", (double)b * h / 2.0);
    }
    return 0;
}