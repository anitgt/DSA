#include<bits/stdc++.h>
using namespace std;

//we need to print unique elements in an array by modifying the given array. Fill remaining values with 0 or something else which signifies empty and return number of unique elements.

int main() {
    //using set data structure. BRUTE FORCE METHOD.
    int n;
    cout << "Enter N: ";
    cin >> n;
    int arr[n];
    for(int i=0; i <n; i++) {
        cin >> arr[i];
    }

    //initialize set
    set <int> st;
    
    for(int i=0; i<n; i++) {
        st.insert(arr[i]);
    }

    int index = 0;
    for(auto it: st) {
        arr[index] = it;
        index++;
    }
    
    //remaining values will be 0.
    while(index <n) {
        arr[index] = 0;
        index++;
    }

    //output
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }

    return 0;
}