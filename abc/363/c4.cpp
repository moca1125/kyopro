#include <iostream>
#include <string>
using namespace std;

// Function to check if a substring is a palindrome
bool isPalindrome(const string &s, int start, int k) {
    int end = start + k - 1;
    for (int i = 0; i < k / 2; ++i) {
        if (s[start + i] != s[end - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int N, K;
    string S;

    // Input
    cin >> N >> K;
    cin >> S;

    int nonPalindromeCount = 0;

    // Iterate over all substrings of length K
    for (int i = 0; i <= N - K; ++i) {
        if (!isPalindrome(S, i, K)) {
            ++nonPalindromeCount;
        }
    }

    // Output the result
    cout << nonPalindromeCount << endl;

    return 0;
}

