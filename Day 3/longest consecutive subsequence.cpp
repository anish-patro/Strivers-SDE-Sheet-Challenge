#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n) {
    // Write your code here.
     sort(nums.begin(), nums.end());
        int c=1;
        int ans=INT_MIN;
  
        if(n==0) return 0;
        for(int i=0;i<n-1;i++){
         if(nums[i+1]==nums[i]+1) c++;
         else if(nums[i+1]==nums[i]) continue;
         else{
             ans=max(ans, c);
             c=1;
         }
        }
        ans=max(ans, c);
        return ans;
    
}