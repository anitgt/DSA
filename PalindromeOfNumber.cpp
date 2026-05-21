#include <iostream>

using namespace std;

int main() {
    int n;
    int reverseNum =0;
    int lastDigit;
    cout << "Enter a number for palindrome: ";
    cin >> n;
    int dup = n;

    
    while(n >0) {
        lastDigit = n %10;
        n = n/10;
        reverseNum = (reverseNum *10) + lastDigit;
    }

        if(dup == reverseNum) {
            cout << "It is Palindrome";
        } else {
            cout << "The number is not a palindrome";
        }
    return 0;
}