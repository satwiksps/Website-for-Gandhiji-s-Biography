#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num, sum = 0, temp, digits = 0;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    if (sum == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;
    return 0;
}