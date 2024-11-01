#include <iostream>
#include <string>

using namespace std;

// int main() {
// 	int n;
// 	cin >> n;

// 	int evenSum = 0, oddSum = 0;
// 	string num = to_string(n);

// 	for (int i = 0; i < num.size(); i++) {
// 		if (i % 2 == 0) {
// 			oddSum += (int(num[i]) - 48);
// 		} else {
// 			evenSum += (int(num[i]) - 48);
// 		}
// 	}
// 	cout << evenSum << " " << oddSum << endl;

// 	return 0;
// }

int main() {
	int n;
	cin >> n;
	bool isOdd = (n % 2 == 1) ? true : false;
	int evenSum = 0, oddSum = 0;
	while (n != 0) {
		if (isOdd) {
			oddSum += n % 10;
		} else {
			evenSum += n % 10;
		}
		isOdd = !isOdd;
		n /= 10;
	}
	cout << oddSum << " " << evenSum << endl;
	return 0;
}