#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        double ans = 0;
        int negative = 1;
        int i = 0;
        while (s[i] == ' ') i++;
        
        if (s[i] == '-') {
            negative = -1;
            i++;
        } else if (s[i] == '+') {
            i++;
        } else if (s[i] > '9' || s[i] < '0') {
            return ans;
        }
        
        for (; i<s.size(); i++) {
            if (s[i] <= '9' && s[i] >= '0') {
                ans = ans * 10 + (s[i] - '0');
            } else {
                break;
            }
        }
        
        ans *= negative;
        if (ans > INT_MAX) {
            return INT_MAX;
        } else if (ans < INT_MIN) {
            return INT_MIN;
        } else {
            return ans;
        }
        
    }
};
// https://leetcode.com/problems/string-to-integer-atoi/