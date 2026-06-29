/*

//Brute Force Method
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    int arr[n];
    for(int i=0; i <n; i++) {
        cin >> arr[i];
    }

    vector <int> temp;

    for(int i=0; i< n; i++) {
        if(arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }


    for(int i=0; i< temp.size(); i++) {
        arr[i] = temp[i];
    }


    int nonZero = temp.size();

    for(int i=nonZero; i<n ; i++) {
        arr[i] = 0;
    }

    for(int i=0; i< n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

*/

//Optimal Solution:
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    int arr[n];
    for(int i=0; i <n; i++) {
        cin >> arr[i];
    }

    int j=-1;
    for(int i=0; i<n; i++) {
        if(arr[i] == 0) {
            j = i;
            break;
        }
    }
    for(int i=j+1; i < n; i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for(int i=0; i< n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}