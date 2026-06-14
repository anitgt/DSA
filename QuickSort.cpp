#include<bits/stdc++.h>
using namespace std;

int find_partition_index(int arr[], int low, int high) {
    int piviot = arr[low];
    int i = low;
    int j = high;

    while(i < j) {
        while(arr[i] <= piviot && i <= high) {
            i++;
        };
        while(arr[j] > piviot && j >= low) {
            j--;
        }
        if(j >i) {
            swap(arr[i], arr[j]);
        }
    };
     swap(arr[low], arr[j]);
        return j;
};

void q_s(int arr[],int low,int high) {
    if(low < high) {
        int partition_index = find_partition_index(arr,low, high);
        q_s(arr, low, partition_index -1);
        q_s(arr, partition_index+1, high);
    }   
} 

void quick_sort(int arr[], int n) {
    q_s(arr, 0, n-1);
}
int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int arr[n];
    
    for(int i=0; i<n; i++) {
        cout << "Enter value of " << i << " :";
        cin >> arr[i];
    }

    quick_sort(arr, n);

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}