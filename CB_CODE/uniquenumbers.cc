#include <iostream>

using namespace std;

int main() {
	int a[] = {2, 3, 5, 2, 3};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans = ans ^ a[i];
	}
	cout << ans << endl;
	return 0;
}