#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>

using namespace std;


bool isPalindrome(const string &s, int start, int k) {
    int end = start + k - 1;
    while (start < end) {
        if (s[start++] != s[end--]) {
            return false;
        }
    }
    return true;
}


bool containsPalindrome(const string &s, int k) {
    for (int i = 0; i <= s.size() - k; ++i) {
        if (isPalindrome(s, i, k)) {
            return true;
        }
    }
    return false;
}

int main() {
    int N, K;
    string S;

   
    cin >> N >> K;
    cin >> S;

  
    sort(S.begin(), S.end());

    unordered_set<string> uniqueStrings;
    do {
        if (!containsPalindrome(S, K)) {
            uniqueStrings.insert(S);
        }
    } while (next_permutation(S.begin(), S.end()));

 
    cout << uniqueStrings.size() << endl;

    return 0;
}

