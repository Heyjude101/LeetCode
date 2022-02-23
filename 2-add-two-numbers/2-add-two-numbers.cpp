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
        ListNode* ans = NULL;
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        int carry = 0;
        while(l1!=NULL && l2!=NULL){
            int sum  = l1->val + l2->val + carry;
            ListNode* t = new ListNode(sum%10);
            t->next = ans;
            ans = t;
            carry  = sum/10;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1!=NULL){
            int sum  = l1->val + carry;
            ListNode* t = new ListNode(sum%10);
            t->next = ans;
            ans = t;
            carry  = sum/10;
            l1 = l1->next;
        }
        while(l2!=NULL){
            int sum  = l2->val + carry;
            ListNode* t = new ListNode(sum%10);
            t->next = ans;
            ans = t;
            carry  = sum/10;
            l2 = l2->next;
        }
        if(carry>0){
            ListNode* t = new ListNode(carry);
            t->next = ans;
            ans = t;  
        }
        //reverse the linked list
        ListNode* prev = NULL;
        ListNode* curr = ans;
        while(curr!=NULL){
            ListNode* save = curr->next;
            curr->next = prev;
            prev = curr;
            curr = save;   
        }
        ans = prev;
        return ans;
        
    }
};