vector<int>ans;
void solve(int ind, int sum, vector<int>&nums){
	if(ind<0){
		ans.push_back(sum);
		return;
	}
	solve(ind-1, sum+nums[ind], nums);
	solve(ind-1, sum, nums);
}

vector<int> subsetSum(vector<int> &nums){
	// Write your code here.	
	solve(nums.size()-1, 0, nums);
	sort(ans.begin(), ans.end());
	return ans;
}