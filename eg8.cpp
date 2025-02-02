#include <iostream>
#include <stack>
#include <cstring>
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

    // Check if numbers are negative
    bool isANegative = (a[0] == '-');
    bool isBNegative = (b[0] == '-');

    // Skip '-' character if present
    fi = (isANegative ? 1 : 0);
    si = (isBNegative ? 1 : 0);

    stack<int> stk;
    int carry = 0;
    int left, right, sum, m;
    while (si >= 0 && fi >= 0) {
        left = toDigit(a[fi]);
        right = toDigit(b[si]);
        sum = carry + left * right;
        m = sum % 10;
        carry = sum / 10;
        stk.push(m);
        si--;
        fi--;
    }
    while (fi >= 0) {
        left = toDigit(a[fi]);
        sum = carry + left * right;
        m = sum % 10;
        carry = sum / 10;
        stk.push(m);
        fi--;
    }
    while (si >= 0) {
        right = toDigit(b[si]);
        sum = carry + right * left;
        m = sum % 10;
        carry = sum / 10;
        stk.push(m);
        si--;
    }
    if (carry > 0) stk.push(carry);

    int ti = 0;
    while (!stk.empty()) {
        c[ti] = toChar(stk.top());
        stk.pop();
        ti++;
    }
    c[ti] = '\0';

    // Print negative sign if applicable
    if (isANegative != isBNegative) {
        cout << "Total of " << a << " and " << b << " is -" << c << endl;
    } else {
        cout << "Total of " << a << " and " << b << " is " << c << endl;
    }
    return 0;
}
