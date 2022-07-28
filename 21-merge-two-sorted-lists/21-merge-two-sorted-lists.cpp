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
 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *temp= nullptr;
        ListNode *prev= nullptr;

        while(list1!= nullptr && list2!= nullptr){
            if(list1->val<list2->val){
                temp=new ListNode(list1->val,temp);
                list1=list1->next;
            }
            else{
                temp=new ListNode(list2->val,temp);
                list2=list2->next;
            }

        }

        while (list1!= nullptr){
            temp=new ListNode(list1->val,temp);
            list1=list1->next;
        }

        while (list2!= nullptr){
            temp=new ListNode(list2->val,temp);
            list2=list2->next;
        }

        ListNode *curr= temp;
        ListNode *next= nullptr;

        while (curr!= nullptr){
            next=curr->next;
            curr->next= prev;
            prev=curr;
            curr=next;
        }
        curr=prev;
        return curr;
    }
};