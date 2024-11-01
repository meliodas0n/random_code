#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int S[N];
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    bool flag = false;
    for (int i = 0; i < N; i++) {
        if (S[i] <= S[i + 1]) {
            flag = true;
        } else {
            flag = false;
        }
    }
    if (flag) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
