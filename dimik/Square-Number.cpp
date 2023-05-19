// Problem: https://lightoj.com/problem/dimik-square-number

// Solution #01:

#include <iostream>
#include <cmath>

int main() {
    int T;
    std::cin >> T;

    for (int i = 0; i < T; i++) {
        int N;
        std::cin >> N;

        // Check if the square root of N is an integer
        int sqrtN = sqrt(N);
        if (sqrtN * sqrtN == N) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}