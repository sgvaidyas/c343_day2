#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (j == i && i < n / 2 || j + i == n - 1 && i >= n / 2 || j == 0) {
				cout << '*';
			}
			else {
				cout << ' ';
			}
		}
		cout << endl;
	}
	return 0;
}
