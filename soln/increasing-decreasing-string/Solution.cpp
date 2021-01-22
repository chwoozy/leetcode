#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string sortString(string s) {
        int arr[128] = {0};
        string ans = "";
        //initialise ascii
        for (char c : s) {
            arr[c]++;
        }
        int count = 0, n = s.size();
        while (count < n) {
            for (int i = 'a'; i <= 'z' && count < n; i++) {
                if (arr[i] > 0) {
                    ans += (char) i;
                    count++;
                    arr[i]--;
                }
            }
            for (int i = 'z'; i >= 'a' && count < n; i--) {
                if (arr[i] > 0) {
                    ans += (char) i;
                    count++;
                    arr[i]--;
                }
            }
        }
        return ans;
        
        
    }
};
// https://leetcode.com/problems/increasing-decreasing-string/