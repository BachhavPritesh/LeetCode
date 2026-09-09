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
    bool isPalindrome(ListNode* head) {
       ListNode* add = NULL;
       ListNode* temp = head;

       while(temp!=NULL){
        ListNode* newNode = new ListNode();
        newNode->next = add;
        add = newNode;
        newNode->val = temp->val;
        temp = temp->next;
       }

       temp = head;
       ListNode* temp2 = add;

       while(temp!=NULL){
        if(temp->val != temp2->val){
            return false;
        }
        temp=temp->next;
        temp2=temp2->next;
       }
       return true;
    }
};