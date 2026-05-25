#include <iostream>
using namespace std;

void print(int i,int sum) {
    if(i < 1) {
        cout << sum;
        return;
    } else {
        print(i = i-1, sum + i);
    }
}

int main() {
    int n;
    cin >> n;

    print(n,0);

    return 0;
}