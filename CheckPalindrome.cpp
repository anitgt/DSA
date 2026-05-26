#include <iostream>
using namespace std;

bool checkPalindrome(int i, string &s) {
    if(i >= s.size() /2)return true;
    else {
        if(s[i] != s[s.size() -i -1]) return false;
        else return checkPalindrome(i+1, s);
    }
}

int main()  {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if(checkPalindrome(0,s)) {
        cout << "It is a palindrome!";
    } else {
        cout << "It is not a palindrome!";
    }

    return 0;
}