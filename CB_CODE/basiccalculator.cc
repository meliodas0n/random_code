#include <iostream>

using namespace std;

int main() {
    char ch;
    int n1, n2;
    cin >> ch;
    switch (ch) {
        case '+':
            cin >> n1 >> n2;
            cout << n1 + n2;
            break;
        case '-':
            cin >> n1 >> n2;
            cout << n1 - n2;
            break;
        case '*':
            cin >> n1 >> n2;
            cout << n1 * n2;
            break;
        case '/':
            cin >> n1 >> n2;
            cout << n1 / n2;
            break;
        case '%':
            cin >> n1 >> n2;
            cout << n1 % n2;
            break;
        default:
            cout << "Invalid Operation. Try again";
    }
    return 0;
}