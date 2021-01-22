#include <bits/stdc++.h>
using namespace std;
class Solution {
    int ans = 0;
public:
    int countArrangement(int n) {
        vector<int> visited(n+1);
        backtrack(n, 1, visited);
        return ans;
    }
    
    void backtrack(int n, int pos, vector<int>& visited) {
        if (pos > n) ans ++;
        for (int i = 1; i <= n; i++) {
            if (!visited[i] && (pos % i == 0 || i % pos == 0)) {
                visited[i] = 1;
                backtrack(n, pos+1, visited);
                visited[i] = 0;
            }
        }
    }
};
// https://leetcode.com/problems/beautiful-arrangement/