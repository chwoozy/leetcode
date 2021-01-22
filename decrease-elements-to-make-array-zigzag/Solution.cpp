#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int movesToMakeZigzag(vector<int>& nums) {
        return min(mover(nums, 0), mover(nums,1));
    }
    
    int mover(vector<int>& nums, int i) {
        int n = nums.size(), least = 0;
        for (;i < n; i+= 2) {
            if (i == 0) least += max(nums[i]-nums[i+1]+1, 0);
            else if (i == n-1) least += max(nums[i]-nums[i-1]+1,0);
            else least += max(nums[i]-min(nums[i+1],nums[i-1])+1,0);
        }
        return least;
    }
};
// https://leetcode.com/problems/decrease-elements-to-make-array-zigzag/