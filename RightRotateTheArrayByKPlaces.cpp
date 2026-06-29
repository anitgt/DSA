#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int k;
    cin >> k;
    vector <int> nums(n);

    for(int i=0; i< n; i++) {
        cin >> nums[i];
    };
    k = k %n;

        reverse(nums.begin(),nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    for(int i=0; i < n; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}