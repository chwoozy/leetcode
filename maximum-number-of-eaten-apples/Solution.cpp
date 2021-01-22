#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> p;
class Solution {
public:
    int eatenApples(vector<int>& apples, vector<int>& days) {
        priority_queue<p, vector<p>, greater<p>> pq;
        int i = 0, t = 1, ans = 0, n = apples.size();
        while(i < n || !pq.empty()) {
            if (i < n) {
                pq.push(make_pair(i + days[i], apples[i]));
                i++;
            }
            
            while(!pq.empty() && pq.top().first < t) pq.pop();
            if(!pq.empty()) {
                p curr = pq.top();
                pq.pop();
                curr.second--;
                ans++;
                if (curr.second > 0) pq.push(curr);
            }
            // i++;
            t++;
        }
        return ans;
    }
};
// https://leetcode.com/problems/maximum-number-of-eaten-apples/
