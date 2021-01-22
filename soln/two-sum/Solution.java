class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, TreeSet<Integer>> hash = new HashMap<>();
        int[] res = new int[2];
        for (int i = 0; i < nums.length;  i++) {
            if (hash.containsKey(nums[i])) {
                hash.get(nums[i]).add(i);
            } else {
                TreeSet<Integer> set = new TreeSet<>();
                set.add(i);
                hash.put(nums[i], set);
            }
        }
        
        for (int i = 0; i < nums.length; i++) {
            int second = target - nums[i];
            if (hash.containsKey(second)) {
                int index = hash.get(second).first();
                if (index == i) {
                    if (hash.get(second).size() != 1) {
                        int temp = hash.get(second).pollFirst();
                        index = hash.get(second).first();
                    } else {
                        continue;
                    }
                }
                res[1] = index;
                res[0] = i;
                break;
            }
        }
        
        return res;
        
    }
}
// https://leetcode.com/problems/two-sum/