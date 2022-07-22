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
        ListNode *sum= nullptr;
        ListNode *res= nullptr;
        int rem=0;

        while (l1!= nullptr&&l2!= nullptr){
            if((l1->val+l2->val)+rem>=10){

                sum=new ListNode((l1->val+l2->val)-10+rem,sum);
                rem=1;

            } else{
                sum=new ListNode(l1->val+l2->val+rem,sum);
                rem=0;
            }
            l1=l1->next;
            l2=l2->next;
        }

        while (l2!= nullptr){
            if((rem+l2->val)>=10){

                sum=new ListNode((rem+l2->val)-10,sum);
                rem=1;

            } else{
                sum=new ListNode(l2->val+rem,sum);
                rem=0;
            }

            l2=l2->next;
        }

        while (l1!= nullptr){
            if((rem+l1->val)>=10){

                sum=new ListNode((rem+l1->val)-10,sum);
                rem=1;

            } else{
                sum=new ListNode(l1->val+rem,sum);
                rem=0;
            }

            l1=l1->next;
        }

        if(rem==1)
            sum=new ListNode(rem,sum);
        
        while (sum!= nullptr){
            res=new ListNode(sum->val,res);
            sum=sum->next;
        }
        return res;
    }
};