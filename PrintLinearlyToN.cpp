#include <iostream>

using namespace std;

void print(int i , int n) {
    if(i > n) return;
    else {
        cout << i << '\n';
        print(i+1, n);
    }
}

int main() {
    int i;
    int n;
    cout << "Enter N: ";
    cin >> n;
    cout << "Enter I: ";
    cin >> i;

    print(i,n);
    return 0;
}