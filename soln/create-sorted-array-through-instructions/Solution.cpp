#include <bits/stdc++.h>
using namespace std;

class Solution {
    int dp[100001] = {0};
public:
    int createSortedArray(vector<int>& is) {
        long ans = 0, mod = 1e9 + 7;
        int nums = 0;
        for (int i : is) {
            ans += min(retrieve(i-1), (nums-retrieve(i)));   
            update(i);
            nums++;
            
        }
        return (int) (ans % mod);
    }
    
    void update(int i) {
        for (; i < 100001; i+=i&-i) {
            dp[i]++;
        }
    }
    
    int retrieve(int i) {
        int ans = 0;
        for (; i > 0; i-=i&-i) {
            ans += dp[i];
        }
        return ans;
    }
};

// https://leetcode.com/problems/create-sorted-array-through-instructions/