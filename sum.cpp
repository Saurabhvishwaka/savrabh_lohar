#include<iostream>
#include<stack>
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
    int fi,si;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    
    for(fi = 0; a[fi] != '\0'; fi++);
    fi--;
    for(si = 0; b[si] != '\0'; si++);
    si--;

    stack<int> stk;
    int carry = 0;
    int left, right, sum, m;
    while(si >= 0) {
        left = toDigit(a[fi]);
        si = 0; // Reset si to 0 for each iteration
        while(fi >= 0) {
            right = toDigit(b[si]);
            sum = carry + (left * right);
            m = sum % 10;
            carry = sum / 10 + m / 10; // Add carry from previous iteration
            stk.push(m % 10);
            fi--;
            si++;
        }
        if(carry > 0)
            stk.push(carry);
        carry = 0; // Reset carry for next iteration
        fi = 0; // Reset fi to 0 for next iteration
        si--;
    }

    int ti = 0;
    while(!stk.empty()) {
        c[ti] = toChar(stk.top());
        stk.pop();
        ti++;
    }
    c[ti]='\0';

    cout << "Product of " << a << " and " << b << " is " << c << endl;
    return 0;
}
