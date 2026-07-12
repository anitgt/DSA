//Brute Force Approach
#include<bits/stdc++.h>
using namespace std;

int Number_Appeared_once(int arr[], int n){
    for(int i=0; i<n; i++) {
        int counter =0;
        int num = arr[i];
        for(int j=0; j<n; j++) {
            if(arr[j] == num) {
                counter++;
            };
        }
        if(counter ==1) {
            return num;
    }
}
} 

int main() {
        int n;
    cin >> n;

    int arr[n];
    
    for(int i=0; i<n-1; i++) {
        cin >> arr[i];
    };

    cout << Number_Appeared_once(arr, n);
    return 0;
}