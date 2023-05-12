// Problem: https://lightoj.com/problem/dimik-descending-number

// Solution #01:

#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (int i = 1000; i >= 1; i--) {
        cout << i << " ";
        count++;
        if (count == 5) {
            cout << endl;
            count = 0;
        }
    }
    return 0;
}