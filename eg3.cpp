#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

char toChar(int d) {
    return d + 48;
}

int toDigit(char d) {
    return d - 48;
}

int main() {
    char a[50];
    char b[50];
    char c[100];
    int fi, si;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    for (fi = 0; a[fi] != '\0'; fi++);
    fi--;
    for (si = 0; b[si] != '\0'; si++);
    si--;

    stack<int> stk;
    int carry = 0;
    int left, right, product, m, zeroes = 0;

    for (int i = si; i >= 0; i--) {
        stk = stack<int>(); // Clear the stack for each iteration
        carry = 0;
        for (int j = fi; j >= 0; j--) {
            left = toDigit(a[j]);
            right = toDigit(b[i]);
            product = (left * right) + carry;
            m = product % 10;
            carry = product / 10;
            stk.push(m);
        }
        if (carry > 0) stk.push(carry);

        for (int k = 0; k < zeroes; k++) {
            stk.push(0);
        }
        zeroes++;

        int ti = 0;
        while (!stk.empty()) {
            c[ti++] = toChar(stk.top());
            stk.pop();
        }
        c[ti] = '\0';

        if (i == si) {
            strcpy(c, c);
        } else {
            int len1 = strlen(c);
            int len2 = strlen(c) + strlen(&c[len1]);
            char temp[len2];
            strcpy(temp, c);
            strcpy(&temp[len1], c);
            strcpy(c, temp);
        }
    }

    cout << "Product of " << a << " and " << b << " is " << c << endl;
    return 0;
}
