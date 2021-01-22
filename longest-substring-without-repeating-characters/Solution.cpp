#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int arr[128] = {0};
        int ans = 0, l = 0, r = 0;
        while (r < s.size()) {
            if (arr[s[r]] > 0) {
                arr[s[l]]--;
                l++;
            } else {
                arr[s[r]]++;
                ans = max(ans, r-l+1);
                r++;
            }
        }
        return ans;
    }
};
// https://leetcode.com/problems/longest-substring-without-repeating-characters/