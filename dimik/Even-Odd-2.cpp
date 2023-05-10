// Problem: https://lightoj.com/problem/dimik-even-odd-2

#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        string N;
        cin >> N;

        int lastDigit = N[N.length() - 1] - '0';
        if (lastDigit % 2 == 0) {
            cout << "even" << endl;
        } else {
            cout << "odd" << endl;
        }
    }

    return 0;
}