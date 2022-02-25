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
    int countNodes(ListNode* x){
        ListNode* curr = x;
        int c=0;
        while(curr!=NULL){
            c++;
            curr=curr->next;
        }
        return c;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int req = countNodes(head) - n + 1;
        // cout<<head->val;
        // cout<<head->next->val;
        // cout<<head->next->next->val;
        // cout<<head->next->next->next->val;
        // cout<<head->next->next->next->next->val;
        cout<<req;
        ListNode* temp = head;
        if(req ==1){
            //remove from front
            cout<<"RFF";
            return temp->next;
        }
        else if(req == countNodes(head)){
            //remove from last
            cout<<"RFL";
            for(int i=0;i<req-2;i++){
            temp = temp->next;   
            }
            temp->next = NULL;
        }
        else{
            //remove from middle
            cout<<"RFM";
            for(int i=0;i<req-2;i++){
            cout<<"* ";
            temp = temp->next; 
            }
            cout<<head->val;
        cout<<head->next->val;
        cout<<head->next->next->val;
            temp->next = temp->next->next; 
            // return temp;
        }
        return head;
    }
};