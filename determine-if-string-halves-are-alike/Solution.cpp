#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size()/2;
        string a = s.substr(0, n);
        string b = s.substr(n, n);
        int x = 0, y = 0;
        for (char c : a) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') x++;
        }
        for (char c : b) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') y++;
        }
        return x == y;
    }
};
// https://leetcode.com/contest/weekly-contest-221/problems/determine-if-string-halves-are-alike/