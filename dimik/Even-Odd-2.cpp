// Problem: https://lightoj.com/problem/dimik-even-odd-2

// Solution #01:

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

// Solution #02:

#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    string N;
    cin >> T;

    for (int i = 0; i < T; i++) {        
        cin >> N;

        if (N[N.length() - 1] % 2 == 0) {
            cout << "even" << "\n";
        } else {
            cout << "odd" << "\n";
        }
    }
    return 0;
}