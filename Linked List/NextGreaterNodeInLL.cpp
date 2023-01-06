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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>res;
        stack<int>st;
        for(auto p=head;p!=NULL;p=p->next){
            res.push_back(p->val); // make an array from the given linked list
        }

        for(int i=res.size()-1;i>=0;i--){
            auto val=res[i];
            while(!st.empty() && st.top()<=res[i])st.pop();
            res[i]=st.empty() ? 0 : st.top();
            st.push(val);

        }
        return res;

    }
};
