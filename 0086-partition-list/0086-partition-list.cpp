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
    ListNode* partition(ListNode* head, int x) {
        ListNode * smalldummy = new ListNode(0);
        ListNode * bigdummy = new ListNode(0);
        ListNode * small = smalldummy;
        ListNode * big= bigdummy;
        ListNode * temp = head;
        while(temp != nullptr){
            if(temp -> val < x){
                small -> next = temp;
                small = small -> next;
            }
            else {
                big -> next = temp;
                big = big -> next;
            }
            temp = temp -> next;
        }
        big -> next = nullptr;
        small -> next = bigdummy -> next;
        return smalldummy -> next;
    }
};