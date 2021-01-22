#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size(), prev = arr[n-1];
        arr[n-1] = -1;
        for (int i = n-2; i > -1; i--) {
            int curr = arr[i];
            arr[i] = prev;
            prev = max(curr, prev);
        }
        return arr;
    }
};
// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/