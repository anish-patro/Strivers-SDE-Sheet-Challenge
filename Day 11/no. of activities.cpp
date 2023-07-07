
#include<bits/stdc++.h>
bool comp(pair<int, int>p1, pair<int, int>p2){
    return p1.second<p2.second;
}

int maximumActivities(vector<int> &start, vector<int> &end) {
    // Write your code here.
     vector<pair<int,int>>v;
     for(int i=0;i<start.size();i++){

         v.push_back({start[i],end[i]});

     }
     sort(v.begin(),v.end(),comp);
     int c=1;
     int check=v[0].second;
     for(int i=1;i<v.size();i++){
         if(v[i].first>=check)
         {
             c++;
             check=v[i].second;
         }
     }
     return c;
}