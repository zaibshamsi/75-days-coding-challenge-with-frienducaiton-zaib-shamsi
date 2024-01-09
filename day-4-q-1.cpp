#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int current_max = 0;
        int result = 0;

        if(*max_element(nums.begin(),nums.end()) < 0){
            return *max_element(nums.begin(),nums.end());
        }

        for(int i = 0; i < nums.size(); i++){

             current_max += nums[i];

             if( current_max < 0){
                  current_max = 0;
             }
             result = max(current_max, result);
        }
        return result;
    }
};