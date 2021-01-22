#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double count = 0, wait = 0, cus = customers.size(), lastOrder = customers[0][0];
        for (vector<int> v : customers) {
            if (v[0] > lastOrder) lastOrder = v[0];
            lastOrder += v[1];
            wait += lastOrder - v[0];
            count++;
        }
        return wait/count;
    }
};
// https://leetcode.com/contest/biweekly-contest-42/problems/average-waiting-time/