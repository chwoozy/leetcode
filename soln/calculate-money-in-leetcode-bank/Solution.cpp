#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalMoney(int n) {
        int sevens = n/7, weeks = 1, ans = 0;
        while (n > 0) {
            for (int i = 0; i < 7 && n > 0; i++) {
                ans += weeks + i;
                n--;
            }
            weeks++;
        }
        return ans;
        
    }
};


// https://leetcode.com/contest/biweekly-contest-43/problems/calculate-money-in-leetcode-bank/