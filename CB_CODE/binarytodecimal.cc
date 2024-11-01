#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int temp = n;
	int dec_value = 0;
	int base = 1;
	while (temp) {
		int last_digit = temp % 10;
		temp = temp / 10;
		dec_value += last_digit * base;
		base = base * 2;
	}
	cout << dec_value << endl;
	return 0;
}