#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    //Make array and take array size from the user.
    int n;
    cin >> n;

    //take array values from user
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    };

    //precompute
    unordered_map <int, int> mpp; //initializing map
    for(int i=0; i<n; i++) {
        mpp[arr[i]]++; //This creates key-value pair inside the map. if the value doesnot exist if creates and marks +1, if value exists it increases by 1.
    }

    //iterate in the map
    for(auto it : mpp) {      
        int low_freq = 0;
        if(low_freq < it.second) {
            int ans=arr[0];  
            low_freq = it.second;
            ans = it.first;
             cout << "Least frequent element: " << ans << endl;
            cout << "Frequency: " << low_freq << endl;
        }
        

       // cout << it.first << "-> " << it.second << endl;
    }

    return 0;
}