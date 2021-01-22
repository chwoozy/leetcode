#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = 0;
        bool a = false;
        
        for(char i : s) {
            if (i == ' ') {
                a = true;
            } else {
                if (a) n = 0;
                a = false;
                n++;
            }
        }
        return n;
        
    }
};
// https://leetcode.com/problems/length-of-last-word/