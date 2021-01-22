#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int low = INT_MAX, mid = INT_MAX;
        for (int i : nums) {
            if (i <= low) {
                low = i;
            } else if (i <= mid) {
                mid = i;
            } else {
                return true;
            }
        }
        return false;
    }
};
// https://leetcode.com/problems/increasing-triplet-subsequence/