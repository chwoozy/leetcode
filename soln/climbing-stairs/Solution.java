class Solution {
    public int climbStairs(int n) {
        if (n == 0 || n == 1) {
            return 1;
        } else {
            int a = 1;
            int b = 1;
            for (int i  = 2; i <= n; i++) {
                int temp = a;
                a = b;
                b = b + temp;
            }
            return b;
        }
    }
    
}
// https://leetcode.com/problems/climbing-stairs/