#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        int n = arr.size(), i = n-1, order = -1; // 1 for ascend
        if (n < 2) return arr; // base case
        while (i > 0 && arr[i] >= arr[i-1]) i--;
        if (i == 0) return arr;
        int j = i, largest = arr[i], k = i;
        i--;
        while (j < n) {
            if (arr[j] > largest && arr[j] < arr[i]) {
                largest = arr[j];
                k = j;
            }
            j++;
        }
        swap(arr[i], arr[k]);
        return arr; 
        
    }
};