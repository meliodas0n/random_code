#include <iostream>

using namespace std;

int main() {
    int i = 1;
    do {
        cout << i << endl;
        i = i + 1;
    } while (i < 5);
    cout << endl;

    i = 1;
    while (i < 5) {
        cout << i << endl;
        i++;
    }
    return 0;
}