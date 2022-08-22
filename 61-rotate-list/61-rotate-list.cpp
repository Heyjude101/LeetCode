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
    
    int findLength(ListNode* head){
        int c = 0;
        while(head != NULL){
            head = head->next;
            c++;
        }
        
        return c;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head ==NULL) return head;
        //find the lenght of the linked list first
        ListNode* temp = head;
        ListNode* firstt = head;
        ListNode* second  = head;
        int linked_length = findLength(head);
        //find how many times to rotate optimal
        int times = k%linked_length;
        if(times == 0){
            return head;
        }
        // int thisTime = times;
        int thisTime = linked_length - times -1;
        while(thisTime--){
            second = second->next;
        }
        ListNode* save = second->next;
        ListNode* save1 = second->next;
        // cout<<save->val;
        
        second->next = NULL;
        while(save->next != NULL){
            save = save->next;
        }
        
        // cout<<save->val;
        
        // cout<<first->val;
        
        save->next = firstt;
        return save1;
    }
};