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
    vector<int> v;
public:
    vector<int> inorderTraversal(TreeNode* root) {
        inOrder(root);
        return v;
    }
    void inOrder(TreeNode* root) {
        if (!root) return;
        if (root->left) {
            inorderTraversal(root->left);
        }
        v.push_back(root->val);
        if (root->right) {
            inorderTraversal(root->right);
        }
    }
};
// https://leetcode.com/problems/binary-tree-inorder-traversal/