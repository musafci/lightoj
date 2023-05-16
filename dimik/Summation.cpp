// Problem: https://lightoj.com/problem/dimik-summation

// Solution #01:

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        int firstDigit = n / 10000;
        int lastDigit = n % 10;
        int sum = firstDigit + lastDigit;

        cout << "Sum " << "= " << sum << endl;
    }

    return 0;
}