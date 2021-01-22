#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int curr = INT_MIN;
        // for (int i = 0; i < nums.size();) {
        //     if (nums[i] == curr) {
        //         nums.erase(nums.begin() + i);
        //     } else {
        //         curr = nums[i];
        //         i++;
        //     }
        // }
        // return nums.size();
        
        int a=0;
        for (int i=1; i<nums.size(); i++) {
            if (nums[i] == nums[i-1]) a++;
            else nums[i-a] = nums[i];
        }
        return nums.size()-a;
    }
};
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/