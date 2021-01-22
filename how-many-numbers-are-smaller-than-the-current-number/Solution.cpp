#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        int count[101] = {0};
        
        for (int i = 0; i < n; i++) {
            count[nums[i]]++;
        }
        
        for (int i = 1; i < 101; i++) {
            count[i] += count[i-1];
        }
        
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) nums[i] = 0;
            else nums[i] = count[nums[i]-1];
        }
        return nums;
    }
};
// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/