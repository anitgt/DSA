//Brute Force Approach
/*
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
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    };

    cout << Number_Appeared_once(arr, n);
    return 0;
}


//Better solution using hashing
#include<bits/stdc++.h>
using namespace std;

int Number_Appeared_once(int arr[], int n) {
    int maxi =arr[0];
    for(int i=0; i<n; i++) {
        maxi = max(maxi, arr[i]);
    }

    int hash[maxi+1] = {0};

    //increase value of hash by 1 at that index
    for(int i=0; i<n; i++) {
        hash[arr[i]]++;
    }

    for(int i=0; i<n; i++) {
        if(hash[arr[i]] == 1) {
            return arr[i];
        }
    }
}

int main() {
          int n;
    cin >> n;

    int arr[n];
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    };

    cout << Number_Appeared_once(arr, n);
    return 0;
}

*/
//Using XOR
#include<bits/stdc++.h>
using namespace std;

int Number_Appeared_once(int arr[], int n) {
   int XOR =0;
   for(int i= 0; i<n; i++) {
    XOR = XOR ^ arr[i];
   };
   return XOR;
}

int main() {
      int n;
    cin >> n;

    int arr[n];
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    };

    cout << Number_Appeared_once(arr, n);

    return 0;
}