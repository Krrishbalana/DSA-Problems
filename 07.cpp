#include <iostream>
using namespace std;

int binaryToDecimal(int binary) {
    int dec = 0, base = 1;

    while (binary > 0) {
        int lastDigit = binary % 10;
        dec += lastDigit * base;
        base *= 2;
        binary /= 10;
    }

    return decimal;
}

int main() {
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int dec = binaryToDecimal(binary);
    cout << "Decimal equivalent: " << dec
