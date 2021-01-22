#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reformatNumber(string number) {
        number.erase(remove(number.begin(), number.end(), '-'), number.end());
        number.erase(remove(number.begin(), number.end(), ' '), number.end());
        string ans = "";
        // return number;
        
        while(!number.empty()) {
            if (ans.empty()) {
                ans += cut(number);
                // ans.append(cut(number));
            } else {
                // ans.append("-");
                // ans.append(cut(number));
                ans += "-" + cut(number);
            }
        }
        return ans;
    }
    
    string cut(string& str) {
        int n = str.size();
        string res = "";
        if (n < 4) {
            res = str;
            str.clear();
        } else if (n == 4) {
            res = str.substr(0,2);
            str.erase(0,2);
        } else {
            res = str.substr(0,3);
            str.erase(0,3);
        }
        return res;
    }
};
// https://leetcode.com/problems/reformat-phone-number/