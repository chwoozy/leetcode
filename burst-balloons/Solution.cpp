#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxCoins(vector<int>& nums) {
        nums.insert(nums.begin(), 1);
        nums.push_back(1);
        
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));
        return burst(dp, nums, 0, n-1);
    }
    
    int burst(vector<vector<int>>& dp, vector<int>& nums, int left, int right) {
        if(left+1==right) return 0;
        if (dp[left][right] > 0) return dp[left][right];
        int ans = 0;
        for(int i=left+1; i<right; i++) {
            ans = max(ans, nums[left]*nums[i]*nums[right] + burst(dp, nums, left, i) + burst(dp,nums, i, right));
        }
        dp[left][right] = ans;
        return ans;
    }
};
// https://leetcode.com/problems/burst-balloons/