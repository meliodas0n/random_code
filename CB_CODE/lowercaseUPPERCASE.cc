#include <iostream>
#include <string>

using namespace std;

int main() {
    char c;
    cin >> c;
    
    if (c >= 'a' and c <= 'z') {
        cout << "lowercase";
    }
    else if (c >= 'A' and c <= 'Z') {
        cout << "UPPERCASE";
    }
    else {
        cout << "Invalid";
    }
    cout << endl;
    return 0;
}