#include <stdio.h>

int main() {
    char str[] = "Sample string of various letters for testing"

    for (int i = 3; str[i] != '\0'; i += 4) {
        printf("%c ", str[i]);
    }

    return 0;
}
