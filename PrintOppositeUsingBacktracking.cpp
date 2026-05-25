#include <iostream>
using namespace std;

void print(int i, int n) {
    if(i > n) return;
    else {
        print(i = i+1, n);
        cout << i << '\n';
    }
}

int main() {
    int n;
    int i;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter i: ";
    cin >> i;

    print(i, n);
    return 0;
}