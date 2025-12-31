#include <stdio.h>

int main() {
    char c;
    scanf(" %c", &c);
    if (c >= 'A' && c <= 'Z') {
        c = c + 32;
    }
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        printf("¥À­µ\n");
    } else {
        printf("¤l­µ\n");
    }
    return 0;
}