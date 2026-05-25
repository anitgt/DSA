#include <iostream>

using namespace std;

void print(int i,int n) {
    if(i>n) return;
    else {
        cout << "Anit" << '\n';
        print(i+1, n); 
    }
}

int main() {
    int n;
    int i;
    cout << "Enter N: ";
    cin >> n;
    cout << "Enter I: ";
    cin >> i;

    print(i,n);
    return 0;
}