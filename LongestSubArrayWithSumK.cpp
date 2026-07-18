//brute force method
#include<bits/stdc++.h>
using namespace std;

int Longest_subArrayWithK(int arr[], int n, int k) {
    int Llength = 0;
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            int sum = 0;
            for(int l=i; l<=j; l++) {
                sum += arr[l];
            } 
            if(sum == k) {
                Llength = max(Llength, j-i+1);
                }
        }
    }
    return Llength;
}

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;

    int arr[n];
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    };

    cout << Longest_subArrayWithK(arr, n, k);

    return 0;
}