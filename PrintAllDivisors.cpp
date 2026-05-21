// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int n;
//     cout << "Enter N: ";
//     cin >> n;
//     int divisors[n];

//     for(int i=1; i <= n; i++) {
//         if(n % i == 0) {
//             cout << i << '\n';
//         };
//     };
    
//     return 0;
// }

//Other way With less time complexity.

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    vector<int> ls;

    cout << "Enter n: ";
    cin >> n;

    for(int i = 1; i <= sqrt(n); i++) {

        if(n % i == 0) {

            ls.push_back(i);
            if((n / i) != i) {
                ls.push_back(n / i);
            }
        }
    }

    sort(ls.begin(), ls.end());

    for(auto it : ls) {
        cout << it << " ";
    }

    return 0;
}