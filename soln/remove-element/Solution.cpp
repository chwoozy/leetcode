#include <bits/stdc++.h>
using namespace std;
class Solution {
    public int removeElement(int[] nums, int val) {
        int ptr = 0, n = nums.length;
        for (int i = 0; i < n; i++) {
            if (nums[i] == val) ptr++;
            else nums[i-ptr] = nums[i];
        }
        return n-ptr;
    }
}
// https://leetcode.com/problems/remove-element/