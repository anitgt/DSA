#include <bits/stdc++.h>
using namespace std;

void largestElement(int arr[], int n) {
    int largest = arr[0];
    for(int i=0; i<n; i++) {
        if(largest < arr[i]) {
            largest = arr[i];
        }
    }
    cout << largest;
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    int arr[n];

    for(int i =0; i< n; i++) {
        cout << "Enter Values " << i << " ";
        cin >> arr[i];
    }

    largestElement(arr, n);

    // for(int i=0; i<n; i++) {
    //     cout << arr[i] << " ";
    // }

    return 0;
}