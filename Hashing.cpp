#include <iostream>
using namespace std;

int main() {
    //Initialize array and take input for array size and array value
    int n;
    cout << "Enter N: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    };

    //precomputaion
    int hash[13] = {0}; //Here it is 13 because the max query can be 13.(It will be givien in the question).
    for(int i=0; i<n;i++) {
        hash[arr[i]] += 1; //go to array[i] position and increase value by 1 in hash array.
    }


    //query(Questions regarding array)
    int q;
    cout << "Enter q: ";
    cin >> q;
    while(q--) {
        int number;
        cin >> number;
        //fetch
        cout << hash[number] << endl;
    }

    return 0;
}