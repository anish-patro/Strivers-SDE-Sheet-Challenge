#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    //Write your code here
    map<char, int>m;
       int ans=0;
       int low=0;
       int high=0;
       int n=s.size();
       while( high<n){
           m[s[high]]++;
               while(m[s[high]]!=1){
               m[s[low]]--;
               low++;
               }
               ans=max(ans, high-low+1);
          high++;
       } 
       return ans;
}