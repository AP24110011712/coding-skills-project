#include <iostream>
using namespace std;

void increase(int &x) {   // pass-by-reference using reference variable
    x++;
}

int main() {
    int a = 5;
    increase(a);
    cout << "Value of a after function: " << a;
    return 0;
}