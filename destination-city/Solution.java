import java.util.Map.*;

class Solution {
    public String destCity(List<List<String>> paths) {
        HashMap<String, String> hash = new HashMap<>();
        for (List<String> city : paths) {
            hash.put(city.get(0), city.get(1));
        }
        
        for (Entry<String, String> curr : hash.entrySet()) {
            if (!hash.containsKey(curr.getValue())) {
                return curr.getValue();
            }
        }
        return "";
    }
}
// https://leetcode.com/problems/destination-city/