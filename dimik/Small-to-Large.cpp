// Problem: https://lightoj.com/problem/dimik-small-to-large

// Solution #01:

#include <iostream>
using namespace std;

int main() {
    int t, n1, n2, n3, temp;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> n1 >> n2 >> n3;

        if (n1 > n2) {
            temp  = n1;
            n1 = n2;
            n2 = temp;
        }

        if (n1 > n3) {
            temp = n1;
            n1 = n3;
            n3 = temp;
        }

        if (n2 > n3) {
            temp = n2;
            n2 = n3;
            n3 = temp;
        }
        cout << "Case " << i << ": " << n1 << " " << n2 << " " << n3 << endl;
    }    
    return 0;
}


// Solution #02:

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;

        // Create an array with the three numbers
        int numbers[] = {n1, n2, n3};

        // Sort the array in ascending order
        sort(numbers, numbers + 3);

        // Print the case number
        cout << "Case " << i << ": ";

        // Print the sorted numbers
        for (int j = 0; j < 3; j++) {
            cout << numbers[j] << " ";
        }

        // Print a new line after each case
        cout << endl;
    }

    return 0;
}
