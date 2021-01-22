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
    bool isBalanced(TreeNode* root) {
        if (!root) return true;
        return height(root) != -1;
    }
    
    int height(TreeNode* node) {
        int left = !node->left ? 0 : height(node->left);
        if (left == -1) return -1;
        int right = !node->right ? 0 : height(node->right);
        if (right == -1) return -1;
        if (left == -1 || right == -1) return -1;
        if (abs(left - right) > 1) return -1;
        else return max(left, right) + 1;
    }    
    
};
// https://leetcode.com/problems/balanced-binary-tree/