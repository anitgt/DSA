#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number to check for prime: ";
    cin >> n;
    int counter= 0;
    for(int i=1; i*i <= n; i++) {
        if(i %n == 0) {
            counter ++;
        } if((n/i) != i) {
            counter ++;
        }
    }
    if(counter > 2) {
        cout << "Number is not prime";
    } else {
        cout << "Number is a prime";
    }

    return 0;
}