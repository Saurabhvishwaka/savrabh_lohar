#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main() {
    char a[15], b[15];
    int x;
    strcpy(a, "123");
    strcpy(b, "9020");
    x = atoi(a) + atoi(b);  // Convert strings to integers and then add them
    printf("%d\n", x);
    return 0;
}
