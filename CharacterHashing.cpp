#include <iostream>
using namespace std;

int main() {
    string s; // takes string characters of alphabet from user.
    cin >> s;

    //precompute
    int hash[26] = {0};
    for(int i =0; i< s.size(); i++) {
        hash[s[i] - 'a'] ++; // here s[i] - 'a' is index od the character.
    }
    int q; //takes number from user
    cin >> q;
    while(q--) {
        char c;
        cin >> c;
            //fetch
            cout << hash[c - 'a'] << endl; //c-'a' is index of the character.
    }
    return 0;
}