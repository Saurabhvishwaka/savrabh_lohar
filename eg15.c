#include <stdio.h>
#include <string.h>

int main() {
    char x[15], y[15], z[30];
    int a = 0, b = 0, c = 0;
    
    strcpy(x, "123");
    strcpy(y, "9020");

    // Compute the sum of corresponding characters from strings x and y
    while (x[a] != '\0' && y[b] != '\0') {
        z[c] = ((x[a] - '0') + (y[b] - '0')) % 10 + '0'; // Compute the sum mod 10
        a++;
        b++;
        c++;
    }

    // If there are remaining characters in x or y, add them to z
    while (x[a] != '\0') {
        z[c++] = x[a++];
    }

    while (y[b] != '\0') {
        z[c++] = y[b++];
    }

    z[c] = '\0'; // Null-terminate z

    printf("Output computed to 9143: %s\n", z);

    return 0;
}
