#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         for (int i = 0, j = 0; i < m + n; i++) {
//             if (i < m) {
//                 if (nums1[i] > nums2[j]) {
//                     int temp = nums1[i];
//                     nums1[i] = nums2[j];
//                     nums2[j] = temp;
//                 } else {
                    
//                 }
//             } else {
//                 if ()
//             }
//         }
        for (int i : nums2) {
            nums1[m] = i;
            m++;
        }
        sort(nums1.begin(), nums1.end());
    }
};
// https://leetcode.com/problems/merge-sorted-array/