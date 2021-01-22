#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // int powTwo(long i) {
    //     if ((i & (i - 1)) == 0) return 1;
    //     else return -1;
    // }
//     int countPairs(vector<int>& deliciousness) {
//         long count = 0, n = deliciousness.size();
//         int dp[10000001] = {0};
        
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (i != j) {
//                     long temp = deliciousness[i] + deliciousness[j];
//                     if (temp == 0) continue;
//                     if (dp[temp] != 0) {
//                         if (dp[temp] == 1) count++;
//                     } 
//                     else {
//                         dp[temp] = powTwo(temp);
//                         if (dp[temp] == 1) count++;
//                     }
//                 }
//             }
//         }
//         return (count/2) % (long) (pow(10,9) + 7);
//     }
    int countPairs(vector<int>& deliciousness) {
        long long ans = 0;
        unordered_map<int, int> m;
        for (int i : deliciousness) {
            for (int j = 1; j <= (1<<21); j*=2) {
                if (m.count(j-i)) ans += m[j-i];
            }
            m[i]++;
        }
        return ans % (int) (1e9 + 7);
    }
};

// https://leetcode.com/problems/count-good-meals/