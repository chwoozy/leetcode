#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // Brute Force
//     bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
//         int i = 0, n = arr.size(), m = pieces.size();
//         while (i < n) {
//             int start = i;
//             for (int j = 0; j < m; j++) {
//                 int k = 0, l = pieces[j].size();
//                 if (arr[i] != pieces[j][k]) {
//                     continue;
//                 }
//                 i++; k++;
                
//                 while (k < l && i < n) {
//                     if (arr[i++] != pieces[j][k++]) return false;
//                 }
//                 break;
//             }
//             if (start == i) return false;
//         }
//         return true;
//     }
    // Map
//     bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
//         unordered_map<int, vector<int>> m;
//         for (vector<int> v : pieces) {
//             m[v[0]] = v;
//         }
        
//         for (int i = 0; i < arr.size();) {
//             if (m.find(arr[i]) == m.end()) return false;
//             for (int j : m[arr[i]]) {
//                 if (j != arr[i++]) return false;
//             }
//         }
//         return true;
//     }
    // Array
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        int pos[101] = {-1};
        // fill up array
        for (int i = 0; i < pieces.size(); i++) {
            pos[pieces[i][0]] = i;
        }
        
        for (int i = 0; i < arr.size();) {
            if (pos[arr[i]] == -1) return false;
            for (int j : pieces[pos[arr[i]]]) {
                if (j != arr[i++]) return false;
            }
        }
        return true;
        
    }
    
};
// https://leetcode.com/problems/check-array-formation-through-concatenation/

