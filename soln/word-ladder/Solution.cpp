#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        if (find(wordList.begin(), wordList.end(), endWord) == wordList.end()) return 0;
        unordered_set<string> dict(wordList.begin(), wordList.end());
        queue<string> q;
        q.push(beginWord);
        int ans = 1;
        while (!q.empty()) {
            int n = q.size();
            for (int i = 0; i < n; i++) {
                string curr = q.front();
                q.pop();
                if (curr == endWord) return ans;
                // dict.erase(curr);
                for (int j = 0; j < curr.size(); j++) {
                    char temp = curr[j];
                    for (int k = 0; k < 26; k++) {
                        curr[j] = 'a' + k;
                        if (dict.find(curr) != dict.end()) {
                            q.push(curr);
                            dict.erase(curr);
                        }
                    }
                    curr[j] = temp;
                }
            }
            ans++;
        }
        return 0;
    }
};
// https://leetcode.com/problems/word-ladder/