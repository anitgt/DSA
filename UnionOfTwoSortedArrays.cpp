/*

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

*/
//Optimal Solution:
#include<bits/stdc++.h>
using namespace std;

vector <int> sortedArray( vector <int> a, vector <int> b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;

    vector <int> unionArray;

    while(i < n1 && j <n2) {
        if(a[i] <= b[j]) {
            if(unionArray.size() == 0 || unionArray.back() != a[i]) {
                unionArray.push_back(a[i]);
            }
            i++;
        } else {
            if(unionArray.size() == 0 || unionArray.back() != b[j]) {
                unionArray.push_back(b[j]);
            }
            j++;
        }
    }
    //if j pointer gets exhausted
    while(j< n2) {
          if(unionArray.size() == 0 || unionArray.back() != b[j]) {
                unionArray.push_back(b[j]);
            }
            j++;
    }
    //if i pointer gets exhausted
    while(i<n1) {
         if(unionArray.size() == 0 || unionArray.back() != a[i]) {
                unionArray.push_back(a[i]);
            }
            i++;
    }
    return unionArray;
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    int m;
    cout << "Enter M: ";
    cin >> m;
    vector <int> arr1(n);
    vector <int> arr2(m);

    for(int i=0; i<n; i++) {
        cin >> arr1[i];
    };

    for(int i=0; i<m; i++) {
        cin >> arr2[i];
    };

    vector <int> ans = sortedArray(arr1, arr2);
    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}