#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>nums, int n, int K) {
	// Write your code here.
	sort(nums.begin(),nums.end());
      vector<vector<int>>v;
        // int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
             int sum=nums[i]+nums[j]+nums[k];
                if(sum==K)
                {
                    v.push_back({nums[i],nums[j],nums[k]});
                    int val1=nums[j];
                    while(j<k && nums[j]==val1)
                    {
                        j++;
                    }
                    int val2=nums[k];
                    while(j<k && nums[k]==val2)
                    {
                        k--;
                    }
                }
                else if(sum>K)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        return v;
}