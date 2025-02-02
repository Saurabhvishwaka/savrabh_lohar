#include <stdio.h>
#include <string.h>

int main() {
    char x[] = "123";
    char y[] = "9020";
    char z[30] = {0}; // Initialize z with zeros
    int carry = 0;

    int len_x = strlen(x);
    int len_y = strlen(y);
    int max_len = len_x > len_y ? len_x : len_y;

    for (int i = 0; i < max_len; i++) {
        int digit_x = i < len_x ? x[len_x - 1 - i] - '0' : 0;
        int digit_y = i < len_y ? y[len_y - 1 - i] - '0' : 0;

        int sum = digit_x + digit_y + carry;
        z[max_len - i] = (sum % 10) + '0';
        carry = sum / 10;
    }

    if (carry > 0) {
        z[0] = carry + '0';
        printf("Sum computed output (9143): %s\n", z);
    } else {
        printf("Sum computed output (9143): %s\n", z + 1); // Skip leading zero
    }

    return 0;
}
