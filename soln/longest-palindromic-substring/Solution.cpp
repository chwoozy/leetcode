#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int ansL = 0, ansR = 0, ans = 0, n = s.size();
        //odd
        for (int mid = 0; mid < n; mid++) {
            for (int i = 0; mid - i >= 0 && mid + i < n; i++) {
                if (s[mid - i] != s[mid + i]) break;
                if (2 * i + 1 > ans) {
                    ansL = mid - i;
                    // ansR = mid + i;
                    ans = 2 * i + 1;
                }
            }
        }
        
        //even
        for (int mid = 0; mid < n - 1; mid++) {
            for (int i = 1; mid - i + 1 >= 0 && mid + i < n; i++) {
                if (s[mid-i+1] != s[mid+i]) break;
                if (2*i > ans) {
                    ansL = mid - i + 1;
                    // ansR = mid + i:
                    ans = 2*i;
                }
            }
        }
        return s.substr(ansL, ans);
        
    }
};

// abba
// abtba
// https://leetcode.com/problems/longest-palindromic-substring/