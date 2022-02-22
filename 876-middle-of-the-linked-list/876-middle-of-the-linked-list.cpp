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
        ListNode* n =head;
        int count =0;
        while(n!=NULL){
            count = count+1;
            n=n->next;
        }
        if(count%2 ==0){
            count =  (count/2) + 1;
        }
        else{
            count = (count/2) + 1;
        }
        cout<<count;
        while(count>1){
            head=head->next;
            count--;
        }
        return head;
        
    }
};