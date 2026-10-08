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
    ListNode* reverse(ListNode* list) {
        ListNode* prev = NULL;
        ListNode* curr = list;
        ListNode* next = NULL;
        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list1 = reverse(l1);
        ListNode* list2 = reverse(l2);
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        int carry = 0;
        while (temp1 != NULL || temp2 != NULL || carry != 0) {
            int a = 0;
            int b = 0;
            if (temp1 != NULL) {
                a = temp1->val;
            }

            if (temp2 != NULL) {
                b = temp2->val;
            }

            int sum = a + b + carry;
            int digit = sum%10;
            carry = sum/10;

            tail->next = new ListNode(digit);
            tail = tail->next;

            if (temp1 != NULL)
                temp1 = temp1->next;
            if (temp2 != NULL)
                temp2 = temp2->next;
        }

        return reverse(dummy->next);
    }
};