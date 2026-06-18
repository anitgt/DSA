#include<bits/stdc++.h>
using namespace std;

bool checkSorted(int arr[], int n) {    
    for(int i=1; i<n; i++) {
        if(arr[i] >= arr[i-1]) {
            //do nothing. Let the iteration complete till end of array.
        } else {
            return false;
        }
    }
    return true;
};

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    int arr[n];

    int sLargest;

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    cout << checkSorted(arr, n);

    return 0;
}
