#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   int n=arr.size();
   int low=0;
   int high=n-1;
   sort(arr.begin(), arr.end());
   vector<vector<int>>ans;
  for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == s) {
                ans.push_back({arr[i],arr[j]});
               //  ans.push_back(j);
                         }
        }
    }
       return ans;

}