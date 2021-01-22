#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> v;
    int getMinimumDifference(TreeNode* root) {
        dfs(root);
        sort(v.begin(), v.end());
        int res = INT_MAX, n = v.size();
        for (int i = 0; i < n - 1; i++) {
            res = min(res, abs(v[i] - v[i+1]));
        }
        return res;
    }
    
    void dfs(TreeNode* root) {
        if (root) {
            v.push_back(root->val);
            dfs(root->left);
            dfs(root->right);
        }
    }
};
// https://leetcode.com/problems/minimum-absolute-difference-in-bst/