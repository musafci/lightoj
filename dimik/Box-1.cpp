// Problem: https://lightoj.com/problem/dimik-box-1

// Solution #01:
#include <iostream>
using namespace std;

int main() {
    int t, n, m;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int count = 0;
        cin >> n;
        m = n * n;

        for (int j = 1; j <= m; j++)
        {
            cout << "*";
            count++;

            if (count == n) {
                count = 0;
                cout << endl;
            }
        }

        if (i < t) {
            cout << endl;
        }
    }
    return 0;
}


// Solution #02
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        for (int row = 0; row < n; row++) {
            for (int col = 0; col < n; col++) {
                cout << "*";
            }
            cout << endl;
        }

        if (i != t - 1) {
            cout << endl;
        }
    }

    return 0;
}