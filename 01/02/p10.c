#include <stdio.h>

int main() {
    int mi;
    if (scanf("%d", &mi) != EOF) {
        printf("km=%.1f\n", mi * 1.6);
    }
    return 0;
}