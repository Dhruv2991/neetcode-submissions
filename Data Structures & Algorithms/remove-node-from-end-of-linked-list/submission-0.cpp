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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *ptr1=dummy;
        ListNode *ptr2=dummy;
        int i=0;
        while(i<n){
            ptr1=ptr1->next;
            i++;
        }
        while(ptr1!=NULL && ptr1->next!=NULL){
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        ptr2->next=ptr2->next->next;
        return dummy->next;
    }
};
