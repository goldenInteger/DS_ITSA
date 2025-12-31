#include <stdio.h>

int main() {
    int y;
    while (scanf("%d", &y) != EOF) {
        if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
            printf("Bissextile Year\n");
        } else {
            printf("Common Year\n");
        }
    }
    return 0;
}