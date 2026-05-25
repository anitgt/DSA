#include <iostream>

using namespace std;

int counter = 0;

void function1() {
    if(counter == 4) return;
    else cout << counter << '\n';
    counter ++;
    function1();
}

int main() {
    function1();
    return 0;
} 