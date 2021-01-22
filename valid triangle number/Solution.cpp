#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n-1; i++) {
            for (int j  = i+1; j < n-1; j++) {
                int curr = nums[i] + nums[j], k = j+1;
                while (k < n && nums[k] < curr) k++;
                count += (k-j-1);
            }
        }
        return count;
    }
};
// https://leetcode.com/problems/valid-triangle-number/