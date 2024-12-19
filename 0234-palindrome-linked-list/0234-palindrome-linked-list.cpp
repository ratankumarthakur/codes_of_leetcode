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
    ListNode* reverse(ListNode* head,int y){
        if(head==NULL || head->next==NULL)return head;
        ListNode *p=NULL , *c=head , *n=head->next;
        while(y--){
            c->next=p;
            p=c;c=n;if(n!=NULL)n=n->next;
        }return p;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }
        if(head->next->next==NULL && head->val==head->next->val){
            return true;
        }
        ListNode *temp=head;
        int n=0;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        int x;
        ListNode *s=head,*l=head;
        if(n%2==0){
            x=n/2;
            while(x--){
                s=s->next;
            }
            l=reverse(s,n/2);
        }
        else{
            x=n/2;
            while(x--){
                s=s->next;
            }s=s->next;;
            l=reverse(s,n/2);
        }x=n/2;
        temp=head;
        while(x--){
            if(l->val!=temp->val){
                return false;
            }
            l=l->next;temp=temp->next;
        }return true;
    }
};