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
    ListNode* middleNode(ListNode* head) {
        //Fast and slow pointer approach
        ListNode* fast  = head->next;
        ListNode* slow = head;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow=slow->next;
        }
        if(fast!=NULL) return slow->next;
        else
        return slow;
        
        
        
        
        
        
        
        
        
        
        
        //better using time and space tradeoff.
        // ListNode* n =head;
        // vector<ListNode*> nv;
        // int count =0;
        // while(n!=NULL){
        //     count = count+1;
        //     nv.push_back(n);
        //     n=n->next;
        // }
        // return nv[count/2];
        
        
        
        
        
        
        
        //Basic solution (N+N/2) run time
        // ListNode* n =head;
        // int count =0;
        // while(n!=NULL){
        //     count = count+1;
        //     n=n->next;
        // }
        // count = (count/2) + 1;
        // while(count>1){
        //     head=head->next;
        //     count--;
        // }
        // return head;
        
    }
};