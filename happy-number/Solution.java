class Solution {
    public boolean isHappy(int n) {
        HashSet<Integer> hash = new HashSet<>();
        
        while(n != 1) {
            if (hash.contains(n)) {
                return false;
            } else {
                int temp = 0;
                hash.add(n);
                while (n != 0) {
                    temp += Math.pow(n % 10, 2);
                    n /= 10;
                }
                n = temp;
                
            }
        }
        return true;
        
    }
}
// https://leetcode.com/problems/happy-number/