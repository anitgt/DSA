#include <iostream>
using namespace std;

void print(int i, int n) {
    if(i <1) return;
    else {
        print(i=i-1, n);
        cout << i << '\n';
    }
} 

int main() {
    int n;
    cin >> n;
    print(n,n);
    return 0;
}