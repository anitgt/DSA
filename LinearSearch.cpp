#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    
    int num;
    cin >> num;

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<n; i++) {
        if(arr[i] == num) {
            return i;
        };
        return -1;
    }
}