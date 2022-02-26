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
    ListNode *detectCycle(ListNode *head) {
        //using 2 pointers
        //arrive at a node inside the cycle
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast and fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) break;
        }
        if(fast == NULL or fast->next == NULL) return NULL;
        //count the nodes in the loop
        slow = slow->next;
        int count =1;
        while(fast != slow){
            count++;
            slow = slow->next;
        }
        ListNode* a =head;
        ListNode* b = head;
        while(count--){
            b = b->next;
        }
        while(a!=b){
            a = a->next;
            b =b->next;
        }
        
        return a;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        // ListNode *slow = head, *fast = head;
        // while (fast && fast->next) {
        //     slow = slow->next;
        //     fast = fast->next->next;
        //     if (slow == fast) break;
        // }
        // if (!(fast && fast->next)) return NULL;
        // while (head != slow) {
        //     head = head->next;
        //     slow = slow->next;
        // }
        // return head;
        
        //using maps
        // unordered_map<ListNode*  , bool> m;
        // while(head!=NULL){
        //     if(m.count(head)){
        //         return head;
        //     }
        //     m[head] = true;
        //     head = head->next;
        // }
        // return NULL;
    }
};