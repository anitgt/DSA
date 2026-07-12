//Brute Force Method
#include<bits./stdc++.h>
using namespace std;

int Max_Consecutive_1s(int arr[], int n) {
    int count =0;
    int maxi =0;
    
    for(int i=0; i<n; i++) {
        if(arr[i] ==1) {
            count++;
            maxi= max(count, maxi);
        } else {
            count =0;
        }
    }
    return maxi;
    }


int main() {
     int n;
    cin >> n;

    int arr[n];
    
    for(int i=0; i<n-1; i++) {
        cin >> arr[i];
    };

    cout << Max_Consecutive_1s(arr, n);
    return 0;
}