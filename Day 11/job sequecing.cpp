#include <bits/stdc++.h> 
bool comp(vector<int>&v1, vector<int> &v2){
    return v1[1]>v2[1];
}
int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    sort(jobs.begin(), jobs.end(), comp);
    int ans=0;
    int n=0;
    for(int i=0;i<jobs.size();i++)
    n=max(n, jobs[i][0]);
    vector<int>slot(n+1, 1);
    for(int i=0;i<jobs.size();i++){
        int ind=jobs[i][0]-1;
        while(ind>=0 && slot[ind]==0)
        ind--;

        if(ind<0) continue;
        slot[ind]=0;
        ans+=jobs[i][1];
    }
    return ans;
}
