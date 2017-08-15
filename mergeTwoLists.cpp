/*
Merge two sorted linked lists and return it as a new list.
The new list should be made by splicing together the nodes of the first two lists.
*/
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* c1 = l1;
        ListNode* c2 = l2;
        ListNode* l3 = NULL;
        while(!c1 && !c2){
            if((c1->val) < (c2->val)){
                l3->val = c1->val;
                l3->next = c1->next;
                c1 = c1->next;
            }else{
                l3->val = c2->val;
                l3->next = c2->next;
                c2 = c2->next;
            }
            l3 = l3->next;
        }
        while(!c1){
            l3->val = c1->val;
            l3->next = c1->next;
            c1 = c1->next;
            l3 = l3->next;
        }
        while(!c2){
            l3->val = c2->val;
            l3->next = c2->next;
            c2 = c2->next;
            l3 = l3->next;
        }
        return l3;
    }
};
