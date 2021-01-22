#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a = "", b = "";
        for (string s : word1) {
            for (char c : s) {
                a += c;
            }
        }
        
        for (string s : word2) {
            for (char c: s) {
                b += c;
            }
        }
        
        return a == b;
    }
};
// https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/