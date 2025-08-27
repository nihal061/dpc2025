#include <iostream>
#include <string>
using namespace std;

string longestPalindrome(string s) {
    int n = s.size();
    if (n == 0) return "";
    
    int start = 0, maxLen = 1;
    
    auto expand = [&](int left, int right) {
        while (left >= 0 && right < n && s[left] == s[right]) {
            int len = right - left + 1;
            if (len > maxLen) {
                maxLen = len;
                start = left;
            }
            left--;
            right++;
        }
    };
    
    for (int i = 0; i < n; i++) {
        expand(i, i);     // odd length palindrome
        expand(i, i + 1); // even length palindrome
    }
    
    return s.substr(start, maxLen);
}

int main() {
    cout << longestPalindrome("babad") << endl; // "bab" (or "aba")
    cout << longestPalindrome("cbbd") << endl;  // "bb"
    cout << longestPalindrome("a") << endl;     // "a"
    cout << longestPalindrome("aaaa") << endl;  // "aaaa"
    cout << longestPalindrome("abc") << endl;   // "a"
    return 0;
}
