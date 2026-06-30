/*
//Brute Force Method
#include <bits/stdc++.h>
using namespace std;

vector <int> intersection (vector <int> a, vector <int> b) {
    int n1 = a.size();
    int n2 = b.size();
    int visited[n2] = {0};
    vector <int> result;
    for(int i=0; i< n1; i++) {
        for(int j=0; j< n2; j++) {
            if(a[i] == b[j] && visited[j] == 0) {
                result.push_back(a[i]);
                visited[j] = 1;
                break;
            }
            //because it is sorted array the value will not be greater and we would not found that. so break
            if(b[j] > a[i]) break;
        }
    }
    return result;
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

    //print ans
    vector <int> ans = intersection(arr1, arr2);
    for(int x : ans) {
         cout << x << " ";
     }

    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

vector <int> intersection (vector <int> &a, vector <int> &b, int n, int m) {
 int i=0;
 int j =0;
 vector <int> res;
 
 while(i<n &&  j<m) {
    if(a[i] < b[j]) {
        i++;
    }
    else if(b[j] < a[i]) {
        j++;
    } else {
        res.push_back(a[i]);
        i++;
        j++;
    }
}
    return res;
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

    //print ans
    vector <int> ans = intersection(arr1, arr2, n, m);
    for(int x : ans) {
         cout << x << " ";
     }

    return 0;
}