#include <stdio.h>

int main() {
    int p;
    scanf("%d", &p);
    int total = p * 100;
    if (p >= 100) {
        total = total * 0.7;
    } else if (p >= 30) {
        total = total * 0.8;
    } else if (p >= 10) {
        total = total * 0.9;
    }
    printf("%d\n", total);
    return 0;
}