#include <stdio.h>

int main() {
    char s[6];
    int i, j, count;

    scanf("%s", s);

    for (i = 0; i < 5; i++) {
        count = s[i] - '0';
        for (j = 0; j < count; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}