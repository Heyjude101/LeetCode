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
    ListNode* swapNodes(ListNode* head, int k) {
        int nodes =0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp->next;
            nodes++;
        }
        int fromFront = k-1;
        int fromBack = nodes - k;
        ListNode* temp2 = head;
                ListNode* temp3 = head;

        while(fromBack--){
            temp2 = temp2->next;
        }
        while(fromFront--){
            temp3 = temp3->next;
        }
        
        swap(temp3->val , temp2->val);
        
        return head;
 
        
    }
};