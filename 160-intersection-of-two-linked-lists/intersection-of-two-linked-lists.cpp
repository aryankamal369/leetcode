/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int length(ListNode *head){
        int len = 0;
        ListNode *temp = head;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        return len;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1 = length(headA);
        int len2 = length(headB);

        int diff = abs(len1 - len2);
        ListNode *temp1 = headA;
        ListNode *temp2 = headB;
        if(len1>len2){
            while(diff){
                temp1 = temp1->next;
                diff--;
            }
        } else if(len1<len2){
            while(diff){
                temp2 = temp2->next;
                diff--;
            }
        }

        while(temp1!=NULL && temp2!=NULL){
            if(temp1==temp2){
                return temp1;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return NULL;
    }
};