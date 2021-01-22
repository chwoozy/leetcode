#include <bits/stdc++.h>
using namespace std;
class Solution {
    
public:
    bool static sortCol(const vector<int>& v1, const vector<int>& v2) {
        return v1[1] > v2[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), sortCol);
        int res = 0;
        for (vector<int> v : boxTypes) {
            if (truckSize == 0) {
                break;
            } else if (v[0] >= truckSize) {
                res += truckSize * v[1];
                truckSize = 0;
            } else {
                res += v[1] * v[0];
                truckSize -= v[0];
            }
        }
        return res;
    }
};
// https://leetcode.com/contest/weekly-contest-222/problems/maximum-units-on-a-truck/