#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b and a >= c) {
        cout << a;
    }
    if (b >= a and b >= c) {
        cout << b;
    }
    if (c >= a and c >= b) {
        cout << c;
    }
    return 0;
}