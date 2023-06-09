// Problem: https://lightoj.com/problem/dimik-run-rate-1

// Solution #01:
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int r1, r2, B;
        cin >> r1 >> r2 >> B;

        double current_run_rate = static_cast<double>(r2) / (300 - B) * 6;
        double required_run_rate = static_cast<double>(r1 - r2 + 1) / B * 6;

        cout << fixed << setprecision(2) << current_run_rate << " " << required_run_rate << endl;
    }

    return 0;
}


// Soution #02: Solution in C

#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int r1, r2, B;
        scanf("%d %d %d", &r1, &r2, &B);

        double current_run_rate = (double)r2 / ((300 - B) / 6.0);
        double required_run_rate = (double)(r1 - r2 + 1) / (B / 6.0);

        printf("%.2f %.2f\n", current_run_rate, required_run_rate);
    }

    return 0;
}