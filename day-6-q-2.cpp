#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        unordered_map<int,int> freq;
        for(int i : nums){
            freq[i]++;
        }
        int ans  = 0;
        for(auto x : freq){

            if(k == 0){
                if(x.second > 1) ans++;
            }
            else if(freq.find(x.first+k)!= freq.end()) ans++;
        }
        return ans;
    }
};