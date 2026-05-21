#include <iostream>

using namespace std;

int main() {
    int n;
    int lastDigit;;
    int counter = 0;
    cout << "Enter digits to be counted: ";
    cin >> n;

    while(n > 0) {
        lastDigit = n%10;
        counter++;
        n = n/10;
    }
    cout << counter;

    return 0;
}