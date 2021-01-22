#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        map<int, int> m;
        int ans = 0;
        for (int i : people) {
            m[i]++;
        }
        m[0] = 1;
        for (int i : people) {
            if (m[i] < 1) continue;
            m[i]--;
            ans++;
            for (auto it = m.lower_bound(limit-i); it != m.begin(); it--) {
                if (it->first <= (limit-i) && it->second > 0) {
                    m[it->first]--;
                    break;
                }
            }
            
        }
        return ans;
        // sort(people.begin(), people.end());
        // int n = people.size(), l = 0, r = n-1, ans = 0;
        // while (r > -1 && people[l] + people[r] > limit) r--;
        // ans += n-1-r;
        // while (l <= r) {
        //     l++;
        //     r--;
        //     if (people[l] + people[r] > limit) ans += 2;
        //     else ans++;
        // }
        // return ans;
    }
};