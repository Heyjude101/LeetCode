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
        //Using maps for optimal solution
        unordered_map<ListNode* , bool> m;
        //create the map
        while(headA!=NULL){
            m[headA] = true;
            headA = headA->next;
        }
        //now iterate over the next list
        while(headB!=NULL){
            if(m.count(headB)){
                return headB;
            }
            headB=headB->next;
        }
        return NULL;
        
        
        
        
        
        
        
        
        //Brute Force solution Below:
        // ListNode* curA = headA;
        // while(curA!= NULL){
        //     ListNode* curB = headB;
        //     while(curB!= NULL){
        //         if(curB == curA){
        //             return curA;
        //         }
        //         curB = curB->next;
        //     }
        //     curA = curA->next;
        // }
        // return NULL;
        
    }
};