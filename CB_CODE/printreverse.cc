#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	// int temp = N;
	int rev = 0;
	while (N) {
		int rem = N % 10;
		rev = (rev * 10) + rem;
		N /= 10;
	}
	cout << rev << endl;
	return 0;
}