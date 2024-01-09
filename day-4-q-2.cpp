#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int result = 0;

        for(int i = 0; i < k; i++) result += cardPoints[i];

        int current = result;

        for(int i = k-1; i >= 0; i--){
            current -= cardPoints[i];
            current += cardPoints[cardPoints.size()-k+i];

            result = max(current , result);
        }
        return result;
    }
};