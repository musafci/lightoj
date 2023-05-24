// Problem: https://lightoj.com/problem/dimik-run-rate-1

// Solution #01:
#include <iostream>
using namespace std;

int main() {
    int t, r1, r2, b, ball_played;
    double current_run_rate, required_run_rate;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> r1 >> r2 >> b;
        ball_played = 300 - b;
        current_run_rate = (r2 / ball_played) * 6;
        required_run_rate = ((r1 - r2 + 1) / b) * 6;

        cout << current_run_rate << " " << required_run_rate;
    }    
}