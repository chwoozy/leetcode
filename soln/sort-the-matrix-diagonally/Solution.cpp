#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> v;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int x = i, y = j;
                if (i == 0 || j == 0) {
                    vector<int> curr;
                    while (x < n && y < m) {
                        curr.push_back(mat[x][y]);
                        x++;
                        y++;
                    }
                    v.push_back(curr);
                }
            }
        }
        
        for (int i = 0; i < v.size(); i++) {
            sort(v[i].begin(), v[i].end());
        }
        
        for (int i  = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int x = i, y = j, z = i != 0 && j == 0 ? i + m - 1 : j, index = 0;
                if (i == 0 || j == 0) {
                    while (x < n && y < m && index < v[z].size()) {
                        mat[x][y] = v[z][index];
                        // mat[x][y] = 1;
                        x++;
                        y++;
                        index++;
                    }
                }
            }
        }
        return mat;
    }
};
// https://leetcode.com/problems/sort-the-matrix-diagonally/