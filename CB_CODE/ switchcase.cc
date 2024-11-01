#include <iostream>

using namespace std;

int main() {
    char ch;
    cin >> ch;

    switch (ch) {
        case 'N':
            cout << "North" << endl;
        case 'S':
            cout << "South" << endl;
        case 'E':
            cout << "East" << endl;
        case 'W':
            cout << "West" << endl;
        default:
            cout << "Invalid Output" << endl;
    }
    return 0;
}