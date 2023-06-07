#include <bits/stdc++.h> 
long long maxSubarraySum(int nums[], int n)
{
   long long sum=0;
     long long maxi=-1e14;
     for(int i=0;i<n;i++){
          if(sum<0)
         sum=0;
         sum+=nums[i];
         maxi=max(maxi,sum);
        
     }   
     if(maxi<0) return 0;
     return maxi;
}