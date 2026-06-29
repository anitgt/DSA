//Brute Force
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    int m;
    cout << "Enter M: ";
    cin >> m;
    int arr1[n];
    int arr2[m];

    for(int i=0; i<n; i++) {
        cin >> arr1[i];
    }

    for(int i=0; i<m; i++) {
        cin >> arr2[i];
    }

    //initiating set data structure
    set <int> st;

    //adding 1st arr
    for(int i=0; i< n; i++) {
        st.insert(arr1[i]);
    }

    //adding 2nd arr
    for(int i=0; i< m; i++) {
        st.insert(arr2[i]);
    };

    int uni[st.size()];

    int i=0;

   for(auto it : st) {
        uni[i++] = it;
   };

   for(int i=0; i<st.size(); i++) {
        cout << uni[i] <<" ";
   }
    return 0;
}