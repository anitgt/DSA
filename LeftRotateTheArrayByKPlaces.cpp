
//Brute Force Method:
#include<bits/stdc++.h>
using namespace std;

int main() {
      int n;
    cout << "Enter N: ";
    cin >> n;

    int k;
    cout << "Enter K: ";
    cin >> k;

    int arr[n];
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    k = k %n;
    int temp[k];
    //temp
    for(int i=0; i<k; i++) {
        temp[i] = arr[i];
    }

    //shifting
    //int j=0; or
    for(int i=k; i<n; i++) {
        //arr[j] = arr[i];
        arr[i-k] = arr[i];
        //j++;
    }

    //put back temp
    //int l=0;
    for(int i= n-k; i<n; i++) {
        arr[i] = temp[i-(n-k)];
      //  arr[i] = temp[l];
        //l++;
    }
    //output
      for(int i=0; i<n; i++) {
        cout <<  arr[i] << " "; 
    }
    return 0;
}