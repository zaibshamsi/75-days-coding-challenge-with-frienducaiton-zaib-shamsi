#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i <= n; i++){
            sum += i;
        }
        int numSum = 0;
        for(int i = 0; i < nums.size(); i++){
            numSum += nums[i];
        }
        return sum - numSum;
    }
};