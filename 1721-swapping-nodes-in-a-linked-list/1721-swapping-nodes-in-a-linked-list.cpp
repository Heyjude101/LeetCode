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
        //Optimal one pass
        ListNode* p1 = head;
        ListNode* p2 = head;
        ListNode* lead = head;
        int count = 1;
        while(lead != NULL){
            if(count<k){
                p1 =  p1->next;
            }
            if(count>k){
                p2 = p2->next;
            }
            lead = lead->next;
            count++;
        }
        swap(p1->val  , p2->val);
        return head;
        
        
        //2 pass method ( We find the length and then do our stuff)
//         int nodesCount =0;
//         ListNode* temp = head;
//         while(temp != NULL){
//             temp = temp->next;
//             nodesCount++;
//         }
//         int fromFront = k-1;
//         int fromBack = nodesCount - k;
//         ListNode* temp2 = head;
//         ListNode* temp3 = head;

//         while(fromBack--){
//             temp2 = temp2->next;
//         }
//         while(fromFront--){
//             temp3 = temp3->next;
//         }
        
//         swap(temp3->val , temp2->val);

//         return head; 
    }
};