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
    ListNode* conquer(ListNode* &h1 , ListNode* &h2){
        if(h1==NULL) return h2;
        if(h2 == NULL) return h1;
        ListNode* s = new ListNode(0);
        if(h1->val < h2->val){
            s = h1;
            h1 = h1->next;
        }
        else{
            s = h2;
            h2 = h2->next;
        }
        //saved the head
        ListNode* ans = s;
        while(h1 && h2){
            if(h1->val < h2->val){
                s->next = h1;
                s = h1;
                h1 = h1->next;
            }
            else{
                s->next = h2;
                s = h2;
                h2 = h2->next;
            }  
        }
        if(h1){
            s->next = h1;
        }
        if(h2){
            s->next = h2;  
        }
        return ans;     
    }
    ListNode* divide(vector<ListNode*> &lists , int start , int end){
        if(start ==  end) return lists[start];
        int mid = (start + end)/2;
        ListNode* left = divide(lists , start , mid);
        ListNode* right = divide(lists , mid+1 , end);
        return conquer(left , right);
    }
    
//     struct mycmp{
//         bool operator()(ListNode* a, ListNode* b){
//             return a->val > b->val;
//         }
//     };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
//         priority_queue<ListNode* ,  vector<ListNode*> , mycmp> pq;
//         for(int i=0;i<lists.size();i++){
//             if(lists[i]!=NULL){
//                 pq.push(lists[i]);
//             }
//         }
//         ListNode* ans = NULL;
//         ListNode* tail = NULL;
        
//         while(!pq.empty()){
//             ListNode* temp = pq.top();
//             pq.pop();
//             if(ans == NULL){
//                 ans = tail = temp;
//             }
//             else{
//                 tail->next = temp;
//                 tail = temp;
//             }
//             if(temp->next != NULL){
//                 pq.push(temp->next);
//             }
//         }
        
//         return ans;
        

        
        
        //basic checks
        if(lists.size() == 0) return NULL;
        if(lists.size() == 1) return lists[0];
        return divide(lists , 0, lists.size()-1);
    }
};