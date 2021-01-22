#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size(), i = 0, j = n - 1, ans = 0, c = 0;
        c = min(height[i],height[j]);
        ans = c * (j-i);
         while (i < j) {
            if (height[i] > height[j]) {
                j--;
            } else {
                i++;
            }
            ans = max(ans, min(height[i],height[j]) * (j-i));
         }
        return ans;
    }
};
// https://leetcode.com/problems/container-with-most-water/