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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k == 0){
            return head;
        }
        ListNode* temp = head;
        int length = 1;
        while(temp->next){
            length++;
            temp = temp->next;
        }
        k = k%length;

        if(k == 0){
            return head;
        }
        temp->next = head;
        int num = length - k - 1;
        ListNode* temp1 = head;

        while(num--){
            temp1 = temp1->next;
        }
        ListNode* head2 = temp1->next;
        temp1->next = nullptr;

        return head2;

    }
};