#include <bits/stdc++.h>
using namespace std;

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        vector<int>nums;
        for(int i = 0; i < lists.size(); i++){
            ListNode*temp = lists[i];
            while(temp != nullptr){
                nums.push_back(temp->val);
                temp = temp -> next;
            }
        }
        ListNode*newnode = new ListNode(0);
        ListNode*head = newnode;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); i++){
            head -> next = new ListNode(nums[i]);
            head = head->next;
        }
        return newnode->next; 
        /* i have written this code by myself but the time complexity goes to O(n logn) so
         i want to further optimize it but unable to*/

        
         
    }
};