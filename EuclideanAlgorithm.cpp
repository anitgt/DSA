#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    while(a >0 & b >0) {
        if(a >b) {
            a=a%b;
        } else {
            b = b%a;
        }
    }

    if(a == 0 ) {
        cout << b;
    };
    if(b ==0) {
        cout << a;
    }

    return 0;
}