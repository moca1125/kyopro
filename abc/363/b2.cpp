#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>

// 部分文字列が回文かどうかをチェックする関数
bool isPalindrome(const std::string &str) {
    int n = str.size();
    for (int i = 0; i < n / 2; ++i) {
        if (str[i] != str[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

// すべての順列を生成し、有効なものを数える関数
int countValidPermutations(const std::string &S, int K) {
    std::unordered_set<std::string> uniquePermutations;
    std::string sortedS = S;
    std::sort(sortedS.begin(), sortedS.end());
    
    do {
        bool isValid = true;
        for (int i = 0; i <= sortedS.size() - K; ++i) {
            std::string substr = sortedS.substr(i, K);
            if (isPalindrome(substr)) {
                isValid = false;
                break;
            }
        }
        if (isValid) {
            uniquePermutations.insert(sortedS);
        }
    } while (std::next_permutation(sortedS.begin(), sortedS.end()));
    
    return uniquePermutations.size();
}

int main() {
    int N, K;
    std::string S;
    std::cin >> N >> K >> S;
    
    int result = countValidPermutations(S, K);
    std::cout << result << std::endl;
    
    return 0;
}

