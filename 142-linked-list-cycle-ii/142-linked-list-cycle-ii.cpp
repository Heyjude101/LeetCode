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
//         ListNode *slow = head, *fast = head;
        
//         while (fast && fast->next) {
//             slow = slow->next;
//             fast = fast->next->next;
//             if (slow == fast) break;
//         }
//         if (!(fast && fast->next)) return NULL;
//         while (head != slow) {
//             head = head->next;
//             slow = slow->next;
//         }
//         return head;
        
        
        unordered_map<ListNode*  , bool> m;
        while(head!=NULL){
            if(m.count(head)){
                return head;
            }
            m[head] = true;
            head = head->next;
        }
        return NULL;
    }
};