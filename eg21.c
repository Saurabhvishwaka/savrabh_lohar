#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "123";
    char b[] = "9020";
    char c[20]; // Ensure enough space for the concatenated string

    int x = 0, y = 0, z = 0;

    while (a[x] != '\0') {
        c[z] = a[x];
        x++;
    }

    while (b[y] != '\0') {
        c[z] = b[y];
        y++;
        z++;
    }

    c[z] = '\0'; // Append null terminator to the concatenated string

    printf("Concatenated string: %s\n", c);

    return 0;
}
