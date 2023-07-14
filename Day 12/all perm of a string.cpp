#include <bits/stdc++.h> 
vector<string>ans;
void solve(int ind, string s){
    if(ind==s.size()){
        ans.push_back(s);
        return;
    }
    for(int i=ind;i<s.size();i++){
        swap(s[ind], s[i]);
        solve(ind+1, s);
        swap(s[ind], s[i]);
    }
}
vector<string> findPermutations(string &s) {
    // Write your code here.
    solve(0, s);
    return ans;
}