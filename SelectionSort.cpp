#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n) {
    for(int i=0; i<=n-2; i++) {
        int mini = i;
        //seaching for smallest element
        for(int j=i; j<=n-1; j++) {
            if(arr[j] < arr[mini]) {
                mini = j;
            };
    }
    //swap
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
        };
    //output
    for(int i=0; i<n; i++) {
        cout << "Sorted:" << arr[i] << endl;
   }
}

int main() {
    //defining array and user input for array.
   int n;
   cout << "Enter N";
   cin >> n;
   int array[n];
   
   for(int i=0; i<n; i++) {
    cout << "Enter values of array: " << endl;
    cin >> array[i];
   };
//selection sort
 selection_sort(array, n);

    return 0;
}