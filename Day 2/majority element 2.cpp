#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n=arr.size();
    vector<int>ans;
    map<int, int>m;
	for(int i=0;i<n; i++)
	m[arr[i]]++;
	for(auto it:m)
	if(it.second> floor(n/3)) 
    ans.push_back(it.first);
	return ans;

}