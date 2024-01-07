#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int min_pr = INT_MAX;
        int max = 0;
        for(int i = 0; i < prices.size(); i++){

            if(prices[i] < min_pr){
                min_pr = prices[i];
            }
            else if(prices[i] - min_pr > max){
                max = prices[i] - min_pr; 
            }
        }
        return max;
    }
};