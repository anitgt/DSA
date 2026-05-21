#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    int divisors[n];

    for(int i=1; i <= n; i++) {
        if(n % i == 0) {
            cout << i << '\n';
        };
    };
    
    return 0;
}