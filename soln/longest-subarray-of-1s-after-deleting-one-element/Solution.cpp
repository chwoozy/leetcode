#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        if (nums.size() < 2) return 0;
        int ans = 0, prev = 0, curr = 0, ones = 1;
        vector<int> v;
        for(int i=0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                curr++;
            }
            if (nums[i] == 0 || i == nums.size()-1) {
                if (nums[i] == 0) ones = 0;
                ans = max(ans, prev + curr);
                prev = curr;
                curr = 0;
            }
        }
        return ones ? ans - 1 : ans;
    }
};
// https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/