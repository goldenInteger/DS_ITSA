#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &m);
        printf("%d %d %d\n", m, m * m, m * m * m);
    }
    return 0;
}