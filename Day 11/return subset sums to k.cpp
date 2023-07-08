vector<vector<int>>ans;
void solve(int ind, vector<int> &arr, int target, vector<int> temp){
   if(ind==arr.size()){
       if(accumulate(temp.begin(), temp.end(), 0)==target){
           ans.push_back(temp);
       }
       return;
   }
    temp.push_back(arr[ind]);
    solve(ind+1, arr, target, temp);
    temp.pop_back();
    solve(ind+1, arr, target, temp);
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<int>temp;
    solve(0, arr, k, temp);
    return ans;
}