// Problem: https://lightoj.com/problem/dimik-count-numbers

// Solution #01:
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int countNumbersInLine(const string& line) {
    istringstream iss(line);
    int count = 0;
    int number;
    
    while (iss >> number) {
        count++;
    }
    
    return count;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();  // Ignore the newline character after reading T
    
    for (int i = 0; i < T; i++) {
        string line;
        getline(cin, line);
        
        int count = countNumbersInLine(line);
        cout << count << endl;
    }
    
    return 0;
}