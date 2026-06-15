#include<bits/stdc++.h>
using namespace std;

/*  Brute force Method 

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
*/

//Better Way:-
/*
int main() {
     int n;
    cout << "Enter N: ";
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int largest =  arr[0];
    int sLargest = -1;
    for(int i=0; i<n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
        if(arr[i] != largest && arr[i] > sLargest) {
            sLargest = arr[i];
        }
    }

    cout << sLargest;
}
*/

//optimal aapproach:

int main() {
     int n;
    cout << "Enter N: ";
    cin >> n;

    int arr[n];
    

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int largest = arr[0];
    int sLargest = -1;
    for(int i=0; i<n ;i++) {
        if(arr[i] > largest) {
            sLargest = largest;
            largest = arr[i];
         } else if(arr[i] != largest && arr[i] > sLargest) {
             sLargest = arr[i];
         }
    }
    cout << largest << " " << sLargest;
}