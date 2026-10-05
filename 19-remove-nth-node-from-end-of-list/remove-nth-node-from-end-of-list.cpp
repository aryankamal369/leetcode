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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int size = 0;
        while (temp != NULL) {
            size++;
            temp = temp->next;
        }

        int pos = size - n;

        if (pos < 0) {
            return NULL;
        } 
        else if (pos == 0) {
            ListNode* temp1 = head;
            head = head->next;
            temp1->next = NULL;
            delete temp1;
        } 
        else {
            int idx = 0;
            ListNode* temp2 = head;
            ListNode* del = NULL;
            while (idx+1 != pos) {
                temp2 = temp2->next;
                idx++;
            }
            del = temp2->next;
            temp2->next = temp2->next->next;
            delete del;
        }
        return head;
    }
};