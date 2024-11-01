#include <iostream>

using namespace std;

int main() {
    int N, digit;
    cin >> N >> digit;
    int count = 0;
    while (N) {
        int rem = N % 10;
        if (rem == digit) {
            count++;
        }
        N /= 10;
    }
    cout << count << endl;
    return 0;
}
