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
    vector<ListNode*> odd;
    vector<ListNode*> even;
    int findLength(ListNode* head){
        int c= 0;
        while(head != NULL){
            c++;
            head = head->next;
        }
        return c; 
    }
    ListNode* swapPairs(ListNode* head) {
        if(!head){
            return head;
        }
        
       //find the length first
        int length = findLength(head);
        if(length==1){
            return  head;
        }
        ListNode* save = head;
        ListNode* saveNext = head->next;
        save->next = NULL;
        for(int i=1;i<=length;i++){
            if(i==1){
                odd.push_back(save);
            }
            
            if(saveNext != NULL){
            save = saveNext;
            saveNext = saveNext->next;
            save->next = NULL;
            if(i%2 == 0){
                odd.push_back(save);
            }
            else{
                even.push_back(save);
            }
            }
        }
        
        //check if the values are right
        // cout<<"ODD values:"<<"\n";
        // for(auto it: odd){
        //     cout<<it->val<<" ";
        //     // odd = it->next;
        // }
        // cout<<"\n";
        // cout<<"EVEN values:"<<"\n";
        // for(auto it: even){
        //     cout<<it->val<<" ";
        //     // it = it->next;
        // }
        
        ListNode* ans = new ListNode(0);
        // ans = ans->next;
        ListNode* movable = ans;
        int o=0;
        int e =0;
        for(int i=1;i<=length;i++){
            if(e < even.size()){
                movable->next = even[e];
                movable = movable->next;
                e++;
            }
            if(o<odd.size()){
                movable->next = odd[o];
                movable = movable->next;
                o++;
            }
        }
        
        
        return ans->next;
        
        
        
        
    }
};