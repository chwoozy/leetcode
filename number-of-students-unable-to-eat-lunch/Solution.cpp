#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int check = 0, n = students.size();
        while(students.size() > 0 && sandwiches.size() > 0 && check < n * n) {
            if (students[0] == sandwiches[0]) {
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
            } else {
                students.push_back(students[0]);
                students.erase(students.begin());
            }
            check++;
        }
        return students.size();
    }
};
// https://leetcode.com/contest/biweekly-contest-42/problems/number-of-students-unable-to-eat-lunch/