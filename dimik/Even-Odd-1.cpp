// Problem: https://lightoj.com/problem/dimik-even-odd-1

// Solution #01:
#include <iostream>
using namespace std;

int main() {
	int t, n;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n;

		if (n % 2 == 0) {
			cout << "even" << "\n";
		} else {
			cout << "odd" << "\n";
		}
	}
	
	return 0;
}