#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        return (s+s).substr(1, 2*s.size()-2).find(s) != -1;
    }
};
// https://leetcode.com/problems/repeated-substring-pattern/