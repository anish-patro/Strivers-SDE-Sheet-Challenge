#include <bits/stdc++.h>
using namespace std;

void solve(int ind, vector<int> &arr, int target, vector<int> temp, vector<vector<int>> &ans){
           if(target==0)
          { ans.push_back(temp);
		   return;}

	 for(int i=ind;i<arr.size();i++){
		 if(i>ind && arr[i]==arr[i-1]) continue;
		 if(arr[i]>target) break;

		 temp.push_back(arr[i]);
		 solve(i+1, arr, target-arr[i], temp, ans);
		 temp.pop_back();
	 }
}

vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target){
	// Write your code here.
	vector<int>temp;
	vector<vector<int>>ans;
	sort(arr.begin(), arr.end());
	solve(0, arr, target, temp, ans);
	return ans;
}
