#include <stdio.h>

int main() {
    int type, i, j;
    scanf("%d", &type);

    if (type == 1) {
        printf("    *\n");
        printf("   * *\n");
        printf("  *   *\n");
        printf(" *     *\n");
        printf("*********\n");
    } else if (type == 2) {
        for (i = 1; i <= 5; i++) {
            for (j = 0; j < 5 - i; j++) printf(" ");
            for (j = 0; j < 2 * i - 1; j++) printf("*");
            printf("\n");
        }
    } else if (type == 3) {
        for (i = 5; i >= 1; i--) {
            for (j = 0; j < 5 - i; j++) printf(" ");
            for (j = 0; j < 2 * i - 1; j++) printf("*");
            printf("\n");
        }
    }

    return 0;
}