#include <iostream>
#include <stack>
using namespace std;

char toChar(int d) {
    return d + '0'; // Convert digit to character
}

int toDigit(char d) {
    return d - '0'; // Convert character to digit
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
    for (si = 0; b[si] != '\0'; si++);

    si--;
    fi--;

    stack<int> stk;

    for (int i = 0; i <= fi; i++) {
        for (int j = 0; j <= si; j++) {
            int product = toDigit(a[i]) * toDigit(b[j]);
            int position = i + j;
            while (product > 0) {
                if (position >= stk.size()) {
                    stk.push(product % 10);
                } else {
                    int sum = stk.top() + product % 10;
                    stk.pop();
                    stk.push(sum % 10);
                    product += sum / 10;
                }
                product /= 10;
                position++;
            }
        }
    }

    int ti = 0;
    while (!stk.empty()) {
        c[ti++] = toChar(stk.top());
        stk.pop();
    }
    c[ti] = '\0';

    cout << "Product of " << a << " and " << b << " is " << c << endl;

    return 0;
}
