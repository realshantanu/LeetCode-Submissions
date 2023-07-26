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
        ListNode* l3 = new ListNode(0);
        ListNode *head = l3;
        int carry = 0;
        while (l1 || l2 || carry){
            int val = 0;
            if(l1 != NULL){
                val+=l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL){
                val += l2->val;
                l2 = l2->next;
            }
            val += carry;
            carry = val / 10;
            val = val % 10;
            l3 -> next = new ListNode(val);
            l3 = l3->next;
        }

        return head->next;
    }
};