class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        unordered_set<int> s;

        for (int x : nums)
            s.insert(x);

        while (head != nullptr && s.count(head->val)) {
            head = head->next;
        }

        ListNode* temp = head;

        while (temp != nullptr && temp->next != nullptr) {

            if (s.count(temp->next->val)) {
                temp->next = temp->next->next;
            }
            else {
                temp = temp->next;
            }
        }

        return head;
    }

};