#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        if (n < 3) return ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n-2; i++) {
            if (i == 0 || nums[i] != nums[i-1]) {
                int target = -1 * nums[i], start = i+1, end = n-1;
                while(start < end) {
                    int curr = nums[start] + nums[end];
                    if (curr > target) {
                        end--;
                    } else if (curr < target) {
                        start++;
                    } else {
                        ans.push_back({nums[start], nums[i], nums[end]});
                        while(start < end && nums[start] == nums[start+1]) start++;
                        while(start < end && nums[end] == nums[end-1]) end--;
                        start++;
                        end--;
                    }
                }
            }
        }
        return ans;
        
    }
};
// https://leetcode.com/problems/3sum/