#include <iostream>

using namespace std;

int main() {
    int n;
    int LastDigit;
    int reverseNum = 0;
    cout << "Enter the digits: ";
    cin >> n;

    while(n > 0) {
    LastDigit = n %10; // takes out last digit from original number
    n = n/10; //Eliminates last digit from original number
    reverseNum = (reverseNum * 10) + LastDigit; 
    }

    cout << reverseNum;
    return 0;
}