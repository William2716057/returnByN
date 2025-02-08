
#include <stdio.h>

int main() {
    char str[] = "Sample string of various letters for testing";
    //initialise no space array
    char result[100];
    //initialise j to 0
    int j = 0;

    //loop to remove spaces
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    //changed str to result
    for (int i = 3; result[i] != '\0'; i += 4) {
        printf("%c ", result[i]);

    }


    return 0;
}
