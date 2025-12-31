#include <stdio.h>

int main() {
    char name[100];
    
    if (scanf("%s", name) != EOF) {
        printf("Hello %s\n", name);
    }

    return 0;
}