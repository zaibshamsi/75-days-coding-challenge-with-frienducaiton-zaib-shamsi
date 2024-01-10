#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
         m = m + n;
        
        int i = m-1;
        int j = 0;
       while(j<n){
             
             nums1[i] = nums2[j];
             i--;
             j++;
            
  
       } sort(nums1.begin(),nums1.end());
    //   for(int i =0; i<m; i++){

    //       for(int j = i + 1; j < m; j++){
              
    //           if(nums1[j] < nums1[i]){
    //               swap(nums1[j], nums1[i]);
                  
    //           }
              
    //       }
      }
        
     
        
    };