#include <iostream>
using namespace std;

void print(int i, int n){
    if(i < 1) return;
    else {
        cout << i << '\n';
        print(i = i-1, n);
    }
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    print(n,n);
}