#include <stdio.h>
#include <string.h>

int main() {
    char a[15], b[15], c[30]; // Increase the size of c to accommodate the concatenated string
    int x, y;
    strcpy(a, "123");
    strcpy(b, "9020");
    
    // Copy the content of a to c initially
    strcpy(c, a);

    // Concatenate b to c
    strcat(c, b);

    printf("Concatenated string: %s\n", c);

    return 0;
}
