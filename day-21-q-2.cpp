#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        // int n = nums.size();
        // vector<int>ans;
    
        // for(int i = 0; i < n-k+1; i++){
        //     int maxx = nums[i];
        //     for(int j = i; j < i+k; j++){
        //         maxx = max(maxx,nums[j]); 
        //     }
        //     ans.push_back(maxx);
            
        // }
        // return ans;
        // O(n^2) 37/51 test cases are working

        vector<int>ans;
        deque<int>dq;

        for(int i = 0; i < nums.size(); i++){

            if(!dq.empty() && dq.front() == i-k) dq.pop_front();

            while(!dq.empty() && nums[dq.back()] <= nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            if(i >= k-1) {
                ans.push_back(nums[dq.front()]);
            }
        }
        return ans;
    }
};