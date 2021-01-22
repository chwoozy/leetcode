#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string predictPartyVictory(string senate) {
        int r = 0, d = 0, i = 0;
        while (true) {
            i = 0;
            int countr = 0;
            int countd = 0;
            while (i < senate.size()) {
                if (senate[i] == 'R') {
                    countr++;
                    if (r < 0) {
                        // senate.erase(i, 1);
                        senate[i] = '!';
                        r++;
                    } else {
                        d--;
                        i++;
                    }
                    
                } else if (senate[i] == 'D') {
                    countd++;
                    if (d < 0) {
                        // senate.erase(i, 1);
                        senate[i] = '!';
                        d++;
                    } else {
                        r--;
                        i++;
                    }
                } else {
                    i++;
                }
            }
            if (countr > 0 && countd == 0) return "Radiant";
            if (countd > 0 && countr == 0) return "Dire";
        }
        
    }
};

// https://leetcode.com/problems/dota2-senate/