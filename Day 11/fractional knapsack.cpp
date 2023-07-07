#include <bits/stdc++.h> 
bool comp(pair<int, int>p1, pair<int, int>p2){
    return ((double)p1.second/(double)p1.first) > ((double)p2.second/(double)p2.first);
    }
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    sort(items.begin(), items.end(), comp);
    int wt=0;
    double ans=0.0;
    for(int i=0;i<n;i++){
        if(wt+items[i].first<=w){
            wt+=items[i].first;
            ans+=items[i].second;
        }
        else{
            int rem=w-wt;
            ans+=(items[i].second/(double)items[i].first)*(double)rem;
            wt=wt+rem;
        }
    }
    return ans;
}