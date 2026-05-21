#include <iostream>

using namespace std;

int main() {
    int n;
    int dup;
    int reverseNum =0;
    int lastDigit;
    cout << "Enter a number for palindrome: ";
    cin >> n;

    
    while(n >0) {
        lastDigit = n %10;
        
        n = n/10;

        reverseNum = (reverseNum *10) + lastDigit;
        if(reverseNum == dup) {
            cout << 
        }
    }

    return 0;
}