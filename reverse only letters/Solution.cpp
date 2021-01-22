#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string S) {
        int i = 0, j = S.size()-1;
        while (i < j) {
            while (i < j && !isalpha(S[i])) {
                i++;
            }
            
            while (i < j && !isalpha(S[j])) {
                j--;
            }
            char c = S[i];
            S[i] = S[j];
            S[j] = c;
            i++;
            j--;
        }
        return S;
    }
};

// https://leetcode.com/problems/reverse-only-letters/