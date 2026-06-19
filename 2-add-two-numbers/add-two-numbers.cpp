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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* trav1 = l1;
    ListNode* trav2 = l2;
    ListNode* temp = nullptr;
    ListNode* ans = nullptr;
    int rem = 0;
    while(trav1!=NULL||trav2!=NULL){
        int sum;
        ListNode* NewNode = new ListNode();
        if(trav1==NULL){
            sum = trav2->val + rem;
        }
        else if(trav2==NULL){
            sum = trav1->val + rem;
        }
        else{
            sum = (trav1->val + trav2->val) + rem;
        }

        if(sum>9){
               NewNode->val = sum%10;
                rem = sum/10;
        }
        else{
            NewNode->val = sum;
            rem = 0;
        }
    
        if(temp == nullptr){
            temp = NewNode;
            ans = NewNode;
        }
        else{
            temp->next = NewNode;
            temp = NewNode;
        }
        if(trav2 == nullptr){
        trav1 = trav1->next;
        }
        else if(trav1==nullptr){
        trav2 = trav2->next;
        }
        else{
            trav1 = trav1->next;
            trav2 = trav2->next;
        }
    }
    if(rem!=0){
        temp->next = new ListNode();
        temp->next->val = rem;
    }
    return ans;
    
    }
};