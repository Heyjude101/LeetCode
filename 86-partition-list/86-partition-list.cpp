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
    ListNode* partition(ListNode* head, int x) {
        if(head == NULL or head->next == NULL) return head;
        int p =201;
        while(p--){
            ListNode* i = head;
            ListNode* j = head->next;
            int flag = 1;
        while(j!= NULL){
            if(j->val < x){
                cout<<"*";
                flag =0;
                if(i->val >= x){
                int temp = i->val;
                i->val = j->val;
                j->val = temp;
                }
            }
            i = i->next;
            j = j->next;  
        }
            if(flag == 1){
                cout<<"flag ==1 reached";
                break;
            }
        }
        return head;
        
    }
};