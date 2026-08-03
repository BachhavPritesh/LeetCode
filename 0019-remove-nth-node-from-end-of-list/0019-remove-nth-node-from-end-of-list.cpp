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
        int count = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        int m = count - n;
        ListNode* temp1 = head;
        if (m == 0) {
            ListNode* node = head;
            head = head->next;
            delete node;
            return head;
        }
        for (int i = 0; i < m - 1; i++) {
            temp1 = temp1->next;
        }
        ListNode* nodeToDelete = temp1->next;
        temp1->next = nodeToDelete->next;
        delete nodeToDelete;
        return head;
    }
};