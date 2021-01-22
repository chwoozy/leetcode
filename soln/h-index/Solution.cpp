#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        if (n == 0) return 0;
        if (n == 1 && citations[0] == 0) return 0;
        sort(citations.rbegin(), citations.rend());
        if (citations[0] == 0 ) return 0;
        
        int i;
        for (i = 0; i < citations.size(); i++) {
            if (citations[i] < i + 1) return i;
        }
        return i;
    }
};
// https://leetcode.com/problems/h-index/