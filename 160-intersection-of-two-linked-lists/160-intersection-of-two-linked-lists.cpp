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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curA = headA;
        while(curA!= NULL){
            ListNode* curB = headB;
            while(curB!= NULL){
                if(curB == curA){
                    return curA;
                }
                curB = curB->next;
            }
            curA = curA->next;
        }
        return NULL;
        
    }
};