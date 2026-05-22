// #include <iostream>

// using namespace std;


// int main() {
//     int n1; 
//     cout << "Enter value of n1: ";
//     cin >> n1;
//     int n2;
//     cout << "Enter value of n2: ";
//     cin >> n2;
//     int hcf;

//     for(int i =1; i <= min(n1,n2); i++) {
//         if(n1 % i == 0 && n2 % i ==0) {
//             hcf = i;
//         }
//     }
//     cout << hcf;

//     return 0;
// }
//TC = O(mm(n1, n2))

#include <iostream>

using namespace std;

int main() {
    int n1;
    int n2;
    cout << "Enter n1: ";
    cin >> n1;
    cout << "Enter n2: ";
    cin >> n2;

    for(int i= min(n1,n2); i >=1; i--) {
        if(n1 % i ==0 && n2 % i ==0) {
            cout << i;
            break; // breaks from outer loop
        }
    }
    return 0;
}

//TC = O(mm(n1, n2)) still. 