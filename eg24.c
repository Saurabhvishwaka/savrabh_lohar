#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    strcpy(str1, "123");
    strcpy(str2, "9020");

    int i, sum = 0;

    // Compute sum for the first string
    for (i = 0; str1[i] != '\0'; i++) 
    for (i = 0; str2[i] != '\0'; i++) 
        sum = str2[i]+str1[i];;

    printf("Sum of ASCII values of characters in both strings: %d\n", sum);

    return 0;
}
