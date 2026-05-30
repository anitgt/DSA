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
    map <int, int> mpp; //initializing map
    for(int i=0; i<n; i++) {
        mpp[arr[i]]++; //This creates key-value pair inside the map. if the value doesnot exist if creates and marks +1, if value exists it increases by 1.
    }

    //initialize queries length and take queries values from the user.
    int q;
    cin >> q;
    while(q--) {
        int number;
        cin >> number;
        //fetch 
        cout << mpp[number] << endl;
    };

    return 0;
}