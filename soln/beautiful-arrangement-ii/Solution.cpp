#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> ans;
        int a = n-k-1;
        for (int i = 1; i <= a; i++) {
            ans.push_back(i);
        }
        n = n-a;
        for (int i = 0; i < n; i++) {
            if (i % 2) {
                ans.push_back(n-i/2+a);
            }
            else { 
                ans.push_back(1+i/2+a);
            }
        }
        return ans;
    }
};
// https://leetcode.com/problems/beautiful-arrangement-ii/