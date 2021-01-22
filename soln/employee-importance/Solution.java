/*
// Definition for Employee.
class Employee {
    public int id;
    public int importance;
    public List<Integer> subordinates;
};
*/

class Solution {
    public static HashMap<Integer, Employee> hash;
    
    public int getImportance(List<Employee> employees, int id) {
        hash = new HashMap<>();
        
        for (Employee e : employees) {
            hash.put(e.id, e);
        }
        
        return calculate(id);
        
    }
    
    public int calculate(int id) {
        Employee e = hash.get(id);
        int ttl = e.importance;
        
        for (Integer i : e.subordinates) {
            ttl += calculate(i);
        }
        
        return ttl;
    }
}

// https://leetcode.com/problems/employee-importance/