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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return head;
        auto prev = head;
        auto it = head;
        
        while(it){
            //cout << "prev:" << prev->val << " now:"<<it->val << endl;
            if(it->val == val ){
                
                if(it == head)
                    head = it->next;
                else{
                    if(it->next==NULL)
                        prev->next = NULL;
                    else
                        prev->next = it->next;
                }
                //cout << "change: prev->next:"<<prev->next->val;
            }else{
                prev = it;   
            
            }
            it = it ->next;
        }
        return head;
    }
};
