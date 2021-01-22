#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> s;
        int n = nums.size(), curr = 0, max = 0, l = 0, r = 0;
        // for (int i : nums) {
        //     if(s.find(i) == s.end()) {
        //         s.insert(i);
        //         sum += i;
        //     }
        // } 
        while (l <= r && r < n) {
            if(s.find(nums[r]) != s.end()) {
                curr -= nums[l];
                s.erase(nums[l]);
                l++;
            } else {
                s.insert(nums[r]);
                curr += nums[r];
                r++;
                if (curr > max) max = curr;
            }
        }
        
        return max;
    }
};
// https://leetcode.com/problems/maximum-erasure-value/