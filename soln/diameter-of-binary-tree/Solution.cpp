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
    int ans = 0;
public:
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return ans;
    }
    
    int dfs(TreeNode* x) {
        if (!x) return 0;
        int left = dfs(x->left);
        int right = dfs(x->right);
        ans = max(ans, left+right);
        return max(left,right) + 1;
    }
};
// https://leetcode.com/problems/diameter-of-binary-tree/