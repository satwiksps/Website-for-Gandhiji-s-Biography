
#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int binary) {
    int decimal = 0, i = 0;
    while (binary != 0) {
        int digit = binary % 10;
        decimal += digit * pow(2, i);
        binary /= 10;
        i++;
    }
    return decimal;
}

int main() {
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    cout << "Decimal equivalent: " << binaryToDecimal(binary) << endl;
    return 0;
}
