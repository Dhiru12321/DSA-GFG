#include <iostream>
using namespace std;

void palindrom(int n) {
    int originalValue = n; // Store the original value of n
    int newValue = 0;

    while (n != 0) {
        int remainder = n % 10;
        newValue = newValue * 10 + remainder;
        n = n / 10;
    }

    // now compare with the original value
    if (originalValue == newValue) {
        cout << "yes it's a palindrome." << endl;
    } else {
        cout << "not a palindrome." << endl;
    }
}

int main() {
    int n;
    cout << "enter the number to check if it is a palindrome or not: ";
    cin >> n;
    palindrom(n);

    return 0;
}
