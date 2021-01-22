/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<Double> averageOfLevels(TreeNode root) {
        Queue<TreeNode> q = new LinkedList<>();
        List<Double> res = new ArrayList<>();
        
        if (root == null) {
            return res;
        } else {
            q.add(root);
            while(!q.isEmpty()) {
                int sz = q.size();
                double total = 0.0;
                int count = 0;
                for(int i = 0; i < sz; i++) {
                    TreeNode node = q.poll();
                    total += node.val;
                    count++;
                    if (node.left != null) {
                        q.add(node.left);
                    }
                    if (node.right != null) {
                        q.add(node.right);
                    }
                }
                res.add(total/count);
            }
            return res;
        }
    }
}
// https://leetcode.com/problems/average-of-levels-in-binary-tree/