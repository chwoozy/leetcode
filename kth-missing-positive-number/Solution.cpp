#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i = 0, j = 0, n = arr.size();
        while (i != k) {
            if (j >= n) {
                i++;
            } else {
                if ((i+j+1) != arr[j]) i++;
                else j++;
            }
        }
        return i+j;
    }
};
// https://leetcode.com/problems/kth-missing-positive-number/