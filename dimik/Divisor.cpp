// Problem: https://lightoj.com/problem/dimik-divisor

// Soluion #01:

#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        cin >> n;
        cout <<"Case " << i << ": ";
        
        for (int j = 1; j <= n; j++)
        {
            if (n%j == 0) {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}


// Solution #02:
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// function to find all factors of a number
vector<int> find_factors(int n) {
    vector<int> factors;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            factors.push_back(i);
            if (i != n/i) {
                factors.push_back(n/i);
            }
        }
    }
    sort(factors.begin(), factors.end());
    return factors;
}

int main() {
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        int N;
        cin >> N;
        vector<int> factors = find_factors(N);
        cout << "Case " << i << ":";
        for (int factor : factors) {
            cout << " " << factor;
        }
        cout << endl;
    }
    return 0;
}
