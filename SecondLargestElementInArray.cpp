#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n) {
    for(int i=0; i<= n-1;i++) {
        int j=i;
        while(j>0 && arr[j-1] > arr[j]) {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        } 
    }
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    int arr[n];

    int sLargest;

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    insertion_sort(arr, n);


    for(int i=n-2; i>=0; i--) {
        int largest = arr[n-1];
        if(arr[i] != largest) {
            sLargest = arr[i];
            break;
        }
    }
    cout << sLargest;
}