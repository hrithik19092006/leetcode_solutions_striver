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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode * temp = head;
        int prev = temp ->val;
        temp = temp -> next;
        vector<int> index;
        int i = 1;
        while(temp-> next != nullptr){
            if(prev > temp -> val && temp->next->val > temp -> val){
                index.push_back(i);
            }
            if(prev < temp->val && temp->next-> val < temp->val){
                index.push_back(i);
            }
            prev = temp-> val;
            temp = temp ->next ;
            i++;
        }
        int n = index.size();
        if(n < 2){
            return {-1, -1};
        }
        int mini = INT_MAX;
        vector<int> ans;
        for(int i = 0; i < n -1; i++){
            mini = min(mini , index[i+1] - index[i]);
        }
        return {mini , index[n-1] - index[0]};
    }
};