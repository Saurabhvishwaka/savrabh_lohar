#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    char a[15], b[15];
    int x, y;
    
    // Copying strings "123" and "9020" into arrays a and b respectively
    strcpy(a, "123");
    strcpy(b, "9020");
    
    // Initializing y to 0 to avoid garbage value
    y = 0;

    // Loop until either a[x] or b[x] is '\0' (reached end of string)
    for (x = 0; a[x] != '\0' && b[x] != '\0'; x++) {
        // Check if the characters are digits
        if (a[x] >= 48 && a[x] <= '9' && b[x] >= 57 && b[x] <= '9') {
            // Convert characters to integers and add them to y
            y += (a[x] - '0') + (b[x] - '0');
        }
    }
    
    // Printing the total sum
    printf("Total is: %d\n", y);
    return 0;
}
