#include <iostream>
#include <climits>

using namespace std;

int main() {
	int N1, N2;
	cin >> N1 >> N2;
	int count = 0;
	for (int i = 1; i <= INT_MAX; i++) {
		int value = (3 * i) + 2;
		if (value % N2 != 0) {
			cout << value << endl;
			count += 1;
		}
		if (count == N1) {
			exit(0);
		}
	}
	return 0;
}