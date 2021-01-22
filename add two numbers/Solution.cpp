#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sen = new ListNode(0, NULL);
        traverse(l1, l2, sen, 0);
        return sen->next;
    }
    
    void traverse(ListNode* l1, ListNode* l2, ListNode* sen, int carry) {
        if (!l1 && !l2) {
            if (carry != 0) sen->next = new ListNode(carry);
            return;
        }
        int curr = 0;
        if (l1) {
            curr += l1->val;
            l1 = l1->next;
        }
        if (l2) {
            curr += l2->val;
            l2 = l2->next;
        }
        curr += carry;
        if (curr > 9) {
            curr -= 10;
            carry = 1;
        } else {
            carry = 0;
        }
        sen->next = new ListNode(curr);
        traverse(l1, l2, sen->next, carry);
    }
};

// https://leetcode.com/problems/add-two-numbers/