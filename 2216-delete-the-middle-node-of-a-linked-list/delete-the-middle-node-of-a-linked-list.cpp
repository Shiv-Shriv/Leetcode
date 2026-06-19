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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* current = head;
        int len=0;
        while(current!=nullptr){
            len++;
            current=current->next;
        }

        int pos = 0;


        current = head;
        

        while(current!=nullptr){
            if(current->next == nullptr){
                return nullptr;
                }
            else if(pos==(len/2)-1){
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp;
                return head;
            }

            pos++;
            current=current->next;
        }
        return nullptr;
    }
};