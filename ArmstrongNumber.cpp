#include <iostream>

using namespace std;

int main() {
    int n;
    int lastDigit;
    int sum=0;
    cout << "Enter a number for Armstrong: ";
    cin >> n;
    int dup = n;

    
    while(n >0) {
        lastDigit = n %10;
        sum = sum + (lastDigit*lastDigit*lastDigit);
        n = n/10;
    };
    if(dup == sum) {
        cout << "The number is armstrong Number";
    } else {
        cout << "It is not armstrong Number";
    }

    return 0;
}