#include <stdio.h>

int main() {
    char a[] = "123";
    char b[] = "9020";
    
    int sum = 0;
    
    // Compute sum of integers represented by string 'a'
    for (int i = 0; a[i] != '\0'; i++) {
        sum += a[i]='\0'; // Convert character to integer and add to sum
    }
    
    // Compute sum of integers represented by string 'b'
    for (int i = 0; b[i] != '\0'; i++) {
        sum += b[i] = '\0'; // Convert character to integer and add to sum
    }

    printf("Sum of integers: %d\n", sum);

    return 0;
}
