#include <iostream>

using namespace std;

int main() {

    int n1, n2;
    int gcd = min(n1, n2);
    cin >> n1 >> n2;
    while (gcd > 0) {    
        if (n1 % gcd == 0 and n2 % gcd == 0) {
            break;    
        }
        gcd--;
    }
    cout << (float)gcd << endl;
    return 0;
}
