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
    int length(ListNode* n){
        int c=0;
        while(n!=NULL){
            c++;
            n=n->next;
        }
        return c;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //find the length for both of the lined lists
        int a = length(headA);
        int b = length(headB);
        int dif = abs(a-b);
        if(b>a) swap(headA, headB);
        for(int i =0; i<dif;i++){
            headA = headA->next;
        }
        while(headA!=NULL){
            if(headA==headB){
                return headA;
            }
            headA=headA->next;
            headB = headB->next;
        }
        return NULL;
            
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        //Using maps for little better solution
        // unordered_map<ListNode* , bool> m;
        // //create the map
        // while(headA!=NULL){
        //     m[headA] = true;
        //     headA = headA->next;
        // }
        // //now iterate over the next list
        // while(headB!=NULL){
        //     if(m.count(headB)){
        //         return headB;
        //     }
        //     headB=headB->next;
        // }
        // return NULL;
        
        
        
        
        
        
        
        
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