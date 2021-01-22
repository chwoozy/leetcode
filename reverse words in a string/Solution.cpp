#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string curr = "";
        for (char c : s) {
            if (c == ' ') {
                if (curr != "") v.push_back(curr);
                curr = "";
            } else curr += c;
        }
        if (curr != "") v.push_back(curr);
        string ans = "";
        for (int i = v.size()-1; i>-1; i--) {
            ans += (" " + v[i]);
        }
        return ans.substr(1, ans.size() - 1);
    }
};
// https://leetcode.com/problems/reverse-words-in-a-string/